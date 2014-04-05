/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:06 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <PhotosUI/PUReviewScrubberDataSource.h>
#import <PhotosUI/PUReviewScrubberDelegate.h>
#import <PhotosUI/PUAvalancheReviewCollectionViewLayoutDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <PhotosUI/PUPhotosSharingGridCellDelegate.h>
#import <PhotosUI/PUPhotosSharingTransitionViewController.h>

@protocol PUAvalancheReviewControllerDelegate, PLAssetContainerList, PLAssetContainer;
@class PUAvalancheReviewControllerSpec, UICollectionView, PUAvalancheReviewCollectionViewLayout, PUReviewInstructionalView, UIBarButtonItem, UITapGestureRecognizer, NSIndexPath, NSMutableSet, PLAvalanche, PLManagedAsset, NSOrderedSet, PUPhotoBrowserController, PUAvalancheReporter, PUImageManager, UICollectionViewLayout, PUPhotosSharingTransitionContext, PUReviewScrubber;

@interface PUAvalancheReviewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, PUReviewScrubberDataSource, PUReviewScrubberDelegate, PUAvalancheReviewCollectionViewLayoutDelegate, UIGestureRecognizerDelegate, PUPhotosSharingGridCellDelegate, PUPhotosSharingTransitionViewController> {

	BOOL __updatingContentOffsetFromScrubbing;
	BOOL __completingReviewMode;
	<PUAvalancheReviewControllerDelegate>* _delegate;
	<PLAssetContainerList>* _avalancheContainerList;
	PUAvalancheReviewControllerSpec* __spec;
	UICollectionView* __collectionView;
	PUAvalancheReviewCollectionViewLayout* __collectionViewLayout;
	PUReviewInstructionalView* __instructionalView;
	UIBarButtonItem* __doneBarButtonItem;
	UIBarButtonItem* __cancelBarButtonItem;
	UITapGestureRecognizer* __tapGestureRecognizer;
	NSIndexPath* __inFlightReferenceIndexPath;
	NSMutableSet* __preheatedAssets;
	PLAvalanche* __avalancheBeingReviewed;
	PLManagedAsset* __initialAsset;
	NSOrderedSet* __initialFavorites;
	<PLAssetContainer>* __currentAssetContainer;
	PUPhotoBrowserController* __presentingPhotoBrowserController;
	UIBarButtonItem* __reportBarButtonItem;
	PUAvalancheReporter* __avalancheReporter;
	PUImageManager* __imageManager;
	UICollectionViewLayout* __transitionLayout;
	PUPhotosSharingTransitionContext* _photosSharingTransitionContext;

}

