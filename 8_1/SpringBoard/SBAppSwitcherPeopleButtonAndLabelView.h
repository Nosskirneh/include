//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, SBIconLabelImageParameters, SBIconLabelView, SBWallpaperEffectView, UIImage, UIImageView, _UILegibilitySettings;

@interface SBAppSwitcherPeopleButtonAndLabelView : UIView <UIGestureRecognizerDelegate>
{
    SBIconLabelView *_titleLabel;
    SBWallpaperEffectView *_wallpaperEffectView;
    UIView *_wallpaperEffectBackingView;
    UIImageView *_pictureImageView;
    UIImageView *_legibilityImageView;
    struct UIEdgeInsets _mostlyInsideEdgeInsets;
    SBIconLabelImageParameters *_lastDrawnLabelParameters;
    unsigned int _imageRenderingMode;
    BOOL _highlighted;
    BOOL _compact;
    NSString *_title;
    UIImage *_image;
    UIImage *_legibilityImage;
    float _monogramSize;
    _UILegibilitySettings *_legibilitySettings;
}

+ (struct CGSize)preferredLayoutSizeForMonogramSize:(float)arg1 compact:(BOOL)arg2;
+ (BOOL)_centerImageVerticallyForLayout;
+ (float)_layoutLabelFontSizeCompact:(BOOL)arg1;
+ (float)_layoutLabelMaxHeightCompact:(BOOL)arg1;
+ (float)_layoutLabelVerticalPaddingCompact:(BOOL)arg1;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) float monogramSize; // @synthesize monogramSize=_monogramSize;
@property(nonatomic) BOOL compact; // @synthesize compact=_compact;
@property(retain, nonatomic) UIImage *legibilityImage; // @synthesize legibilityImage=_legibilityImage;
@property(nonatomic) unsigned int imageRenderingMode; // @synthesize imageRenderingMode=_imageRenderingMode;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateWallpaperViewLegibilitySettings;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_setHighlighted:(BOOL)arg1;
- (BOOL)_highlighted;
- (void)_handlePressGesture:(id)arg1;
- (void)_updateTextLabelIfNecessaryHighlighted:(BOOL)arg1;
- (id)_labelImageParameters:(BOOL)arg1;
- (struct CGSize)_maxLabelLayoutSize;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 forMonogramSize:(float)arg2 compact:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

