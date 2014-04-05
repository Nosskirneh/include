/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UITextInputTraits.h>
#import "UIKit-Structs.h"
#import "UITextContentView.h"
#import "UITextSelectingContainer.h"
#import <UIKit/UIView.h>
#import <Availability2.h>

@class UIDelayedAction, DOMHTMLElement, WebFrame, NSString, UITextInteractionAssistant, UITextSelectionView, UIColor, UITouch, UIFont, UIWebDocumentView;
@protocol UITextSelectingContent, UITextContentViewDelegate;

@interface UITextContentView : UIView <UITextSelectingContainer, UITextInputTraits> {
	id m_delegate;
	WebFrame* m_frame;
	DOMHTMLElement* m_body;
	int m_marginTop;
	UIDelayedAction* m_scrollToVisibleTimer;
	CGPoint m_touchPoint;
	CGPoint m_touchOffset;
	UITouch* m_syntheticTouch;
	UIEdgeInsets m_selectionInset;
	CGFloat m_bottomBufferHeight;
	BOOL m_editable;
	BOOL m_editing;
	BOOL m_becomesEditableWithGestures;
	BOOL m_selecting;
	BOOL m_handlingMouse;
	BOOL m_sentMouseDown;
	BOOL m_passMouseDownToOther;
	BOOL m_scrollOnMouseUp;
	BOOL m_becomingFirstResponder;
	BOOL m_reentrancyGuard;
	BOOL m_scrollsSelectionOnWebDocumentChanges;
	UITextInteractionAssistant* m_interactionAssistant;
	UITextSelectionView* m_selectionView;
	UIWebDocumentView* m_webView;
	UIFont* m_font;
	UIColor* m_textColor;
	int m_textAlignment;
}
@property(assign, nonatomic) UIEdgeInsets selectionInset;
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;
@property(assign, nonatomic) UITextAutocapitalizationType autocapitalizationType;
@property(assign, nonatomic) UITextAutocorrectionType autocorrectionType;
@property(assign, nonatomic) UIKeyboardType keyboardType;
@property(assign, nonatomic) UIKeyboardAppearance keyboardAppearance;
@property(assign, nonatomic) UIReturnKeyType returnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic, getter=isEditing) BOOL editing;
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;
@property(readonly, assign, nonatomic) UITextSelectionView* selectionView;
@property(readonly, assign, nonatomic) UITextInteractionAssistant* interactionAssistant;
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent>* content;
@property(assign, nonatomic, getter=isEditable) BOOL editable;
@property(assign, nonatomic) NSRange selectedRange;
@property(assign, nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor* textColor;
@property(retain, nonatomic) UIFont* font;
@property(copy, nonatomic) NSString* text;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame webView:(id)view;
-(id)initWithCoder:(id)coder;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)encodeWithCoder:(id)coder;
-(void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;
-(void)dealloc;
-(void)removeFromSuperview;
-(void)detachSelectionView;
-(void)detachInteractionAssistant;
-(void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;
-(void)keyboardDidShow:(id)keyboard;
-(id)scrollView;
-(CGSize)tileSizeForSize:(CGSize)size;
-(id)styleString;
-(void)recalculateStyle;
-(void)didMoveToSuperview;
-(void)setEmbeddedEditingMode:(BOOL)mode;
-(void)updateWebViewObjects;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)isFirstResponder;
-(void)ensureSelection;
-(CGPoint)constrainedPoint:(CGPoint)point;
-(id)automaticallySelectedOverlay  __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;
-(void)_scrollViewDidEndDecelerating;
-(void)beginSelectionChange;
-(void)updateSelection;
-(void)endSelectionChange;
-(void)selectionChanged;
-(BOOL)hasSelection;
-(int)selectionState;
-(void)clearSelection;
-(int)selectionGranularity;
-(void)startAutoscroll:(CGPoint)autoscroll;
-(void)cancelAutoscroll;
-(void)setSelectionVisible:(BOOL)visible;
-(void)collapseSelection;
-(BOOL)selectionVisible;
-(void)setCaretBlinks:(BOOL)blinks;
-(BOOL)caretBlinks;
-(CGRect)caretRect;
-(CGRect)selectionClipRect;
-(id)selectionRects;
-(BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start;
-(void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;
-(id)selectedText;
-(void)insertText:(id)text;
-(CGRect)closestCaretRectForPoint:(CGPoint)point inSelection:(BOOL)selection;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;
-(unsigned)selectionOffsetInMarkedText;
-(BOOL)hasMarkedText;
-(BOOL)pointAtStartOfLine:(CGPoint)line;
-(BOOL)pointAtEndOfLine:(CGPoint)line;
-(BOOL)isPoint:(CGPoint)point inRange:(id)range;
-(id)wordAtPoint:(CGPoint)point;
-(void)moveSelectionToStartOrEndOfCurrentWord;
-(id)markedText;
-(id)wordContainingCaretSelection;
-(id)wordRangeContainingCaretSelection;
-(id)wordInRange:(id)range;
-(unsigned short)characterBeforeCaretSelection;
-(BOOL)rangeAtSentenceStart:(id)sentenceStart;
-(NSRange)selectionRange;
-(CGRect)rectContainingCaretSelection;
-(id)fontForCaretSelection;
-(id)undoManagerForWebView:(id)webView;
-(id)undoManager;
-(void)_hideSelectionCommands;
-(void)_setRtoLTextDirection:(id)direction;
-(void)_setLtoRTextDirection:(id)direction;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)selectAll;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(int)index;
-(void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;
-(void)webViewDidChange:(id)webView;
-(void)performBecomeEditableTasks;
-(void)setFrame:(CGRect)frame;
-(BOOL)isSMSTextView  __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(void)setSelectionWithPoint:(CGPoint)point;
-(void)setSelectionToStart;
-(void)setSelectionToEnd;
-(CGRect)rectForSelection:(NSRange)selection;
-(void)scrollSelectionToVisible:(BOOL)visible;
-(void)performScrollSelectionToVisible:(BOOL)visible;
-(void)touchScrollToVisibleTimerWithDelay:(double)delay;
-(void)touchScrollToVisibleTimer;
-(void)clearScrollToVisibleTimer;
-(void)scrollToVisibleTimerAction;
-(CGRect)rectForScrollToVisible;
-(void)setContentToHTMLString:(id)htmlstring;
-(id)contentAsHTMLString;
-(id)textInputTraits;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(BOOL)hasText;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)gestures;
-(int)marginTop;
-(void)setMarginTop:(int)top;
-(CGRect)visibleRect;
-(CGRect)visibleTextRect;
-(id)webView;
-(void)_didScroll;
-(void)scrollRangeToVisible:(NSRange)visible;
-(BOOL)shouldStartDataDetectors;
-(void)cancelDataDetectorsWithWebLock;
-(void)startDataDetectorsWithWebLock;
-(void)resetDataDetectorsResultsWithWebLock;
-(unsigned)dataDetectorTypes;
-(void)setDataDetectorTypes:(unsigned)types;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)point;
-(void)startInteractionWithLinkAtPoint:(CGPoint)point;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)point;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)point;
-(void)cancelInteractionWithLink;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)point;
-(BOOL)isInteractingWithLink;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)point;
-(BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(BOOL)keyboardInputChanged:(id)changed;
-(void)keyboardInputChangedSelection:(id)selection;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)setBottomBufferHeight:(CGFloat)height;
-(CGFloat)bottomBufferHeight;
-(void)setShowScrollerIndicators:(BOOL)indicators;
-(BOOL)showScrollerIndicators;
-(void)displayScrollerIndicators;
-(void)setOffset:(CGPoint)offset;
-(CGPoint)offset;
-(void)setAllowsRubberBanding:(BOOL)banding;
-(void)setScrollingEnabled:(BOOL)enabled;
-(BOOL)scrollingEnabled;
-(void)setAllowsFourWayRubberBanding:(BOOL)banding;
-(void)setScrollerIndicatorSubrect:(CGRect)subrect;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)replace:(id)replace;
-(void)promptForReplace:(id)replace;
#else
-(void)textLoupeTimerAction;
-(id)_syntheticTouch;
-(void)callSuperTouchBegan:(XXStruct_CKAdxD*)began;
-(void)callSuperTouchMoved:(XXStruct_CKAdxD*)moved;
-(void)callSuperTouchEnded:(XXStruct_CKAdxD*)ended;
-(void)touchBegan:(XXStruct_CKAdxD*)began atLocation:(CGPoint)location;
-(void)touchMoved:(XXStruct_CKAdxD*)moved atLocation:(CGPoint)location;
-(void)touchEnded:(XXStruct_CKAdxD*)ended atLocation:(CGPoint)location loupeActive:(BOOL)active loupeTerminalPoint:(CGPoint)point;
-(void)mouseDown:(GSEventRef)down;
-(void)mouseDragged:(GSEventRef)dragged;
-(void)mouseUp:(GSEventRef)up;
-(int)wordOffsetInRange:(id)range;
-(BOOL)selectionAtSentenceStart;
-(unsigned short)characterInRelationToCaretSelection:(int)caretSelection;
-(int)keyboardInput:(id)input positionForAutocorrection:(id)autocorrection;
#endif
@end

@interface UITextContentView (SyntheticEvents)
-(id)_automationValue;
@end

@protocol UITextContentViewDelegate <NSObject>
@optional
-(BOOL)textContentViewShouldBeginEditing:(id)textContentView;
-(BOOL)textContentViewShouldEndEditing:(id)textContentView;
-(void)textContentViewDidBeginEditing:(id)textContentView;
-(void)textContentViewDidEndEditing:(id)textContentView;
-(BOOL)textContentView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textContentViewDidChange:(id)textContentView;
-(void)textContentViewDidChangeSelection:(id)textContentView;
-(BOOL)textContentView:(id)view shouldScrollForPendingContentSize:(CGSize)pendingContentSize;
-(BOOL)textContentView:(id)view shouldChangeSizeForContentSize:(CGSize)contentSize;
-(void)textContentView:(id)view didChangeSize:(CGSize)size;
@end

