/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class NSString, UIRemoveControlMinusButton;

@interface UIRemoveControl : UIView {
	UIView* _target;
	id _delegate;
	UIView* _removeConfirmationButton;
	UIRemoveControlMinusButton* _minusButton;
	NSString* _label;
	struct {
		unsigned removeButtonVisible : 1;
		unsigned removeConfirmationVisible : 1;
		unsigned removedFromTargetWhenHidden : 1;
		unsigned disableToggleRotate : 1;
		unsigned tableCellTarget : 1;
		unsigned alwaysHideRemoveButton : 1;
		unsigned editingStyle : 3;
		unsigned reserved : 23;
	} _removeControlFlags;
}
+(CGFloat)removeButtonWidth;
+(BOOL)removeConfirmationsVisibleInView:(id)view;
+(void)hideAllRemoveConfirmationsInView:(id)view;
-(id)initWithTarget:(id)target;
-(void)dealloc;
-(void)removeFromSuperview;
-(void)layoutSubviews;
-(void)setTarget:(id)target;
-(void)setDelegate:(id)delegate;
-(id)delegate;
-(void)setRemovedFromTargetWhenHidden:(BOOL)targetWhenHidden;
-(void)setAlwaysHideRemoveButton:(BOOL)button;
-(BOOL)removedFromTargetWhenHidden;
-(void)_setInterceptMouseEvent:(BOOL)event;
-(void)minusButtonDidHide:(id)minusButton;
-(void)_minusButtonFadeAnimationStopped;
-(CGRect)defaultRemoveButtonStartingFrame;
-(CGRect)defaultRemoveButtonEndingFrame;
-(CGRect)removeButtonStartingFrame;
-(CGRect)removeButtonEndingFrame;
-(CGFloat)removeButtonAnimationDuration;
-(void)showRemoveButton:(BOOL)button animated:(BOOL)animated;
-(BOOL)isRemoveButtonVisible;
-(void)_confirmationAnimationDidEnd;
-(CGRect)targetContentBounds;
-(CGRect)_removeConfirmationStartingFrame;
-(CGRect)_removeConfirmationEndingFrame;
-(void)_setRemoveConfirmationShowing:(BOOL)showing animated:(BOOL)animated;
-(BOOL)isRemoveConfirmationVisible;
-(void)setRemoveConfirmationVisible:(BOOL)visible;
-(void)setRemoveConfirmationVisible:(BOOL)visible animated:(BOOL)animated;
-(id)removeConfirmationView;
-(void)setHighlighted:(BOOL)highlighted;
-(void)isHighlighted;
-(void)setSelected:(BOOL)selected;
-(id)_interceptMouseEvent:(GSEventRef)event;
-(id)_interceptEvent:(id)event;
-(void)setAlpha:(CGFloat)alpha;
-(void)hideControlsUsingRemoveAnimation;
-(void)setLabel:(id)label;
-(void)setRemoveConfirmationLabel:(id)label;
-(id)removeConfirmationButton;
-(id)_scriptingInfo;
-(CGFloat)_verticalOffsetFromTarget;
-(BOOL)_isInsertControl;
-(void)_setInsertControl:(BOOL)control;
-(void)_setTableViewCellEditingStyle:(int)style;
-(void)addConfirmationButtonSubview:(id)subview withWidth:(CGFloat)width target:(id)target;
-(void)_hideRemoveConfirmation;
-(void)_showDeleteConfirmation:(id)confirmation;
-(void)_doInsert:(id)insert;
-(void)_doRemove:(id)remove;
-(void)_shouldRemoveTarget;
-(void)animator:(id)animator stopAnimation:(id)animation;
-(void)_hideRemoveAnimationDone;
@end

