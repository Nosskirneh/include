/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>
#import "UITextMagnifier.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextSelectingContainer;

@interface UITextMagnifierRanged : UIView <UITextMagnifier> {
	UIView<UITextSelectingContainer>* _target;
	CGPoint _magnificationPoint;
	CGPoint _offset;
	CGPoint _animationPoint;
	UITextMagnifierTimeWeightedPoint* _weightedPoint;
	UIView* _magnifierRenderer;
	UIView* _autoscrollRenderer;
	int _autoscrollDirections;
	BOOL _inPlace;
}
@property(retain, nonatomic) UIView<UITextSelectingContainer>* target;
@property(assign, nonatomic) CGPoint animationPoint;
@property(assign, nonatomic) CGPoint offset;
@property(readonly, assign, nonatomic) CGPoint terminalPoint;
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;
@property(assign, nonatomic) CGPoint magnificationPoint;
+(id)sharedRangedMagnifier;
-(id)initWithDefaultFrame;
-(void)dealloc;
-(int)horizontalMovementAtTime:(double)time;
-(BOOL)wasPlacedCarefullyAtTime:(double)time;
-(int)horizontalMovement;
-(void)postAutoscrollPoint:(CGPoint)point;
-(void)animateToAutoscrollRenderer;
-(void)setToMagnifierRenderer;
-(void)animateToMagnifierRenderer;
-(void)setAutoscrollDirections:(int)directions;
-(void)autoscrollWillNotStart;
-(void)setFrame:(CGRect)frame;
-(void)setNeedsDisplay;
-(void)zoomUpAnimation;
-(void)zoomDownAnimation;
-(void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;
-(void)remove;
-(CGFloat)currentOffset;
-(void)updateFrame;
-(void)detectLostTouches:(id)touches;
-(void)beginMagnifyingTarget:(id)target magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;
-(void)stopMagnifying:(BOOL)magnifying;
-(CGPoint)snappedPoint:(CGPoint)point;
@end

