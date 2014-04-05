/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIGestureRecognizer.h"

#import "_UISettingsKeyObserver.h"

@class SBSlideToUnlockTriangleView, UIView;

@interface SBSlideToUnlockFailureRecognizer : UIGestureRecognizer <_UISettingsKeyObserver>
{
    struct CGPoint _startingLocation;
    unsigned int _maxAllowableVerticalOffset;
    CGFloat _maxAllowedTopAngle;
    CGFloat _minAllowedTopAngle;
    CGFloat _effectiveTopAngle;
    CGFloat _minAllowedBottomAngle;
    CGFloat _maxAllowedBottomAngle;
    CGFloat _effectiveBottomAngle;
    BOOL _tracking;
    BOOL _allowMultiTouch;
    BOOL _viewDebugArea;
    UIView *_relativeView;
    UIView *_debugHorizontalView;
    SBSlideToUnlockTriangleView *_debugInclineUpView;
    SBSlideToUnlockTriangleView *_debugInclineDownView;
}

@property(retain, nonatomic) UIView *relativeView; // @synthesize relativeView=_relativeView;
@property(nonatomic) BOOL viewDebugArea; // @synthesize viewDebugArea=_viewDebugArea;
@property(nonatomic) CGFloat minAllowedBottomAngle; // @synthesize minAllowedBottomAngle=_minAllowedBottomAngle;
@property(nonatomic) CGFloat maxAllowedBottomAngle; // @synthesize maxAllowedBottomAngle=_maxAllowedBottomAngle;
@property(nonatomic) CGFloat minAllowedTopAngle; // @synthesize minAllowedTopAngle=_minAllowedTopAngle;
@property(nonatomic) CGFloat maxAllowedTopAngle; // @synthesize maxAllowedTopAngle=_maxAllowedTopAngle;
@property(nonatomic) unsigned int maxAllowableVerticalOffset; // @synthesize maxAllowableVerticalOffset=_maxAllowableVerticalOffset;
@property(nonatomic) BOOL allowMultiTouch; // @synthesize allowMultiTouch=_allowMultiTouch;
- (void)_setDebugViewsVisible:(BOOL)arg1;
- (BOOL)_isLocationOutOfBounds:(struct CGPoint)arg1;
- (BOOL)_isOutOfBounds:(struct CGPoint)arg1 forAngle:(CGFloat)arg2;
- (BOOL)_isOutOfBoundsVertically:(struct CGPoint)arg1;
- (CGFloat)_computeEffectiveAngleFromMin:(CGFloat)arg1 max:(CGFloat)arg2;
- (struct CGPoint)_averagePointFromTouches:(id)arg1;
- (int)_activeTouchCountForEvent:(id)arg1;
- (void)_loadFromSettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (CGFloat)_effectiveBottomAngle;
- (CGFloat)_effectiveTopAngle;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

