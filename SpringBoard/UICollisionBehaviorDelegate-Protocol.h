/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol UICollisionBehaviorDelegate <NSObject>

@optional
- (void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withItem:(id)arg3;
- (void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withItem:(id)arg3 atPoint:(struct CGPoint)arg4;
@end

