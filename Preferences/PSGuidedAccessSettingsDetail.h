//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSSettingsDetail.h"

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>
{
}

+ (void)enterGuidedAccessMode;
+ (void)setGuidedAccessSwitchEnabled:(BOOL)arg1;
+ (BOOL)guidedAccessHasPasscode;
+ (id)preferencesURL;
+ (unsigned int)guidedAccessAvailability;
+ (id)iconImage;

@end
