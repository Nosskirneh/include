/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>


@interface UITextFieldBackgroundView : UIView {
	BOOL _active;
	CGFloat _progress;
}
-(void)_updateImages;
-(id)initWithFrame:(CGRect)frame active:(BOOL)active;
-(void)setFrame:(CGRect)frame;
-(void)setBounds:(CGRect)bounds;
-(void)setActive:(BOOL)active;
-(void)setProgress:(CGFloat)progress;
-(BOOL)ignoresMouseEvents;
@end

