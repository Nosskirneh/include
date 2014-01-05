/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotosAlbumViewController.h>

@class UIBarButtonItem, NSArray;

@interface PUUIPhotosAlbumViewController : PUPhotosAlbumViewController {

	UIBarButtonItem* _imagePickerCancelButton;
	UIBarButtonItem* _imagePickerMultipleSelectionDoneButton;
	NSArray* __imagePickerMediaTypes;

}

@property (setter=_setImagePickerMediaTypes:,nonatomic,copy) NSArray * _imagePickerMediaTypes;              //@synthesize _imagePickerMediaTypes=__imagePickerMediaTypes - In the implementation block
-(id)init;
-(void)viewDidLoad;
-(void)loadView;
-(void)_setImagePickerMediaTypes:(id)arg1 ;
-(void)setAlbum:(id)arg1 ;
-(id)initWithSpec:(id)arg1 ;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(void)handleNavigateToAsset:(id)arg1 inContainer:(id)arg2 ;
-(BOOL)pu_wantsNavigationBarVisible;
-(id)_imagePickerMediaTypes;
-(void)_setAlbum:(NSObject*)arg1 mediaTypes:(id)arg2 ;
-(void)_handleImagePickerMultipleSelectionDone:(id)arg1 ;
-(void)_handleImagePickerCancel:(id)arg1 ;
-(void).cxx_destruct;
@end
