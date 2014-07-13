//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

@class SBApplication;

@interface SBToAppWorkspaceTransaction : SBWorkspaceTransaction
{
    SBApplication *_toApp;
    _Bool _activateSuspended;
    double _watchdogExtension;
    _Bool _fromAssistant;
    _Bool _fromSwitcher;
    CDUnknownBlockType _activationHandlerBlock;
}

@property(readonly, nonatomic) SBApplication *toApplication; // @synthesize toApplication=_toApp;
- (void)_commit;
- (void)_captureApplicationData;
- (_Bool)_shouldBeWatchdogged:(id *)arg1;
- (double)_watchdogInterval;
- (void)_fireAndClearActivationContinuationForActivationFailureIfNecessary;
- (void)_interruptWithReason:(int)arg1;
- (void)_transactionComplete;
- (void)activate:(id)arg1;
- (void)toggleStatusBarForCleanup;
- (void)performToAppStateCleanup;
- (_Bool)shouldAnimateOrientationChangeOnCompletion;
- (_Bool)shouldDismissSwitcher;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (_Bool)shouldToggleSpringBoardStatusBarOnCleanup;
- (_Bool)shouldHideSpringBoardStatusBarOnCleanup;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 toApplication:(id)arg3 activationHandler:(CDUnknownBlockType)arg4;

@end
