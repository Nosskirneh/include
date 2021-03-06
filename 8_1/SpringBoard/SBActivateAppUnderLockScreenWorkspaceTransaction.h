//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppWorkspaceTransaction.h"

@class SBDisableActiveInterfaceOrientationChangeAssertion, SBLockScreenViewControllerBase;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppWorkspaceTransaction
{
    SBLockScreenViewControllerBase *_lockScreenController;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
    BOOL _waitingForSceneDestruction;
}

- (void)_childTransactionDidComplete:(id)arg1;
- (void)_alertDidActivate;
- (void)_setupAndActivate;
- (void)_didComplete;
- (void)_kickoffAlertActivation;
- (void)_begin;
- (BOOL)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1 application:(id)arg2 lockScreenController:(id)arg3 forRelaunch:(BOOL)arg4 withResult:(CDUnknownBlockType)arg5;
- (id)initWithAlertManager:(id)arg1 application:(id)arg2 lockScreenController:(id)arg3;

@end

