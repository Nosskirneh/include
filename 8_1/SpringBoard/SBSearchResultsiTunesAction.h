//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchResultsModalViewControllerAction.h"

#import "SKStoreProductViewControllerDelegate.h"

@class NSString;

@interface SBSearchResultsiTunesAction : SBSearchResultsModalViewControllerAction <SKStoreProductViewControllerDelegate>
{
}

- (void)productViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)requiresNavigationController;
- (void)loadModalViewControllerWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

