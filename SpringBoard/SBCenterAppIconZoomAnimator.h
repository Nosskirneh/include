/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBCenterIconZoomAnimator.h"
#import "SBCenterAppZoomSettings.h"

@class SBCenterAppZoomSettings, UIView;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator
{
    UIView *_appView;
    CGFloat _distantScale;
}

@property CGFloat distantScale; // @synthesize distantScale=_distantScale;
@property(retain, nonatomic) SBCenterAppZoomSettings *settings;

- (void)_fadeAppForZoomFraction:(CGFloat)arg1;
- (void)_zoomAppForZoomFraction:(CGFloat)arg1;
- (NSTimeInterval)_appZoomDelay;
- (NSTimeInterval)_iconZoomDelay;
- (void)_animateToFraction:(CGFloat)arg1 afterDelay:(NSTimeInterval)arg2 withSharedCompletion:(id /* void(^)(void) */)arg3;
- (NSUInteger)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(CGFloat)arg1;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (id)initWithFolderController:(id)arg1 appView:(id)arg2;

@end

