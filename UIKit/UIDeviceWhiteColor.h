/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIColor.h>


@interface UIDeviceWhiteColor : UIColor {
	CGFloat whiteComponent;
	CGFloat alphaComponent;
	CGColorRef cachedColor;
}
-(id)initWithWhite:(CGFloat)white alpha:(CGFloat)alpha;
-(id)initWithCGColor:(CGColorRef)cgcolor;
-(void)dealloc;
-(CGColorRef)_createCGColorWithAlpha:(CGFloat)alpha;
-(id)colorWithAlphaComponent:(CGFloat)alphaComponent;
-(void)set;
-(void)setFill;
-(void)setStroke;
-(id)colorSpaceName;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(CGColorRef)CGColor;
@end

