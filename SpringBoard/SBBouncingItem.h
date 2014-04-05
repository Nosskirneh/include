/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIDynamicItem.h"

@interface SBBouncingItem : NSObject <UIDynamicItem>
{
    struct CGRect _bounds;
    struct CGPoint _center;
    CGFloat _multiplier;
    id _translateBlock;
}

@property(copy) id translateBlock; // @synthesize translateBlock=_translateBlock;
@property CGFloat multiplier; // @synthesize multiplier=_multiplier;
@property(nonatomic) struct CGAffineTransform transform;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
- (void)dealloc;

@end

