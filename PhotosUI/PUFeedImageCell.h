/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:06 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class UIImage, UIImageView, PLVideoOverlayButton, PUImageViewExtraction, UIButton;

@interface PUFeedImageCell : PUFeedCell {

	BOOL _imageHidden;
	BOOL __shouldUpdateOverlayPlayButtonBackground;
	BOOL __shouldHideOverlayPlayButton;
	BOOL __shouldHideCenterOverlayImageView;
	BOOL __shouldHideCommentButton;
	UIImage* _image;
	int _imageContentMode;
	int _imageAlignment;
	int _overlayOptions;
	int _commentCount;
	UIImageView* __imageView;
	int __imageTag;
	PLVideoOverlayButton* __overlayPlayButton;
	UIImageView* __overlayPlayButtonBackgroundImageView;
	PUImageViewExtraction* __overlayPlayButtonBackgroundExtraction;
	UIImageView* __centerOverlayImageView;
	UIButton* __commentButton;
	CGSize _maximumImageSize;

}

@property (nonatomic,retain) UIImage * image;                                                                                                               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) int imageContentMode;                                                                                                          //@synthesize imageContentMode=_imageContentMode - In the implementation block
@property (assign,getter=isImageHidden,nonatomic) BOOL imageHidden;                                                                                         //@synthesize imageHidden=_imageHidden - In the implementation block
@property (assign,nonatomic) CGSize maximumImageSize;                                                                                                       //@synthesize maximumImageSize=_maximumImageSize - In the implementation block
@property (assign,nonatomic) int imageAlignment;                                                                                                            //@synthesize imageAlignment=_imageAlignment - In the implementation block
@property (assign,nonatomic) int overlayOptions;                                                                                                            //@synthesize overlayOptions=_overlayOptions - In the implementation block
@property (assign,nonatomic) int commentCount;                                                                                                              //@synthesize commentCount=_commentCount - In the implementation block
@property (setter=_setImageView:,nonatomic,retain) UIImageView * _imageView;                                                                                //@synthesize _imageView=__imageView - In the implementation block
@property (assign,setter=_setImageTag:,nonatomic) int _imageTag;                                                                                            //@synthesize _imageTag=__imageTag - In the implementation block
@property (setter=_setOverlayPlayButton:,nonatomic,retain) PLVideoOverlayButton * _overlayPlayButton;                                                       //@synthesize _overlayPlayButton=__overlayPlayButton - In the implementation block
@property (setter=_setOverlayPlayButtonBackgroundImageView:,nonatomic,retain) UIImageView * _overlayPlayButtonBackgroundImageView;                          //@synthesize _overlayPlayButtonBackgroundImageView=__overlayPlayButtonBackgroundImageView - In the implementation block
@property (setter=_setOverlayPlayButtonBackgroundExtraction:,nonatomic,retain) PUImageViewExtraction * _overlayPlayButtonBackgroundExtraction;              //@synthesize _overlayPlayButtonBackgroundExtraction=__overlayPlayButtonBackgroundExtraction - In the implementation block
@property (assign,setter=_setShouldUpdateOverlayPlayButtonBackground:,nonatomic) BOOL _shouldUpdateOverlayPlayButtonBackground;                             //@synthesize _shouldUpdateOverlayPlayButtonBackground=__shouldUpdateOverlayPlayButtonBackground - In the implementation block
@property (assign,setter=_setShouldHideOverlayPlayButton:,nonatomic) BOOL _shouldHideOverlayPlayButton;                                                     //@synthesize _shouldHideOverlayPlayButton=__shouldHideOverlayPlayButton - In the implementation block
@property (setter=_setCenterOverlayImageView:,nonatomic,retain) UIImageView * _centerOverlayImageView;                                                      //@synthesize _centerOverlayImageView=__centerOverlayImageView - In the implementation block
@property (assign,setter=_setShouldHideCenterOverlayImageView:,nonatomic) BOOL _shouldHideCenterOverlayImageView;                                           //@synthesize _shouldHideCenterOverlayImageView=__shouldHideCenterOverlayImageView - In the implementation block
@property (setter=_setCommentButton:,nonatomic,retain) UIButton * _commentButton;                                                                           //@synthesize _commentButton=__commentButton - In the implementation block
@property (assign,setter=_setShouldHideCommentButton:,nonatomic) BOOL _shouldHideCommentButton;                                                             //@synthesize _shouldHideCommentButton=__shouldHideCommentButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)image;
-(id)_imageView;
-(void)prepareForReuse;
-(int)commentCount;
-(void)setImageContentMode:(int)arg1 ;
-(void)setOverlayOptions:(int)arg1 ;
-(void)setCommentCount:(int)arg1 ;
-(void)setImageHidden:(BOOL)arg1 ;
-(void)setImage:(id)arg1 withTag:(int)arg2 ;
-(void)setMaximumImageSize:(CGSize)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)_setImageView:(id)arg1 ;
-(void)_setImageTag:(int)arg1 ;
-(id)_overlayPlayButtonBackgroundExtraction;
-(int)_imageTag;
-(void)_invalidateOverlayPlayButtonBackground;
-(void)_updateOverlays;
-(void)_updateCommentButton;
-(id)_overlayPlayButton;
-(id)_centerOverlayImageView;
-(id)_commentButton;
-(CGSize)maximumImageSize;
-(int)imageAlignment;
-(BOOL)isImageHidden;
-(BOOL)_shouldHideOverlayPlayButton;
-(BOOL)_shouldHideCenterOverlayImageView;
-(BOOL)_shouldHideCommentButton;
-(id)_overlayPlayButtonBackgroundImageView;
-(BOOL)_shouldUpdateOverlayPlayButtonBackground;
-(void)_setShouldUpdateOverlayPlayButtonBackground:(BOOL)arg1 ;
-(void)_setOverlayPlayButtonBackgroundExtraction:(id)arg1 ;
-(int)overlayOptions;
-(void)_handlePlayButton:(id)arg1 ;
-(void)_setOverlayPlayButton:(id)arg1 ;
-(void)_setOverlayPlayButtonBackgroundImageView:(id)arg1 ;
-(void)_setShouldHideOverlayPlayButton:(BOOL)arg1 ;
-(void)_setCenterOverlayImageView:(id)arg1 ;
-(void)_setShouldHideCenterOverlayImageView:(BOOL)arg1 ;
-(void)_handleCommentButton:(id)arg1 ;
-(void)_setCommentButton:(id)arg1 ;
-(void)_setShouldHideCommentButton:(BOOL)arg1 ;
-(id)_imageCellDelegate;
-(int)imageContentMode;
-(void).cxx_destruct;
@end

