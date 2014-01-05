/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class PUStackView;

@interface PUFeedStackCell : PUFeedCell {

	PUStackView* _stackView;
	UIOffset _stackOffset;

}

@property (nonatomic,retain) PUStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
@property (assign,nonatomic) UIOffset stackOffset;                 //@synthesize stackOffset=_stackOffset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)stackView;
-(UIOffset)stackOffset;
-(void)setStackOffset:(UIOffset)arg1 ;
-(void)setStackView:(id)arg1 ;
-(void).cxx_destruct;
@end
