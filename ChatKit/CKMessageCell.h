/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UITableViewCell.h>

@class UIButton, CKBalloonView;

@interface CKMessageCell : UITableViewCell {
	CKBalloonView* _balloonView;
	UIButton* _failedButton;
	CGFloat _topPadding;
	CGFloat _bottomPadding;
	id _replacementMessageBubbleData;
}
@property(readonly, assign, nonatomic) CKBalloonView* balloonView;
@property(retain, nonatomic) id replacementMessageBubbleData;
+(id)_exclamationGlyphImage;
+(id)_failImage;
+(id)_failPressedImage;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(id)_multiselectBackgroundColor;
-(void)addBalloonView:(id)view;
-(void)setFailed:(BOOL)failed;
-(void)setTopPadding:(CGFloat)padding bottomPadding:(CGFloat)padding2;
-(void)_failPressed:(id)pressed;
-(void)didTapBalloon:(id)balloon;
-(void)_resetBalloonFrame;
-(void)prepareForReuse;
@end

