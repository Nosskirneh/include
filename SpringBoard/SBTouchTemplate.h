/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class SBPolygon;

@interface SBTouchTemplate : NSObject
{
    SBPolygon *m_template;
    SBPolygon *m_candidate;
    unsigned int m_transformType;
    CGFloat m_acceptFactor;
}

@property(nonatomic) CGFloat acceptFactor; // @synthesize acceptFactor=m_acceptFactor;
@property(nonatomic) unsigned int transformType; // @synthesize transformType=m_transformType;
- (BOOL)acceptPolygon:(id)arg1;
- (BOOL)acceptPoints:(struct CGPoint *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int pointCount;
- (void)dealloc;
- (id)initWithPoints:(struct CGPoint *)arg1 count:(unsigned int)arg2;

@end

