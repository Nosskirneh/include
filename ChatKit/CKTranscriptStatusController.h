/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSObject.h>

@class NSTimer, NSString, CKSendingProgressView, NSMutableSet, CKConversation, UIView;

@interface CKTranscriptStatusController : NSObject {
	UIView* _multipleRecipientTitleView;
	CKSendingProgressView* _statusView;
	NSString* _title;
	CKConversation* _conversation;
	CGFloat _lastVal;
	NSString* _lastMsg;
	NSTimer* _progressUpdateTimer;
	NSMutableSet* _currentMessages;
	BOOL _updatingProgress;
	BOOL _viewTitle;
	BOOL _finishingUp;
	id _delegate;
}
@property(retain, nonatomic) CKConversation* conversation;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) id delegate;
-(void)dealloc;
-(void)brieflyShowName;
-(void)reset;
-(void)refresh;
-(void)_updateTitle:(BOOL)title;
-(void)_hideName;
-(id)_statusView;
-(void)_updateNavItemTitleView:(BOOL)view;
-(void)_updateCurrentMessages;
-(void)_startUpdatingProgress;
-(void)_refreshNavigationItemView;
-(void)_refreshNavigationItemViewAnimate:(BOOL)animate;
-(BOOL)_calcVals:(BOOL*)vals;
-(void)_finishProgress;
-(id)_title;
-(void)_resetProgress;
-(id)_generateStatusTitle;
-(CGFloat)_generateVal;
@end

