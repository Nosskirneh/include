/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UIDelayedAction, NSArray;

@protocol UILongPressGestureRecognizerDelegate <NSObject, UIGestureRecognizerDelegate>
@optional
-(BOOL)longPressGestureCanTransitionToRecognizedState:(id)recognizedState;
@end

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

#include_next <UIKit/UILongPressGestureRecognizer.h>

@interface UILongPressGestureRecognizer()
@property(readonly, retain, nonatomic) NSArray* touches;
@property(assign, nonatomic) double delay;
-(BOOL)cancelPastAllowableMovement;
-(void)setCancelPastAllowableMovement:(BOOL)movement;
-(void)setTouches:(id)touches;
// inherited: -(CGPoint)locationInView:(id)view;
// inherited: -(unsigned)numberOfTouches;
// inherited: -(CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;

#else

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
	NSArray* _touches;
	NSMutableSet* _activeTouches;
	BOOL _gotTouchEnd;
	BOOL _gotTooMany;
	int _numberOfFingers;
	double _delay;
	CGFloat _allowableMovement;
	CGPoint _startPointScreen;
	UIDelayedAction* _enoughTimeElapsed;
	id<UILongPressGestureRecognizerDelegate> _delegate;
}
@property(retain, nonatomic) NSArray* touches;
@property(assign, nonatomic) int numberOfFingers;
@property(assign, nonatomic) CGFloat allowableMovement;
@property(assign, nonatomic) double delay;
#endif
@property(readonly, assign, nonatomic) CGPoint centroid;
@property(readonly, assign, nonatomic) CGPoint startPoint;
@property(assign, nonatomic) id<UILongPressGestureRecognizerDelegate> delegate;
// inherited: -(id)initWithTarget:(id)target action:(SEL)action;
// inherited: -(void)dealloc;
// inherited: -(void)reset;
-(void)enoughTimeElapsed:(id)elapsed;
-(void)clearTimer;
-(void)startTimer;
// inherited: -(void)touchesBegan:(id)began withEvent:(id)event;
// inherited: -(void)touchesMoved:(id)moved withEvent:(id)event;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
// inherited: -(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(CGPoint)centroidScreen;
@end
