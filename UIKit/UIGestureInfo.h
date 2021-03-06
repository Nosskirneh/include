/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>

@class UIGestureAnimation, UIScrollAnimation;

@interface UIGestureInfo : NSObject {
	id delegate;
	int enabledGestures;
	int rotationState;
	int zoomState;
	int panState;
	CGPoint startGestureInner;
	CGPoint startGestureOuter;
	CGPoint startScrollPoint;
	CGPoint endScrollPoint;
	CGSize visibleSize;
	CGRect centerRect;
	UIGestureAnimation* rotationAnimation;
	CGFloat rotationDegrees;
	CGFloat recentRotationDegrees;
	CGFloat minDegrees;
	CGFloat maxDegrees;
	CGFloat startDegrees;
	CGFloat endDegrees;
	UIGestureAnimation* zoomAnimation;
	int zoomRubberBandHysteresisCount;
	CGFloat zoomScale;
	CGFloat startScale;
	CGFloat endScale;
	CGFloat unadjustedScale;
	CGFloat zoomMultiplier;
	CGFloat minScale;
	CGFloat maxScale;
	CGPoint zoomFailureWindowPoint;
	CGFloat zoomFailureDuration;
	CGFloat zoomFailureStartScale;
	CGFloat zoomAnimationProgress;
	UIScrollAnimation* scrollAnimation;
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	} flags;
}
-(id)init;
-(void)dealloc;
@end