@property (assign,nonatomic) <PUAvalancheReviewControllerDelegate> * delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) <PLAssetContainerList> * avalancheContainerList;                                    //@synthesize avalancheContainerList=_avalancheContainerList - In the implementation block
@property (nonatomic,readonly) PUAvalancheReviewControllerSpec * _spec;                                            //@synthesize _spec=__spec - In the implementation block
@property (nonatomic,readonly) UICollectionView * _collectionView;                                                 //@synthesize _collectionView=__collectionView - In the implementation block
@property (nonatomic,readonly) PUAvalancheReviewCollectionViewLayout * _collectionViewLayout;                      //@synthesize _collectionViewLayout=__collectionViewLayout - In the implementation block
@property (nonatomic,readonly) PUReviewScrubber * _reviewScrubber; 
@property (nonatomic,readonly) PUReviewInstructionalView * _instructionalView;                                     //@synthesize _instructionalView=__instructionalView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _doneBarButtonItem;                                               //@synthesize _doneBarButtonItem=__doneBarButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _cancelBarButtonItem;                                             //@synthesize _cancelBarButtonItem=__cancelBarButtonItem - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapGestureRecognizer;                                     //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSIndexPath * _inFlightReferenceIndexPath;                                          //@synthesize _inFlightReferenceIndexPath=__inFlightReferenceIndexPath - In the implementation block
@property (setter=_setPreheatedAssets:,nonatomic,retain) NSMutableSet * _preheatedAssets;                          //@synthesize _preheatedAssets=__preheatedAssets - In the implementation block
@property (nonatomic,readonly) BOOL _updatingContentOffsetFromScrubbing;                                           //@synthesize _updatingContentOffsetFromScrubbing=__updatingContentOffsetFromScrubbing - In the implementation block
@property (assign,nonatomic) BOOL _completingReviewMode;                                                           //@synthesize _completingReviewMode=__completingReviewMode - In the implementation block
@property (nonatomic,readonly) PLAvalanche * _avalancheBeingReviewed;                                              //@synthesize _avalancheBeingReviewed=__avalancheBeingReviewed - In the implementation block
@property (nonatomic,readonly) PLManagedAsset * _initialAsset;                                                     //@synthesize _initialAsset=__initialAsset - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * _initialFavorites;                                                   //@synthesize _initialFavorites=__initialFavorites - In the implementation block
@property (nonatomic,readonly) <PLAssetContainer> * _currentAssetContainer;                                        //@synthesize _currentAssetContainer=__currentAssetContainer - In the implementation block
@property (nonatomic,readonly) PUPhotoBrowserController * _presentingPhotoBrowserController;                       //@synthesize _presentingPhotoBrowserController=__presentingPhotoBrowserController - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _reportBarButtonItem;                                             //@synthesize _reportBarButtonItem=__reportBarButtonItem - In the implementation block
@property (nonatomic,readonly) PUAvalancheReporter * _avalancheReporter;                                           //@synthesize _avalancheReporter=__avalancheReporter - In the implementation block
@property (nonatomic,readonly) PUImageManager * _imageManager;                                                     //@synthesize _imageManager=__imageManager - In the implementation block
@property (setter=_setTransitionLayout:,nonatomic,retain) UICollectionViewLayout * _transitionLayout;              //@synthesize _transitionLayout=__transitionLayout - In the implementation block
@property (nonatomic,retain) PUPhotosSharingTransitionContext * photosSharingTransitionContext;                    //@synthesize photosSharingTransitionContext=_photosSharingTransitionContext - In the implementation block
+(id)filteringContext;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)shouldAutorotate;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(BOOL)automaticallyAdjustsScrollViewInsets;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(id)_cancelBarButtonItem;
-(id)_collectionView;
-(void)assetContainerDidChange:(id)arg1 ;
-(id)_tapGestureRecognizer;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(void)_setTransitionLayout:(id)arg1 ;
-(id)_transitionLayout;
-(void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3 ;
-(id)_collectionViewLayout;
-(id)_indexPathInCollectionView:(id)arg1 closestToPoint:(CGPoint)arg2 excludingIndexPath:(id)arg3 ;
-(void)_handleTapAtIndexPath:(id)arg1 ;
-(void)reviewScrubberDidScrub:(id)arg1 ;
-(void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1 ;
-(unsigned)numberOfPhotosInReviewScrubber:(id)arg1 ;
-(CGRect)layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(CGRect)arg3 atIndexPath:(id)arg4 ;
-(id)_spec;
-(BOOL)pu_wantsStatusBarVisible;
-(BOOL)pu_wantsNavigationBarVisible;
-(void)_setPreheatedAssets:(id)arg1 ;
-(id)photosSharingTransitionContext;
-(id)_imageManager;
-(CGFloat)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2 ;
-(id)_assetAtIndexPath:(id)arg1 ;
-(void)_pageToIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)_indexPathOfCenterVisibleItemInCollectionView:(id)arg1 ;
-(void)_getFirstValidIndexPath:(id*)arg1 lastValidIndexPath:(id*)arg2 ;
-(void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)_updateMainViewAnimated:(BOOL)arg1 ;
-(id)embeddedActivityView;
-(void)_handleTapInMainCollectionView:(id)arg1 ;
-(id)_selectionViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2 ;
-(CGRect)selectionBadgeFrameForItemFrame:(CGRect)arg1 atIndexPath:(id)arg2 ;
-(void)_updatePreheatedAssets;
-(BOOL)photosSharingGridCellShouldBeginZooming:(id)arg1 ;
-(void)photosSharingGridCellDidEndZooming:(id)arg1 ;
-(id)photosSharingGridCellBadgeForZooming:(id)arg1 layoutAnchor:(unsigned*)arg2 ;
-(id)photosSharingGridCellViewForZooming:(id)arg1 ;
-(CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)transitionCollectionView;
-(void)setPhotosSharingTransitionContext:(id)arg1 ;
-(void)setPhotosSharingTransitionLayout:(id)arg1 animated:(BOOL)arg2 ;
-(CGRect)embeddedActivityViewFrameWhenShowing:(BOOL)arg1 ;
-(id)_inFlightReferenceIndexPath;
-(id)_preheatedAssets;
-(id)initWithSpec:(id)arg1 startingAtAsset:(id)arg2 inAvalanche:(id)arg3 currentAssetContainer:(id)arg4 fromPhotoBrowserController:(id)arg5 ;
-(void)_updateBarItemsAnimated:(BOOL)arg1 ;
-(id)avalancheContainerList;
-(id)_reviewScrubber;
-(void)_reloadAvalancheDataWithAsset:(id)arg1 ;
-(void)_updateCollectionViewLayoutInsets;
-(id)_doneBarButtonItem;
-(id)_avalancheBeingReviewed;
-(void)_handleDoneButton:(id)arg1 ;
-(void)_cancelReviewModeAction:(id)arg1 ;
-(void)_reportButtonAction:(id)arg1 ;
-(void)_updateNavigationItemTitle;
-(void)_getMainCollectionViewFrame:(CGRect*)arg1 collectionViewLayoutInsets:(UIEdgeInsets*)arg2 orientation:(int)arg3 ;
-(void)_toggleCurrentPickStatusAtIndexPath:(id)arg1 ;
-(CGSize)_sizeForItemAtIndexPath:(id)arg1 interfaceOrientation:(int)arg2 ;
-(id)_currentAsset;
-(id)_currentAssetContainer;
-(id)_actionViewRootView;
-(void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1 ;
-(void)_updateEnabledNavigationBarItems;
-(void)_dismissReviewController;
-(id)_presentingPhotoBrowserController;
-(void)_crossfadeToAssetAndDismiss:(id)arg1 ;
-(void)_promoteFavoriteAssetsAndDissolveBurst:(BOOL)arg1 withReviewCompletionHandler:(/*^block*/ id)arg2 ;
-(id)_initialFavorites;
-(void)_finishReviewAndDissolveBurst:(BOOL)arg1 ;
-(void)_cancelReviewMode;
-(void)_updateReviewScrubberFromContentOffset;
-(int)reviewScrubberImageFormat;
-(id)_instructionalView;
-(BOOL)_updatingContentOffsetFromScrubbing;
-(BOOL)_completingReviewMode;
-(void)set_completingReviewMode:(BOOL)arg1 ;
-(id)_initialAsset;
-(id)_reportBarButtonItem;
-(id)_avalancheReporter;
-(void).cxx_destruct;
@end

