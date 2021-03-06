//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "_NCWidgetViewController_Host_IPC.h"

@class NSObject<OS_dispatch_queue>, _SBWidgetViewControllerOutOfProcess;

@interface _SBWidgetRemoteViewController : _UIRemoteViewController <_NCWidgetViewController_Host_IPC>
{
    BOOL _valid;
    _SBWidgetViewControllerOutOfProcess *_managingHost;
    NSObject<OS_dispatch_queue> *_managingHostQueue;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic, getter=_isValid, setter=_setValid:) BOOL valid; // @synthesize valid=_valid;
@property(nonatomic) _SBWidgetViewControllerOutOfProcess *managingHost; // @synthesize managingHost=_managingHost;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *managingHostQueue; // @synthesize managingHostQueue=_managingHostQueue;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)__requestLaunchOfURL:(id)arg1;
- (void)__requestPreferredViewHeight:(float)arg1 usingAutolayout:(BOOL)arg2 requestIdentifier:(id)arg3;
- (void)_performUpdateWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_requestEncodedLayerTreeWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)_openTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(id)arg2;
- (void)_viewWillTransitionToSize:(struct CGSize)arg1 requestIdentifier:(id)arg2;
- (void)_performOutstandingCompletionWithRequestIdentifier:(id)arg1;
- (void)_performOutstandingAnimationsWithRequestIdentifier:(id)arg1;
- (void)_setWidgetIdentifier:(id)arg1;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (BOOL)_serviceHasScrollToTopView;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (id)disconnect;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

