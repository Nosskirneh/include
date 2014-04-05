/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIModalView.h"
#import "UITextFieldDelegate.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

@class UILabel, NSMutableArray, UIWindow, UIToolbar, NSString;
@protocol UIModalViewDelegate;

@interface UIModalView : UIView <UITextFieldDelegate> {
	id<UIModalViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _bodyTextLabel;
	UILabel* _taglineTextLabel;
	CGFloat _startX;
	CGFloat _startY;
	id _context;
	int _cancelButton;
	int _defaultButton;
	int _firstOtherButton;
	UIToolbar* _toolbar;
	UIWindow* _originalWindow;
	UIWindow* _dimWindow;
	int _suspendTag;
	int _dismissButtonIndex;
	CGFloat _bodyTextHeight;
	NSMutableArray* _buttons;
	NSMutableArray* _textFields;
	UIView* _keyboard;
	UIView* _table;
	UIView* _dimView;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UIView* _sheetView;
#endif
	struct {
		unsigned numberOfRows : 7;
		unsigned delegateAlertSheetButtonClicked : 1;
		unsigned delegateDidPresentAlertSheet : 1;
		unsigned delegateDidDismissAlertSheet : 1;
		unsigned hideButtonBar : 1;
		unsigned alertStyle : 3;
		unsigned dontDimBackground : 1;
		unsigned dismissSuspended : 1;
		unsigned dontBlockInteraction : 1;
		unsigned sheetWasPoppedUp : 1;
		unsigned animating : 1;
		unsigned hideWhenDoneAnimating : 1;
		unsigned layoutWhenDoneAnimating : 1;
		unsigned titleMaxLineCount : 2;
		unsigned bodyTextMaxLineCount : 3;
		unsigned runsModal : 1;
		unsigned runningModal : 1;
		unsigned addedTextView : 1;
		unsigned addedTableShadows : 1;
		unsigned showOverSBAlerts : 1;
		unsigned showMinTableContent : 1;
		unsigned bodyTextTruncated : 1;
		unsigned orientation : 3;
		unsigned groupsTextFields : 1;
		unsigned delegateBodyTextAlignment : 1;
		unsigned delegateClickedButtonAtIndex : 1;
		unsigned delegateCancel : 1;
		unsigned delegateWillPresent : 1;
		unsigned delegateDidPresent : 1;
		unsigned delegateWillDismiss : 1;
		unsigned delegateDidDismiss : 1;
		unsigned popupFromPoint : 1;
		unsigned extra : 20;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
		unsigned dontCallDismissDelegate : 1;
#endif
	} _modalViewFlags;
}
@property(readonly, assign, nonatomic, getter=isVisible) BOOL visible;
@property(assign, nonatomic) int cancelButtonIndex;
@property(readonly, assign, nonatomic) int numberOfButtons;
@property(copy, nonatomic) NSString* message;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) id<UIModalViewDelegate> delegate;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithTitle:(NSString *)title message:(NSString *)message delegate:(id<UIModalViewDelegate>)delegate defaultButton:(id)defaultButton cancelButton:(id)cancelButton otherButtons:(NSArray *)buttons;
-(id)_initWithTelephoneNumber:(id)telephoneNumber buttons:(NSArray *)buttons defaultButtonIndex:(NSInteger)index delegate:(id<UIModalViewDelegate>)delegate context:(id)context;
-(void)dealloc;
-(NSInteger)addButtonWithTitle:(NSString *)title;
-(NSString *)buttonTitleAtIndex:(NSInteger)index;
-(void)setDefaultButtonIndex:(NSInteger)index;
-(NSInteger)defaultButtonIndex;
-(void)_setFirstOtherButtonIndex:(NSInteger)index;
-(NSInteger)firstOtherButtonIndex;
-(void)dismissWithClickedButtonIndex:(NSInteger)clickedButtonIndex animated:(BOOL)animated;
@end

