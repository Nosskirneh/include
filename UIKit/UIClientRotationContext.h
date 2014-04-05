/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

#import <Foundation/NSObject.h>
#import "UIKit-Structs.h"

@class UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface UIClientRotationContext : NSObject {
@private
	UIView* _headerView;
	UIView* _footerView;
	UIView* _contentView;
	UIView* _rotatingSnapshotView;
	UIView* _footerStartSnapshotView;
	UIView* _footerEndSnapshotView;
	BOOL _headerWasHidden;
	BOOL _footerWasHidden;
	BOOL _contentWasHidden;
	BOOL _skipFooterRotation;
	BOOL _skipHeaderRotation;
	int _fromOrientation;
	int _toOrientation;
	CGFloat _duration;
	UIView* _headerSnapshotViewStart;
	UIView* _footerSnapshotViewStart;
	UIView* _contentSnapshotViewStart;
	CGFloat _contentTopAdjustment;
	id _rotatingClient;
	XXStruct_Nw9VXC _rotationSettings;
	UIWindow* _window;
}
@property(readonly, assign, nonatomic) id rotatingClient;
@property(readonly, assign, nonatomic) UIView* contentView;
@property(readonly, assign, nonatomic) CGFloat duration;
@property(readonly, assign, nonatomic) int fromOrientation;
@property(readonly, assign, nonatomic) int toOrientation;
-(id)initWithClient:(id)client toOrientation:(int)orientation duration:(CGFloat)duration andWindow:(id)window;
-(void)dealloc;
-(void)_slideHeaderView:(id)view andFooterView:(id)view2 offScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;
-(void)slideHeaderViewAndFooterViewOffScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;
-(void)_positionHeaderView:(id)view andFooterView:(id)view2 outsideContentViewForInterfaceOrientation:(int)interfaceOrientation;
-(void)_slideFooterWithStartSnapshot:(id)startSnapshot endSnapshot:(id)snapshot duration:(double)duration;
-(void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)afterRotation;
-(void)rotateSnapshots;
-(void)finishFirstHalfRotation;
-(void)finishFullRotateUsingOnePartAnimation:(BOOL)animation;
@end

#endif
