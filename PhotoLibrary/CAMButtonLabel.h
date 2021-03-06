/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel, _UILegibilityView;

@interface CAMButtonLabel : UIView
{
    _Bool _useLegibilityView;
    UILabel *__label;
    _UILegibilityView *__legibilityView;
    CGSize _contentSize;
}

@property(readonly, nonatomic) _UILegibilityView *_legibilityView; // @synthesize _legibilityView=__legibilityView;
@property(readonly, nonatomic) UILabel *_label; // @synthesize _label=__label;
@property(nonatomic, getter=isUsingLegibilityView) _Bool useLegibilityView; // @synthesize useLegibilityView=_useLegibilityView;
@property(readonly, nonatomic) CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void)layoutSubviews;
- (void)_createLegibilityView;
- (void)_updateViewAlphas;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text;
- (CGSize)sizeThatFits:(CGSize)size;
- (void)dealloc;

@end

