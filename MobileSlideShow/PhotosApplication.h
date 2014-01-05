/*
* This header is generated by classdump-dyld 0.2
* on Monday, December 30, 2013 at 4:57:31 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /private/var/stash/Applications.BjEYur/MobileSlideShow.app/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSlideShow/MobileSlideShow-Structs.h>
#import <PhotoLibrary/PLPhotosApplication.h>
#import <UIKit/UITabBarController.h>

@class PhotosAppSpec, TabbedLibraryViewController, PhotosURLNavigationRequest, WImportViewController, NSMutableArray, NSTimer, UIAlertView;

@interface PhotosApplication : PLPhotosApplication <UITabBarControllerDelegate> {

	PhotosAppSpec* _spec;
	TabbedLibraryViewController* _tabbedLibraryViewController;
	PhotosURLNavigationRequest* _pendingNavigationRequest;
	WImportViewController* _importController;
	NSMutableArray* _importDeviceQueue;
	NSTimer* _imageCaptureDeviceCheckTimer;
	UIAlertView* _phoneFailureAlertView;

}
-(void)_importDeviceAdded:(id)arg1 ;
-(void)_importDeviceRemoved:(id)arg1 ;
-(void)_startupImageCapture;
-(void)_showNetworkPromptIfNecessary;
-(void)_dequeueNextImportDevice;
-(void)_imageCaptureDeviceCheckTimerFired:(id)arg1 ;
-(void)handleImportCompleteAlertResponse:(CFUserNotificationRef)arg1 flags:(unsigned long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(id)rootViewController;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)setDelaySuspend:(BOOL)arg1 ;
-(BOOL)isShowingAppUI;
-(void)setupAppUI:(BOOL)arg1 ;
-(void)sharedFinishedLaunching:(BOOL)arg1 ;
-(void)_displayAndRemovePhoneInvitationFailures;
-(id)composeNavigationController;
@end
