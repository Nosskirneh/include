/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SBIconContentView : UIView
{
    int _orientation;
    NSMutableArray *_folderContentViews;
    float _searchGestureProgress;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;

- (void)clearAllFolderContentViews;
- (void)popFolderContentView:(id)arg1;
- (void)pushFolderContentView:(id)arg1;
- (void)updateLayoutWithDuration:(double)arg1;
- (id)initWithOrientation:(int)arg1;

@end

