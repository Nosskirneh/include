//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIStatusBarStyleRequest;

@protocol SBDisplayProtocol <NSObject>
- (id)deactivationValue:(unsigned int)arg1;
- (_Bool)deactivationFlag:(unsigned int)arg1;
- (void)setDeactivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDeactivationSetting:(unsigned int)arg1 flag:(_Bool)arg2;
- (void)clearDeactivationSettings;
- (id)activationValue:(unsigned int)arg1;
- (_Bool)activationFlag:(unsigned int)arg1;
- (void)setActivationSetting:(unsigned int)arg1 value:(id)arg2;
- (void)setActivationSetting:(unsigned int)arg1 flag:(_Bool)arg2;
- (void)clearActivationSettings;
- (id)displayValue:(unsigned int)arg1;
- (_Bool)displayFlag:(unsigned int)arg1;
- (void)setDisplaySetting:(unsigned int)arg1 value:(id)arg2;
- (void)setDisplaySetting:(unsigned int)arg1 flag:(_Bool)arg2;
- (void)clearDisplaySettings;
- (_Bool)expectsFaceContactInLandscape;
- (_Bool)expectsFaceContact;
- (void)setExpectsFaceContact:(_Bool)arg1 inLandscape:(_Bool)arg2;
- (void)setExpectsFaceContact:(_Bool)arg1;
- (void)deactivate;
- (void)activate;
- (double)autoLockTime;
- (double)autoDimTime;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesNotificationCenter;
- (_Bool)suppressesBanners;
- (double)accelerometerSampleInterval;
- (void)setAccelerometerSampleInterval:(double)arg1;
- (_Bool)orientationChangedEventsEnabled;
- (void)setOrientationChangedEventsEnabled:(_Bool)arg1;
- (_Bool)allowsEventOnlySuspension;
- (UIStatusBarStyleRequest *)effectiveStatusBarStyleRequest;
- (UIStatusBarStyleRequest *)statusBarStyleRequest;
- (long long)starkStatusBarStyle;
- (long long)statusBarStyle;
@end
