//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBWindowContextHostManager, NSString;

@protocol FBWindowContextHostManagerDelegate <NSObject>

@optional
- (BOOL)windowContextHostManager:(FBWindowContextHostManager *)arg1 shouldEnableContextHostingForRequester:(NSString *)arg2 priority:(int)arg3;
- (NSString *)windowContextHostManager:(FBWindowContextHostManager *)arg1 overrideRequester:(NSString *)arg2;
@end

