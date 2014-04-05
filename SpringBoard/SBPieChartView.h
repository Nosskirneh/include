/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray;

@interface SBPieChartView : UIView
{
    NSArray *_slices;
    CGFloat _valueTotal;
    CGFloat _radius;
    struct CGPoint _center;
    CGFloat _defaultRotation;
}

- (void)_drawSlice:(id)arg1 atValue:(CGFloat)arg2;
- (void)_rotateContext;
- (void)_updateMetrics;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSlices:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

