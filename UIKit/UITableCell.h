/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class _UITableCellTransientData;

@interface UITableCell : UIView {
	_UITableCellTransientData* _transientData;
	CGFloat _rightMargin;
	struct {
		unsigned dontShowSelection : 1;
		unsigned showDisclosure : 1;
		unsigned showTopSeparator : 1;
		unsigned separatorStyle : 3;
		unsigned selectionStyle : 3;
		unsigned hideDisclosure : 1;
		unsigned isBeingDeleted : 1;
		unsigned disclosureClickable : 1;
		unsigned selectionFadeFraction : 11;
		unsigned disclosureStyle : 1;
		unsigned showingRemoveControl : 1;
		unsigned alignment : 3;
		unsigned showDisclosureWhenReordering : 1;
		unsigned fadeDisclosure : 1;
		unsigned reserved : 2;
	} _tableCellFlags;
	UIView* _disclosureView;
}
-(id)disclosureImage;
-(id)disclosurePressedImage;
-(void)dealloc;
-(id)removeControl;
-(void)setSelected:(BOOL)selected withFade:(BOOL)fade;
-(void)updateHighlightColors;
-(BOOL)isAtLeastHalfSelected;
-(CGFloat)selectionPercent;
-(void)_deselectWithFlashCount:(int)flashCount duration:(double)duration;
-(void)setSelected:(BOOL)selected;
-(BOOL)isSelected;
-(void)setShowSelection:(BOOL)selection;
-(void)setShowSelectionNoRedisplay:(BOOL)redisplay;
-(void)setSeparatorStyle:(int)style;
-(void)setShowDisclosure:(BOOL)disclosure;
-(void)setSelectionStyle:(int)style;
-(void)setDisclosureStyle:(int)style;
-(void)setDisclosureStyleNoUpdate:(int)update;
-(int)disclosureStyle;
-(int)separatorStyle;
-(void)setSeparatorStyleOnly:(int)only;
-(BOOL)showSelection;
-(BOOL)showDisclosure;
-(void)setAlpha:(CGFloat)alpha;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(BOOL)cancelMouseTracking;
-(BOOL)cancelTouchTracking;
-(BOOL)_isReordering;
-(id)_grabberView;
-(void)drawRect:(CGRect)rect;
-(void)_releaseGrabber;
-(void)_finishedFadingGrabber:(id)grabber finished:(BOOL)finished;
-(CGFloat)disclosureRightMargin;
-(BOOL)isReorderingEnabled;
-(void)setShowDisclosureWhenReordering:(BOOL)reordering;
-(BOOL)showDisclosureWhenReordering;
-(void)setEnableReordering:(BOOL)reordering animated:(BOOL)animated;
-(void)_grabberBeganReorder:(id)reorder;
-(void)_grabberDragged:(id)dragged yDelta:(CGFloat)delta;
-(void)_grabberReleased:(id)released;
-(void)drawBackgroundInRect:(CGRect)rect withFade:(CGFloat)fade;
-(void)drawSeparatorInRect:(CGRect)rect;
-(void)drawContentInRect:(CGRect)rect selected:(BOOL)selected;
-(void)_releaseRemoveControl;
-(void)removeFromSuperview;
-(void)setDisclosureClickable:(BOOL)clickable;
-(id)createRemoveControl;
-(id)createInsertControl;
-(void)_setDisclosureHidden:(BOOL)hidden;
-(void)_setGrabberHidden:(BOOL)hidden;
-(void)removeControlWillShowRemoveConfirmation:(id)removeControl;
-(void)removeControlWillHideRemoveConfirmation:(id)removeControl;
-(void)_setRightMargin:(CGFloat)margin;
-(id)disclosureView;
-(void)setDisclosureView:(id)view;
-(id)_disclosureView;
-(CGFloat)removeButtonAnimationDuration;
-(void)_layoutSubviewsAnimated:(BOOL)animated;
-(void)_setShowIndentSpacer:(BOOL)spacer animated:(BOOL)animated;
-(BOOL)isRemoveControlVisible;
-(void)_showDeleteOrInsertion:(BOOL)insertion withDisclosure:(BOOL)disclosure animated:(BOOL)animated isDelete:(BOOL)aDelete andRemoveConfirmation:(BOOL)confirmation;
-(void)_uiRemoveControlMinusButtonHideAnimationDone:(id)done;
-(void)_willBeDeleted;
-(BOOL)removeControl:(id)control shouldRemoveTarget:(id)target;
-(void)removeControl:(id)control willRemoveTarget:(id)target;
-(void)removeControl:(id)control didRemoveTarget:(id)target;
-(void)insertControl:(id)control shouldInsertWithTarget:(id)target;
-(id)_createDisclosureView;
-(CGRect)contentBounds;
-(void)setShowDisclosure:(BOOL)disclosure animated:(BOOL)animated;
-(void)_setRemoveCharge:(CGFloat)charge;
-(void)_setDrawsTopSeparator:(BOOL)separator;
-(void)layoutSubviews;
-(BOOL)_shouldTryPromoteDescendantToFirstResponder;
-(void)_setSelectionFadeFraction:(CGFloat)fraction;
@end

