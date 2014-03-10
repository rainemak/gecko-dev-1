/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/*
 * a list of the CSS properties that are exposed on nsComputedDOMStyle
 * objects, for preprocessing
 */

/******

  This file contains the list of CSS properties that are exposed
  on nsComputedDOMStyle objects.  It is designed to be included in
  nsComputedDOMStyle.cpp to generate the "computed style map", a
  table of property IDs and corresponding functions on nsComputedDOMStyle
  that return the CSSValue representing that property's computed value.

  The COMPUTED_STYLE_PROP macro is defined for each such property.
  Its arguments are:

  -. 'id' the nsCSSProperty ID, without the leading "nsCSSProperty_".

  -. 'method' the nsComputedDOMStyle method name that returns the
  CSSValue representing that property's computed value, without the leading
  "Do".

 ******/

/* ******************************************************************* *\
 * Properties below are listed in alphabetical order.                  *
 * Please keep them that way.                                          *
 *                                                                     *
 * Properties commented out with // are not yet implemented            *
 * Properties commented out with //// are shorthands and not queryable *
\* ******************************************************************* */

/* ***************************** *\
 * Implementations of CSS styles *
\* ***************************** */

COMPUTED_STYLE_PROP(align_content,                   AlignContent)
COMPUTED_STYLE_PROP(align_items,                   AlignItems)
COMPUTED_STYLE_PROP(align_self,                    AlignSelf)
//// COMPUTED_STYLE_PROP(animation,                Animation)
COMPUTED_STYLE_PROP(animation_delay,               AnimationDelay)
COMPUTED_STYLE_PROP(animation_direction,           AnimationDirection)
COMPUTED_STYLE_PROP(animation_duration,            AnimationDuration)
COMPUTED_STYLE_PROP(animation_fill_mode,           AnimationFillMode)
COMPUTED_STYLE_PROP(animation_iteration_count,     AnimationIterationCount)
COMPUTED_STYLE_PROP(animation_name,                AnimationName)
COMPUTED_STYLE_PROP(animation_play_state,          AnimationPlayState)
COMPUTED_STYLE_PROP(animation_timing_function,     AnimationTimingFunction)
COMPUTED_STYLE_PROP(backface_visibility,           BackfaceVisibility)
//// COMPUTED_STYLE_PROP(background,               Background)
COMPUTED_STYLE_PROP(background_attachment,         BackgroundAttachment)
COMPUTED_STYLE_PROP(background_blend_mode,         BackgroundBlendMode)
COMPUTED_STYLE_PROP(background_clip,               BackgroundClip)
COMPUTED_STYLE_PROP(background_color,              BackgroundColor)
COMPUTED_STYLE_PROP(background_image,              BackgroundImage)
COMPUTED_STYLE_PROP(background_origin,             BackgroundOrigin)
COMPUTED_STYLE_PROP(background_position,           BackgroundPosition)
COMPUTED_STYLE_PROP(background_repeat,             BackgroundRepeat)
COMPUTED_STYLE_PROP(background_size,               BackgroundSize)
//// COMPUTED_STYLE_PROP(border,                   Border)
//// COMPUTED_STYLE_PROP(border_bottom,            BorderBottom)
COMPUTED_STYLE_PROP(border_bottom_color,           BorderBottomColor)
COMPUTED_STYLE_PROP(border_bottom_left_radius,     BorderBottomLeftRadius)
COMPUTED_STYLE_PROP(border_bottom_right_radius,    BorderBottomRightRadius)
COMPUTED_STYLE_PROP(border_bottom_style,           BorderBottomStyle)
COMPUTED_STYLE_PROP(border_bottom_width,           BorderBottomWidth)
COMPUTED_STYLE_PROP(border_collapse,               BorderCollapse)
//// COMPUTED_STYLE_PROP(border_color,             BorderColor)
//// COMPUTED_STYLE_PROP(border_image,             BorderImage)
COMPUTED_STYLE_PROP(border_image_outset,           BorderImageOutset)
COMPUTED_STYLE_PROP(border_image_repeat,           BorderImageRepeat)
COMPUTED_STYLE_PROP(border_image_slice,            BorderImageSlice)
COMPUTED_STYLE_PROP(border_image_source,           BorderImageSource)
COMPUTED_STYLE_PROP(border_image_width,            BorderImageWidth)
//// COMPUTED_STYLE_PROP(border_left,              BorderLeft)
COMPUTED_STYLE_PROP(border_left_color,             BorderLeftColor)
COMPUTED_STYLE_PROP(border_left_style,             BorderLeftStyle)
COMPUTED_STYLE_PROP(border_left_width,             BorderLeftWidth)
//// COMPUTED_STYLE_PROP(border_right,             BorderRight)
COMPUTED_STYLE_PROP(border_right_color,            BorderRightColor)
COMPUTED_STYLE_PROP(border_right_style,            BorderRightStyle)
COMPUTED_STYLE_PROP(border_right_width,            BorderRightWidth)
COMPUTED_STYLE_PROP(border_spacing,                BorderSpacing)
//// COMPUTED_STYLE_PROP(border_style,             BorderStyle)
//// COMPUTED_STYLE_PROP(border_top,               BorderTop)
COMPUTED_STYLE_PROP(border_top_color,              BorderTopColor)
COMPUTED_STYLE_PROP(border_top_left_radius,        BorderTopLeftRadius)
COMPUTED_STYLE_PROP(border_top_right_radius,       BorderTopRightRadius)
COMPUTED_STYLE_PROP(border_top_style,              BorderTopStyle)
COMPUTED_STYLE_PROP(border_top_width,              BorderTopWidth)
//// COMPUTED_STYLE_PROP(border_width,             BorderWidth)
COMPUTED_STYLE_PROP(bottom,                        Bottom)
COMPUTED_STYLE_PROP(box_shadow,                    BoxShadow)
COMPUTED_STYLE_PROP(box_sizing,                    BoxSizing)
COMPUTED_STYLE_PROP(caption_side,                  CaptionSide)
COMPUTED_STYLE_PROP(clear,                         Clear)
COMPUTED_STYLE_PROP(clip,                          Clip)
COMPUTED_STYLE_PROP(color,                         Color)
COMPUTED_STYLE_PROP(content,                       Content)
COMPUTED_STYLE_PROP(counter_increment,             CounterIncrement)
COMPUTED_STYLE_PROP(counter_reset,                 CounterReset)
COMPUTED_STYLE_PROP(cursor,                        Cursor)
COMPUTED_STYLE_PROP(direction,                     Direction)
COMPUTED_STYLE_PROP(display,                       Display)
COMPUTED_STYLE_PROP(empty_cells,                   EmptyCells)
COMPUTED_STYLE_PROP(flex_basis,                    FlexBasis)
COMPUTED_STYLE_PROP(flex_direction,                FlexDirection)
COMPUTED_STYLE_PROP(flex_grow,                     FlexGrow)
COMPUTED_STYLE_PROP(flex_shrink,                   FlexShrink)
COMPUTED_STYLE_PROP(flex_wrap,                     FlexWrap)
COMPUTED_STYLE_PROP(float,                         Float)
//// COMPUTED_STYLE_PROP(font,                     Font)
COMPUTED_STYLE_PROP(font_family,                   FontFamily)
COMPUTED_STYLE_PROP(font_kerning,                  FontKerning)
COMPUTED_STYLE_PROP(font_size,                     FontSize)
COMPUTED_STYLE_PROP(font_size_adjust,              FontSizeAdjust)
COMPUTED_STYLE_PROP(font_stretch,                  FontStretch)
COMPUTED_STYLE_PROP(font_style,                    FontStyle)
COMPUTED_STYLE_PROP(font_synthesis,                FontSynthesis)
COMPUTED_STYLE_PROP(font_variant,                  FontVariant)
COMPUTED_STYLE_PROP(font_variant_alternates,       FontVariantAlternates)
COMPUTED_STYLE_PROP(font_variant_caps,             FontVariantCaps)
COMPUTED_STYLE_PROP(font_variant_east_asian,       FontVariantEastAsian)
COMPUTED_STYLE_PROP(font_variant_ligatures,        FontVariantLigatures)
COMPUTED_STYLE_PROP(font_variant_numeric,          FontVariantNumeric)
COMPUTED_STYLE_PROP(font_variant_position,         FontVariantPosition)
COMPUTED_STYLE_PROP(font_weight,                   FontWeight)
COMPUTED_STYLE_PROP(height,                        Height)
COMPUTED_STYLE_PROP(image_orientation,             ImageOrientation)
COMPUTED_STYLE_PROP(ime_mode,                      IMEMode)
COMPUTED_STYLE_PROP(justify_content,               JustifyContent)
COMPUTED_STYLE_PROP(left,                          Left)
COMPUTED_STYLE_PROP(letter_spacing,                LetterSpacing)
COMPUTED_STYLE_PROP(line_height,                   LineHeight)
//// COMPUTED_STYLE_PROP(list_style,               ListStyle)
COMPUTED_STYLE_PROP(list_style_image,              ListStyleImage)
COMPUTED_STYLE_PROP(list_style_position,           ListStylePosition)
COMPUTED_STYLE_PROP(list_style_type,               ListStyleType)
//// COMPUTED_STYLE_PROP(margin,                   Margin)
COMPUTED_STYLE_PROP(margin_bottom,                 MarginBottomWidth)
COMPUTED_STYLE_PROP(margin_left,                   MarginLeftWidth)
COMPUTED_STYLE_PROP(margin_right,                  MarginRightWidth)
COMPUTED_STYLE_PROP(margin_top,                    MarginTopWidth)
COMPUTED_STYLE_PROP(marker_offset,                 MarkerOffset)
// COMPUTED_STYLE_PROP(marks,                      Marks)
COMPUTED_STYLE_PROP(max_height,                    MaxHeight)
COMPUTED_STYLE_PROP(max_width,                     MaxWidth)
COMPUTED_STYLE_PROP(min_height,                    MinHeight)
COMPUTED_STYLE_PROP(min_width,                     MinWidth)
COMPUTED_STYLE_PROP(mix_blend_mode,                MixBlendMode)
COMPUTED_STYLE_PROP(opacity,                       Opacity)
// COMPUTED_STYLE_PROP(orphans,                    Orphans)
//// COMPUTED_STYLE_PROP(outline,                  Outline)
COMPUTED_STYLE_PROP(order,                         Order)
COMPUTED_STYLE_PROP(outline_color,                 OutlineColor)
COMPUTED_STYLE_PROP(outline_offset,                OutlineOffset)
COMPUTED_STYLE_PROP(outline_style,                 OutlineStyle)
COMPUTED_STYLE_PROP(outline_width,                 OutlineWidth)
COMPUTED_STYLE_PROP(overflow,                      Overflow)
COMPUTED_STYLE_PROP(overflow_clip_box,             OverflowClipBox)
COMPUTED_STYLE_PROP(overflow_x,                    OverflowX)
COMPUTED_STYLE_PROP(overflow_y,                    OverflowY)
//// COMPUTED_STYLE_PROP(padding,                  Padding)
COMPUTED_STYLE_PROP(padding_bottom,                PaddingBottom)
COMPUTED_STYLE_PROP(padding_left,                  PaddingLeft)
COMPUTED_STYLE_PROP(padding_right,                 PaddingRight)
COMPUTED_STYLE_PROP(padding_top,                   PaddingTop)
// COMPUTED_STYLE_PROP(page,                       Page)
COMPUTED_STYLE_PROP(page_break_after,              PageBreakAfter)
COMPUTED_STYLE_PROP(page_break_before,             PageBreakBefore)
COMPUTED_STYLE_PROP(page_break_inside,             PageBreakInside)
COMPUTED_STYLE_PROP(perspective,                   Perspective)
COMPUTED_STYLE_PROP(perspective_origin,            PerspectiveOrigin)
COMPUTED_STYLE_PROP(pointer_events,                PointerEvents)
COMPUTED_STYLE_PROP(position,                      Position)
COMPUTED_STYLE_PROP(quotes,                        Quotes)
COMPUTED_STYLE_PROP(resize,                        Resize)
COMPUTED_STYLE_PROP(right,                         Right)
//// COMPUTED_STYLE_PROP(size,                     Size)
COMPUTED_STYLE_PROP(table_layout,                  TableLayout)
COMPUTED_STYLE_PROP(text_align,                    TextAlign)
COMPUTED_STYLE_PROP(text_combine_horizontal,       TextCombineHorizontal)
COMPUTED_STYLE_PROP(text_decoration,               TextDecoration)
COMPUTED_STYLE_PROP(text_indent,                   TextIndent)
COMPUTED_STYLE_PROP(text_orientation,              TextOrientation)
COMPUTED_STYLE_PROP(text_overflow,                 TextOverflow)
COMPUTED_STYLE_PROP(text_shadow,                   TextShadow)
COMPUTED_STYLE_PROP(text_transform,                TextTransform)
COMPUTED_STYLE_PROP(top,                           Top)
COMPUTED_STYLE_PROP(touch_action,                  TouchAction)
COMPUTED_STYLE_PROP(transform,                     Transform)
COMPUTED_STYLE_PROP(transform_origin,              TransformOrigin)
COMPUTED_STYLE_PROP(transform_style,               TransformStyle)
//// COMPUTED_STYLE_PROP(transition,               Transition)
COMPUTED_STYLE_PROP(transition_delay,              TransitionDelay)
COMPUTED_STYLE_PROP(transition_duration,           TransitionDuration)
COMPUTED_STYLE_PROP(transition_property,           TransitionProperty)
COMPUTED_STYLE_PROP(transition_timing_function,    TransitionTimingFunction)
COMPUTED_STYLE_PROP(unicode_bidi,                  UnicodeBidi)
COMPUTED_STYLE_PROP(vertical_align,                VerticalAlign)
COMPUTED_STYLE_PROP(visibility,                    Visibility)
COMPUTED_STYLE_PROP(white_space,                   WhiteSpace)
// COMPUTED_STYLE_PROP(widows,                     Widows)
COMPUTED_STYLE_PROP(width,                         Width)
COMPUTED_STYLE_PROP(will_change,                   WillChange)
COMPUTED_STYLE_PROP(word_break,                    WordBreak)
COMPUTED_STYLE_PROP(word_spacing,                  WordSpacing)
COMPUTED_STYLE_PROP(word_wrap,                     WordWrap)
COMPUTED_STYLE_PROP(writing_mode,                  WritingMode)
COMPUTED_STYLE_PROP(z_index,                       ZIndex)

