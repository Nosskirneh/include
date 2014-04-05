/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PUAlbumListCellDelegate;
@class PUStackView, UIView, NSString, UITextField, UILabel, UIButton;

@interface PUAlbumListCellContentView : UIView <UITextFieldDelegate> {

	BOOL _editing;
	BOOL _enabled;
	BOOL _showsDeleteButtonWhenEditing;
	BOOL __showsTitleAndSubtitle;
	<PUAlbumListCellDelegate>* _delegate;
	PUStackView* _stackView;
	UIView* _customImageView;
	NSString* _title;
	NSString* _subtitle;
	CGFloat _xInset;
	int _layout;
	unsigned _editCapabilities;
	UITextField* __titleTextField;
	UILabel* __subtitleLabel;
	UIButton* __deleteButton;

}

@property (assign,nonatomic,__weak) <PUAlbumListCellDelegate> * delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUStackView * stackView;                                                    //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) UIView * customImageView;                                                   //@synthesize customImageView=_customImageView - In the implementation block
@property (nonatomic,copy) NSString * title;                                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) CGFloat xInset;                                                               //@synthesize xInset=_xInset - In the implementation block
@property (assign,nonatomic) int layout;                                                                 //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) unsigned editCapabilities;                                                  //@synthesize editCapabilities=_editCapabilities - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                              //@synthesize editing=_editing - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteButtonWhenEditing;                                          //@synthesize showsDeleteButtonWhenEditing=_showsDeleteButtonWhenEditing - In the implementation block
@property (assign,setter=_setShowsTitleAndSubtitle:,nonatomic) BOOL _showsTitleAndSubtitle;              //@synthesize _showsTitleAndSubtitle=__showsTitleAndSubtitle - In the implementation block
@property (setter=_setTitleTextField:,nonatomic,retain) UITextField * _titleTextField;                   //@synthesize _titleTextField=__titleTextField - In the implementation block
@property (setter=_setSubtitleLabel:,nonatomic,retain) UILabel * _subtitleLabel;                         //@synthesize _subtitleLabel=__subtitleLabel - In the implementation block
@property (setter=_setDeleteButton:,nonatomic,retain) UIButton * _deleteButton;                          //@synthesize _deleteButton=__deleteButton - In the implementation block
+(void)initialize;
+(void)_updateLabelGlobalCachedSizes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)title;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setEditing:(BOOL)arg1 ;
-(int)layout;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)setLayout:(int)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2 ;
-(void)cancelPerformRetitleAction;
-(void)_setStackView:(id)arg1 ;
-(void)_setTitleTextField:(id)arg1 ;
-(id)_subtitleLabel;
-(id)_titleTextField;
-(CGFloat)xInset;
-(CGPoint)_deleteButtonCenter;
-(id)stackView;
-(id)customImageView;
-(id)_deleteButton;
-(BOOL)_showsTitleAndSubtitle;
-(void)_setShowsTitleAndSubtitle:(BOOL)arg1 ;
-(void)_updateTitleTextFieldAnimated:(BOOL)arg1 ;
-(void)_updateSubtitleLabelAnimated:(BOOL)arg1 ;
-(void)_setDeleteButton:(id)arg1 ;
-(void)_setSubtitleLabel:(id)arg1 ;
-(void)_updateStackViewAnimated:(BOOL)arg1 ;
-(void)_updateDeleteButtonAnimated:(BOOL)arg1 ;
-(BOOL)showsDeleteButtonWhenEditing;
-(void)_deleteAction:(id)arg1 ;
-(int)_textAlignmentForLayout:(int)arg1 ;
-(CGFloat)_titleTextFieldAlpha;
-(void)setShowsTitle:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCustomImageView:(id)arg1 ;
-(void)setXInset:(CGFloat)arg1 ;
-(void)setShowsDeleteButtonWhenEditing:(BOOL)arg1 ;
-(unsigned)editCapabilities;
-(void)setEditCapabilities:(unsigned)arg1 ;
-(void).cxx_destruct;
@end

