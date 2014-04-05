/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

#import "UITextInputPrivate.h"

@protocol UIKeyboardInput <UITextInputPrivate>
@end

#else

#import "UIKit-Structs.h"
#import <UIKit/UITextInputTraits.h>
#import "UITextSelectingContainer.h"
#import "UITextInputTraits_Private.h"

@protocol UIKeyboardInput <UITextInputTraits, UITextInputTraits_Private, UITextSelectingContainer>
-(id)delegate;
-(id)textInputTraits;
-(BOOL)hasContent;
-(id)text;
-(void)setText:(id)text;
-(void)deleteBackward;
-(void)insertText:(id)text;
-(void)selectAll;
-(int)selectionState;
-(id)keyboardInputView;
-(BOOL)hasSelection;
-(CGRect)rectContainingCaretSelection;
-(CGRect)rectForNSRange:(NSRange)nsrange;
-(id)rectsForNSRange:(NSRange)nsrange;
-(id)wordRangeContainingCaretSelection;
-(BOOL)shouldEnableAutoShift __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(id)rangeByMovingCurrentSelection:(int)selection;
-(id)rangeByExtendingCurrentSelection:(int)selection;
-(void)extendCurrentSelection:(int)selection;
-(id)wordContainingCaretSelection;
-(id)wordInRange:(id)range;
-(unsigned short)characterAfterCaretSelection;
-(unsigned short)characterBeforeCaretSelection;
-(unsigned short)characterInRelationToCaretSelection:(int)caretSelection;
-(void)expandSelectionToStartOfWordContainingCaretSelection;
-(void)moveBackward:(unsigned)backward;
-(void)moveForward:(unsigned)forward;
-(void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;
-(void)replaceCurrentWordWithText:(id)text;
-(void)replaceRangeWithTextWithoutClosingTyping:(NSRange)textWithoutClosingTyping replacementText:(id)text;
-(BOOL)rangeAtSentenceStart:(id)sentenceStart __OSX_AVAILABLE_BUT_DEPRECATED(__MAC_NA, __MAC_NA, __IPHONE_2_0, __IPHONE_3_1);
-(NSRange)selectionRange;
-(id)selectedDOMRange;
-(void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;
-(BOOL)selectionAtDocumentStart;
-(BOOL)selectionAtSentenceStart;
-(BOOL)selectionAtWordStart;
-(NSRange)markedTextRange;
-(id)markedText;
-(void)setMarkedText:(id)text selectedRange:(NSRange)range;
-(void)setMarkedText:(id)text;
-(void)confirmMarkedText:(id)text;
-(int)wordOffsetInRange:(id)range;
-(CGRect)convertCaretRect:(CGRect)rect;
-(BOOL)isProxyFor:(id)aFor;
-(id)textColorForCaretSelection;
-(id)fontForCaretSelection;
@optional
-(BOOL)requiresKeyEvents;
-(void)handleKeyEvent:(GSEventRef)event;
-(id)automaticallySelectedOverlay;
-(void)setBottomBufferHeight:(CGFloat)height;
-(id)window;
@end

#endif