/* ******************************* *\
 * Implementations of -moz- styles *
\* ******************************* */

COMPUTED_STYLE_PROP(appearance,                    Appearance)
COMPUTED_STYLE_PROP(_moz_background_inline_policy, BackgroundInlinePolicy)
COMPUTED_STYLE_PROP(binding,                       Binding)
COMPUTED_STYLE_PROP(border_bottom_colors,          BorderBottomColors)
COMPUTED_STYLE_PROP(border_left_colors,            BorderLeftColors)
COMPUTED_STYLE_PROP(border_right_colors,           BorderRightColors)
COMPUTED_STYLE_PROP(border_top_colors,             BorderTopColors)
COMPUTED_STYLE_PROP(box_align,                     BoxAlign)
COMPUTED_STYLE_PROP(box_direction,                 BoxDirection)
COMPUTED_STYLE_PROP(box_flex,                      BoxFlex)
COMPUTED_STYLE_PROP(box_ordinal_group,             BoxOrdinalGroup)
COMPUTED_STYLE_PROP(box_orient,                    BoxOrient)
COMPUTED_STYLE_PROP(box_pack,                      BoxPack)
COMPUTED_STYLE_PROP(_moz_column_count,             ColumnCount)
COMPUTED_STYLE_PROP(_moz_column_fill,              ColumnFill)
COMPUTED_STYLE_PROP(_moz_column_gap,               ColumnGap)
//// COMPUTED_STYLE_PROP(_moz_column_rule,         ColumnRule)
COMPUTED_STYLE_PROP(_moz_column_rule_color,        ColumnRuleColor)
COMPUTED_STYLE_PROP(_moz_column_rule_style,        ColumnRuleStyle)
COMPUTED_STYLE_PROP(_moz_column_rule_width,        ColumnRuleWidth)
COMPUTED_STYLE_PROP(_moz_column_width,             ColumnWidth)
COMPUTED_STYLE_PROP(float_edge,                    FloatEdge)
COMPUTED_STYLE_PROP(font_feature_settings,         FontFeatureSettings)
COMPUTED_STYLE_PROP(font_language_override,        FontLanguageOverride)
COMPUTED_STYLE_PROP(force_broken_image_icon,       ForceBrokenImageIcon)
COMPUTED_STYLE_PROP(hyphens,                       Hyphens)
COMPUTED_STYLE_PROP(image_region,                  ImageRegion)
COMPUTED_STYLE_PROP(orient,                        Orient)
COMPUTED_STYLE_PROP(osx_font_smoothing,            OSXFontSmoothing)
COMPUTED_STYLE_PROP(_moz_outline_radius_bottomLeft, OutlineRadiusBottomLeft)
COMPUTED_STYLE_PROP(_moz_outline_radius_bottomRight,OutlineRadiusBottomRight)
COMPUTED_STYLE_PROP(_moz_outline_radius_topLeft,    OutlineRadiusTopLeft)
COMPUTED_STYLE_PROP(_moz_outline_radius_topRight,   OutlineRadiusTopRight)
COMPUTED_STYLE_PROP(stack_sizing,                  StackSizing)
COMPUTED_STYLE_PROP(_moz_tab_size,                 TabSize)
COMPUTED_STYLE_PROP(text_align_last,               TextAlignLast)
COMPUTED_STYLE_PROP(text_decoration_color,         TextDecorationColor)
COMPUTED_STYLE_PROP(text_decoration_line,          TextDecorationLine)
COMPUTED_STYLE_PROP(text_decoration_style,         TextDecorationStyle)
COMPUTED_STYLE_PROP(text_size_adjust,              TextSizeAdjust)
COMPUTED_STYLE_PROP(user_focus,                    UserFocus)
COMPUTED_STYLE_PROP(user_input,                    UserInput)
COMPUTED_STYLE_PROP(user_modify,                   UserModify)
COMPUTED_STYLE_PROP(user_select,                   UserSelect)
COMPUTED_STYLE_PROP(_moz_window_shadow,            WindowShadow)

