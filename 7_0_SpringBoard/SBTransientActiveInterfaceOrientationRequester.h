//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject
{
    long long _orientation;
    NSString *_reason;
}

@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (void)dealloc;
- (id)initWithOrientation:(long long)arg1 andReason:(id)arg2;

@end

