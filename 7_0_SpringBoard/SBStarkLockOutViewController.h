//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SBStarkLockOutAnimation, UIStatusBar, UIView;

@interface SBStarkLockOutViewController : UIViewController
{
    UIStatusBar *_statusBarView;
    long long _mode;
    UIView *_modeView;
    _Bool _animating;
    long long _pendingMode;
    SBStarkLockOutAnimation *_pendingAnimation;
}

- (void)_updateLockOutModeIfPending;
- (id)_newModeViewForMode:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)setLockOutMode:(long long)arg1 withAnimation:(id)arg2;
@property(nonatomic) long long lockOutMode;

@end