/* ***************************** *\
 * Implementations of SVG styles *
\* ***************************** */

COMPUTED_STYLE_PROP(clip_path,                     ClipPath)
COMPUTED_STYLE_PROP(clip_rule,                     ClipRule)
COMPUTED_STYLE_PROP(color_interpolation,           ColorInterpolation)
COMPUTED_STYLE_PROP(color_interpolation_filters,   ColorInterpolationFilters)
COMPUTED_STYLE_PROP(dominant_baseline,             DominantBaseline)
COMPUTED_STYLE_PROP(fill,                          Fill)
COMPUTED_STYLE_PROP(fill_opacity,                  FillOpacity)
COMPUTED_STYLE_PROP(fill_rule,                     FillRule)
COMPUTED_STYLE_PROP(filter,                        Filter)
COMPUTED_STYLE_PROP(flood_color,                   FloodColor)
COMPUTED_STYLE_PROP(flood_opacity,                 FloodOpacity)
COMPUTED_STYLE_PROP(image_rendering,               ImageRendering)
COMPUTED_STYLE_PROP(lighting_color,                LightingColor)
COMPUTED_STYLE_PROP(marker_end,                    MarkerEnd)
COMPUTED_STYLE_PROP(marker_mid,                    MarkerMid)
COMPUTED_STYLE_PROP(marker_start,                  MarkerStart)
COMPUTED_STYLE_PROP(mask,                          Mask)
COMPUTED_STYLE_PROP(mask_type,                     MaskType)
COMPUTED_STYLE_PROP(paint_order,                   PaintOrder)
COMPUTED_STYLE_PROP(shape_rendering,               ShapeRendering)
COMPUTED_STYLE_PROP(stop_color,                    StopColor)
COMPUTED_STYLE_PROP(stop_opacity,                  StopOpacity)
COMPUTED_STYLE_PROP(stroke,                        Stroke)
COMPUTED_STYLE_PROP(stroke_dasharray,              StrokeDasharray)
COMPUTED_STYLE_PROP(stroke_dashoffset,             StrokeDashoffset)
COMPUTED_STYLE_PROP(stroke_linecap,                StrokeLinecap)
COMPUTED_STYLE_PROP(stroke_linejoin,               StrokeLinejoin)
COMPUTED_STYLE_PROP(stroke_miterlimit,             StrokeMiterlimit)
COMPUTED_STYLE_PROP(stroke_opacity,                StrokeOpacity)
COMPUTED_STYLE_PROP(stroke_width,                  StrokeWidth)
COMPUTED_STYLE_PROP(text_anchor,                   TextAnchor)
COMPUTED_STYLE_PROP(text_rendering,                TextRendering)
COMPUTED_STYLE_PROP(vector_effect,                 VectorEffect)
