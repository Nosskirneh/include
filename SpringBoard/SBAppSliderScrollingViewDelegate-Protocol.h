/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol SBAppSliderScrollingViewDelegate <NSObject>
- (void)sliderScrollerDidEndScrolling:(id)arg1;
- (BOOL)sliderScroller:(id)arg1 itemWantsToBeKeptInViewHierarchy:(unsigned int)arg2;
- (void)sliderScroller:(id)arg1 itemWantsToBeRemoved:(unsigned int)arg2;
- (void)sliderScrollerBeganPanning:(id)arg1;
- (void)sliderScroller:(id)arg1 itemTapped:(unsigned int)arg2;
- (void)sliderScroller:(id)arg1 contentOffsetChanged:(CGFloat)arg2;
- (CGFloat)sliderScrollerDistanceBetweenItemCenters:(id)arg1 forOrientation:(int)arg2;
- (struct CGSize)sliderScrollerItemSize:(id)arg1 forOrientation:(int)arg2;
- (BOOL)sliderScroller:(id)arg1 isIndexRemovable:(unsigned int)arg2;
- (id)sliderScroller:(id)arg1 viewForIndex:(unsigned int)arg2;
- (unsigned int)sliderScrollerItemCount:(id)arg1;
@end

