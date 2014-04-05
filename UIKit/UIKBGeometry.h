/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <Foundation/NSObject.h>

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying> {
	NSString* m_name;
	UIKBLength m_x;
	UIKBLength m_y;
	UIKBLength m_w;
	UIKBLength m_h;
	UIKBLength m_paddingTop;
	UIKBLength m_paddingLeft;
	UIKBLength m_paddingBottom;
	UIKBLength m_paddingRight;
	BOOL m_explicit;
}
@property(retain, nonatomic) NSString* name;
@property(assign, nonatomic, setter=setX:) UIKBLength x;
@property(assign, nonatomic, setter=setY:) UIKBLength y;
@property(assign, nonatomic, setter=setW:) UIKBLength w;
@property(assign, nonatomic, setter=setH:) UIKBLength h;
@property(assign, nonatomic, setter=setPaddingTop:) UIKBLength paddingTop;
@property(assign, nonatomic, setter=setPaddingLeft:) UIKBLength paddingLeft;
@property(assign, nonatomic, setter=setPaddingBottom:) UIKBLength paddingBottom;
@property(assign, nonatomic, setter=setPaddingRight:) UIKBLength paddingRight;
@property(assign, nonatomic) BOOL explicit;
+(UIKBGeometry*)geometry;
+(UIKBGeometry*)geometryWithRect:(CGRect)rect;
//-(id)init;
//-(void)dealloc;
//-(id)initWithCoder:(id)coder;
//-(void)encodeWithCoder:(id)coder;
//-(id)copyWithZone:(NSZone*)zone;
//-(id)description;
-(CGRect)frame;
-(CGRect)frameWithContainingFrame:(CGRect)containingFrame;
-(CGRect)paddedFrameWithContainingFrame:(CGRect)containingFrame;
-(CGRect)paddedFrameWithResolvedFrame:(CGRect)resolvedFrame;
-(id)overrideGeometry:(id)geometry;
@end

static inline UIKBGeometry* UIKBGeometryForKeyWithPercentages(UIKBGeometry *geom, CGFloat x, CGFloat y, CGFloat w, CGFloat h) {
	geom.x = UIKBLengthMakePercentage(x);
	geom.y = UIKBLengthMakePercentage(y);
	geom.w = UIKBLengthMakePercentage(w);
	geom.h = UIKBLengthMakePercentage(h);
	geom.paddingLeft = UIKBLengthMakePixel(1);
	geom.paddingRight = UIKBLengthMakePixel(1);
	return geom;
}
// So that simply including this header won't link UIKBGeometry
#define UIKBGeometryForKeyWithPercentages(x, y, w, h) UIKBGeometryForKeyWithPercentages([UIKBGeometry geometry], x, y, w, h)
