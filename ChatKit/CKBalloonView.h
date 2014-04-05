/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"
#import <UIKit/UIView.h>

@class NSString, CKMessagePart;

@interface CKBalloonView : UIView {
	id _delegate;
	id _tapDelegate;
	int _orientation;
	CGFloat _bubbleAlpha;
	CGFloat _tightenedWidth;
	unsigned _hasURLs : 1;
	unsigned _draws : 1;
	unsigned _forceTighten : 1;
	unsigned _balloonHighlight : 1;
	CGFloat _topMargin;
	CKMessagePart* _messagePart;
	NSString* _subject;
	unsigned _preview : 1;
	unsigned _isIgnoringSingleTap : 1;
	unsigned _calloutRegistered : 1;
}
@property(copy, nonatomic) NSString* subject;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) id tapDelegate;
+(CGFloat)fixedHeight;
+(BOOL)shouldHaveAccessoryDiclosure;
+(CGSize)defaultSize;
+(UIFont*)defaultFont;
+(BOOL)showsSubject;
+(CGSize)sizeForMessagePart:(id)messagePart width:(CGFloat)width;
+(CGFloat)heightForText:(id)text width:(CGFloat)width subject:(id)subject;
+(CGSize)sizeForMessagePart:(id)messagePart width:(CGFloat)width withSubject:(BOOL)subject;
+(CGPoint)offsetForBubbleInsetAtPoint:(CGPoint)point;
+(CGFloat)additionalHeightForBubbleWhenInsetAtPoint:(CGPoint)point;
+(CGFloat)heightForText:(id)text;
+(CGFloat)heightForText:(id)text width:(CGFloat)width;
+(CGFloat)heightForText:(id)text width:(CGFloat)width includeBuffers:(BOOL)buffers;
+(CGContextRef)sharedSizingContext;
-(void)setPreview:(BOOL)preview;
-(BOOL)isPreview;
-(void)copy:(id)copy;
-(void)_stopIgnoringSingleTapGesture;
-(void)_temporarilyIgnoreSingleTapGesture;
-(void)calloutWillHide:(id)callout;
-(void)_toggleCopyCallout;
-(void)_hideCopyCallout;
-(void)_showCopyCallout;
-(void)copyToPasteboard;
-(void)_setBalloonHighlight:(BOOL)highlight;
-(CGFloat)balloonContentHeadMargin;
-(CGFloat)balloonContentTailMargin;
-(CGFloat)balloonContentTopMargin;
-(CGFloat)balloonContentBottomMargin;
-(void)setTopMargin:(CGFloat)margin;
-(void)oneFingerDoubleTap:(id)tap;
-(void)longPressGesture:(id)gesture;
-(void)singleTap:(id)tap;
-(void)setupGestureRecognizers;
-(id)initWithFrame:(CGRect)frame delegate:(id)delegate;
-(int)orientation;
-(void)setOrientation:(int)orientation;
-(void)setBubbleAlpha:(CGFloat)alpha;
-(void)setComposition:(id)composition;
-(void)setText:(id)text;
-(id)messagePart;
-(void)setMessagePart:(id)part;
-(void)setDraws:(BOOL)draws;
-(id)text;
-(void)setFrame:(CGRect)frame;
-(CGFloat)tightenedWidth;
-(void)setForceTighten:(BOOL)tighten;
-(CGFloat)heightForWidth:(CGFloat)width;
-(void)tighten;
-(void)drawBalloonImage:(id)image inRect:(CGRect)rect;
-(CGRect)_tightenedBounds;
-(CGRect)contentBounds;
-(CGRect)balloonBounds;
-(void)drawRect:(CGRect)rect;
-(void)prepareForReuse;
-(BOOL)hasURLs;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(void)dealloc;
@end

@protocol CKBalloonViewTapDelegate
-(void)didTapBalloon:(CKBalloonView*)view;
@end
