/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <Foundation/NSValue.h>

#import <QuartzCore/CATransform3D.h>

@interface NSValue (CARenderValue)
-(Object*)CA_copyRenderValue;
@end

@interface NSValue (CAAnimatableValue)
-(id)CA_addValue:(id)value multipliedBy:(int)by;
-(id)CA_interpolateValue:(id)value byFraction:(CGFloat)fraction;
-(CGFloat)CA_distanceToValue:(id)value;
@end