@interface UIModalView (Private)
@property(assign, nonatomic) BOOL groupsTextFields;
+(CGSize)minimumSize;
+(id)_popupAlertBackground;
+(BOOL)atLeastOneAlertVisible;
+(id)topMostAlert;
+(id)visibleAlert;
+(void)noteOrientationChangingTo:(int)to;
-(id)initWithTitle:(id)title buttons:(id)buttons defaultButtonIndex:(int)index delegate:(id)delegate context:(id)context;
-(BOOL)requiresPortraitOrientation;
-(int)_currentOrientation;
-(void)_setAlertSheetStyleFromButtonBar:(id)buttonBar;
-(id)buttons;
-(void)_createTitleLabelIfNeeded;
-(void)_createSubtitleLabelIfNeeded;
-(void)_createBodyTextLabelIfNeeded;
-(void)_createTaglineTextLabelIfNeeded;
-(void)_setupTitleStyle;
-(void)setBodyText:(id)text;
-(void)setTaglineText:(id)text;
-(void)setSubtitle:(id)subtitle;
-(id)subtitle;
-(id)bodyText;
-(void)setTitleMaxLineCount:(int)count;
-(int)titleMaxLineCount;
-(void)setBodyTextMaxLineCount:(int)count;
-(int)bodyMaxLineCount;
-(id)addTextFieldWithValue:(id)value label:(id)label;
-(void)_setTextFieldsHidden:(BOOL)hidden;
-(id)textFieldAtIndex:(int)index;
-(int)textFieldCount;
-(id)textField;
-(void)_alertSheetTextFieldReturn:(id)aReturn;
-(id)keyboard;
-(void)setDefaultButton:(id)button;
-(id)defaultButton;
-(void)setDestructiveButton:(id)button;
-(id)destructiveButton;
-(id)_addButtonWithTitle:(id)title label:(id)label buttonClass:(Class)aClass;
-(id)addButtonWithTitle:(id)title label:(id)label;
-(id)_addButtonWithTitle:(id)title;
-(id)addButtonWithTitle:(id)title buttonClass:(Class)aClass;
-(int)buttonCount;
-(void)setContext:(id)context;
-(id)context;
-(void)_buttonClicked:(id)clicked;
-(void)_cleanupAfterPopupAnimation;
-(void)setTableShouldShowMinimumContent:(BOOL)showMinimumContent;
-(BOOL)tableShouldShowMinimumContent;
-(id)table;
-(BOOL)_needsKeyboard;
-(void)setShowsOverSpringBoardAlerts:(BOOL)alerts;
-(BOOL)showsOverSpringBoardAlerts;
-(void)_performPopup:(BOOL)popup;
-(void)_growAnimationDidStop:(id)_growAnimation finished:(id)finished;
-(void)_bubbleAnimationShrinkDidStop:(id)_bubbleAnimationShrink finished:(id)finished;
-(void)_bubbleAnimationNormalDidStop:(id)_bubbleAnimationNormal finished:(id)finished;
-(BOOL)_isAnimating;
-(void)_popoutAnimationDidStop:(id)_popoutAnimation finished:(id)finished;
-(void)_performPopoutAnimationAnimated:(BOOL)animated;
-(void)_repopup;
-(BOOL)_dimsBackground;
-(BOOL)_canShowAlerts;
-(void)_removeAlertWindowOrShowAnOldAlert;
-(void)_temporarilyHideAnimated:(BOOL)animated;
-(void)_setupInitialFrame;
-(void)_rotatingAnimationDidStop:(id)_rotatingAnimation;
-(void)layoutAnimated:(BOOL)animated;
-(BOOL)isBodyTextTruncated;
-(void)_layoutPopupAlertWithOrientation:(int)orientation animated:(BOOL)animated;
-(void)_layoutIfNeeded;
-(void)_adjustLabelFontSizes;
-(void)popupAlertAnimated:(BOOL)animated atOffset:(CGFloat)offset;
-(void)popupAlertAnimated:(BOOL)animated fromBarButtonItem:(id)barButtonItem;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)userDidCancelPopoverView:(id)user;
#else
-(void)dimmingViewWasTapped:(id)tapped;
#endif
-(void)popupAlertAnimated:(BOOL)animated;
-(void)_presentSheetFromView:(id)view above:(BOOL)above;
-(void)presentSheetFromBehindView:(id)behindView;
-(void)presentSheetFromAboveView:(id)aboveView;
-(void)presentSheetInView:(id)view;
-(void)presentSheetToAboveView:(id)aboveView;
-(void)setDimView:(id)view;
-(id)_dimView;
-(void)_presentSheetStartingFromYCoordinate:(double)ycoordinate;
-(void)_slideSheetOut:(BOOL)anOut;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)animated;
-(CGSize)backgroundSize;
-(CGFloat)_titleVerticalTopInset;
-(CGFloat)_titleVerticalBottomInset;
-(CGFloat)_titleHorizontalInset;
-(CGFloat)_bottomVerticalInset;
-(void)drawRect:(CGRect)rect;
-(void)_appSuspended:(id)suspended;
-(void)_alertSheetAnimationDidStop:(id)_alertSheetAnimation finished:(id)finished;
-(void)setNumberOfRows:(int)rows;
-(int)numberOfRows;
-(int)alertSheetStyle;
-(void)setAlertSheetStyle:(int)style;
-(void)setDimsBackground:(BOOL)background;
-(BOOL)dimsBackground;
-(void)setSuspendTag:(int)tag;
-(int)suspendTag;
-(void)setBlocksInteraction:(BOOL)interaction;
-(BOOL)blocksInteraction;
-(void)setRunsModal:(BOOL)modal;
-(BOOL)runsModal;
-(CGRect)titleRect;
-(CGFloat)_maxHeight;
-(CGFloat)_buttonHeight;
-(void)layout;
-(int)numberOfLinesInTitle __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(void)presentSheetFromButtonBar:(id)buttonBar;
-(id)bodyTextView;
-(id)taglineTextView;
-(void)_prepareForDisplay;
-(void)replaceAlert:(id)alert;
-(void)_prepareToBeReplaced;
@end

