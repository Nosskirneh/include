/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIScrollView.h"

@interface SBLockScreenScrollView : UIScrollView
{
    id <SBUIPasscodeLockView> _passcodeView;
}

@property(nonatomic) id <SBUIPasscodeLockView> passcodeView; // @synthesize passcodeView=_passcodeView;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;

@end
