//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAwayListItem.h"

@class NSString, SBAlertItem, UIImage;

@interface SBAwaySystemAlertItem : SBAwayListItem
{
    SBAlertItem *_currentAlert;
    NSString *_title;
    UIImage *_appImage;
    NSString *_message;
    int _displayedButtonIndex;
    BOOL _isAlarm;
}

- (BOOL)isAlarm;
- (void)buttonPressed;
- (id)sortDate;
- (id)iconImage;
- (id)title;
- (id)message;
- (void)setCurrentAlert:(id)arg1;
- (id)currentAlert;
- (void)dealloc;
- (id)initWithSystemAlert:(id)arg1;
- (id)init;

@end
