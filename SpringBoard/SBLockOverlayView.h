/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBInteractionPassThroughView.h"

@class SBLockOverlayStylePropertiesFactory, UIButton, UILabel, UIResizableView, _UILegibilitySettings;

@interface SBLockOverlayView : SBInteractionPassThroughView
{
    id <SBLockOverlayViewDelegate> _delegate;
    UIResizableView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    BOOL _hidesLockContent;
    SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
    unsigned int _style;
    _UILegibilitySettings *_legibilitySettings;
}

@property(readonly, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(readonly, nonatomic) unsigned int style; // @synthesize style=_style;
@property(readonly, nonatomic) BOOL hidesLockContent; // @synthesize hidesLockContent=_hidesLockContent;
@property(readonly, nonatomic) SBLockOverlayStylePropertiesFactory *underlayPropertiesFactory; // @synthesize underlayPropertiesFactory=_underlayPropertiesFactory;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) id <SBLockOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (CGFloat)_maxLabelWidth;
- (void)_sizeView:(id)arg1 forFixedWith:(BOOL)arg2;
- (unsigned int)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(struct CGSize)arg3;
- (void)_buttonPressed;
- (id)_actionFont;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)layoutSubviews;
- (id)_legibilitySettingsForStyle:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

