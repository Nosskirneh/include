/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "SBZoomView.h"

@interface SBFullscreenZoomView : SBZoomView
{
    BOOL _hasImage;
    BOOL _hasFullSizedImage;
    id _surface;
}

- (void)dealloc;
- (id)surface;
- (id)initWithView:(id)arg1 screen:(id)arg2;
- (id)initWithImage:(id)arg1 screen:(id)arg2;
- (id)initWithSnapshotFrame:(struct CGRect)arg1 screen:(id)arg2 ioSurface:(void *)arg3 opaque:(BOOL)arg4 snapshotTransform:(struct CGAffineTransform)arg5;
- (id)initWithSnapshotFrame:(struct CGRect)arg1 screen:(id)arg2 image:(id)arg3 originalImageOrientation:(int)arg4 currentImageOrientation:(int)arg5 interfaceOrientation:(int)arg6 doubleHeightStatusBar:(BOOL)arg7 preventSplit:(BOOL)arg8 needsZoomFilter:(BOOL)arg9 asyncDecodeImage:(BOOL)arg10 blackMatForJail:(BOOL)arg11;
- (id)_initWithFrame:(struct CGRect)arg1;

@end
