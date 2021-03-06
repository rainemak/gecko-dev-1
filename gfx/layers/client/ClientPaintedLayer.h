/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*-
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef GFX_CLIENTPAINTEDLAYER_H
#define GFX_CLIENTPAINTEDLAYER_H

#include "ClientLayerManager.h"         // for ClientLayerManager, etc
#include "Layers.h"                     // for PaintedLayer, etc
#include "RotatedBuffer.h"              // for RotatedContentBuffer, etc
#include "mozilla/Attributes.h"         // for MOZ_OVERRIDE
#include "mozilla/RefPtr.h"             // for RefPtr
#include "mozilla/layers/ContentClient.h"  // for ContentClient
#include "mozilla/mozalloc.h"           // for operator delete
#include "nsDebug.h"                    // for NS_ASSERTION
#include "nsISupportsImpl.h"            // for MOZ_COUNT_CTOR, etc
#include "nsRegion.h"                   // for nsIntRegion
#include "mozilla/layers/PLayerTransaction.h" // for PaintedLayerAttributes

class gfxContext;

namespace mozilla {
namespace layers {

class CompositableClient;
class ShadowableLayer;
class SpecificLayerAttributes;

class ClientPaintedLayer : public PaintedLayer,
                          public ClientLayer {
public:
  typedef RotatedContentBuffer::PaintState PaintState;
  typedef RotatedContentBuffer::ContentType ContentType;

  explicit ClientPaintedLayer(ClientLayerManager* aLayerManager,
                             LayerManager::PaintedLayerCreationHint aCreationHint = LayerManager::NONE) :
    PaintedLayer(aLayerManager,
                static_cast<ClientLayer*>(MOZ_THIS_IN_INITIALIZER_LIST()),
                aCreationHint),
    mContentClient(nullptr)
  {
    MOZ_COUNT_CTOR(ClientPaintedLayer);
  }

protected:
  virtual ~ClientPaintedLayer()
  {
    if (mContentClient) {
      mContentClient->OnDetach();
      mContentClient = nullptr;
    }
    MOZ_COUNT_DTOR(ClientPaintedLayer);
  }

public:
  virtual void SetVisibleRegion(const nsIntRegion& aRegion)
  {
    NS_ASSERTION(ClientManager()->InConstruction(),
                 "Can only set properties in construction phase");
    PaintedLayer::SetVisibleRegion(aRegion);
  }
  virtual void InvalidateRegion(const nsIntRegion& aRegion)
  {
    NS_ASSERTION(ClientManager()->InConstruction(),
                 "Can only set properties in construction phase");
    mInvalidRegion.Or(mInvalidRegion, aRegion);
    mInvalidRegion.SimplifyOutward(20);
    mValidRegion.Sub(mValidRegion, mInvalidRegion);
  }

  virtual void RenderLayer() { RenderLayerWithReadback(nullptr); }

  virtual void RenderLayerWithReadback(ReadbackProcessor *aReadback) MOZ_OVERRIDE;

  virtual void ClearCachedResources()
  {
    if (mContentClient) {
      mContentClient->Clear();
    }
    mValidRegion.SetEmpty();
    DestroyBackBuffer();
  }
  
  virtual void FillSpecificAttributes(SpecificLayerAttributes& aAttrs)
  {
    aAttrs = PaintedLayerAttributes(GetValidRegion());
  }
  
  ClientLayerManager* ClientManager()
  {
    return static_cast<ClientLayerManager*>(mManager);
  }
  
  virtual Layer* AsLayer() { return this; }
  virtual ShadowableLayer* AsShadowableLayer() { return this; }

  virtual CompositableClient* GetCompositableClient() MOZ_OVERRIDE
  {
    return mContentClient;
  }

  virtual void Disconnect()
  {
    mContentClient = nullptr;
    ClientLayer::Disconnect();
  }

protected:
  void PaintThebes();
  
  void DestroyBackBuffer()
  {
    mContentClient = nullptr;
  }

  RefPtr<ContentClient> mContentClient;
};

}
}

#endif
