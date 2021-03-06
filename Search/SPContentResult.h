/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:16 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPSearchResult.h>

@class NSString;

@interface SPContentResult : SPSearchResult {

	NSString* _extid;
	NSString* _content;

}

@property (nonatomic,retain) NSString * extid;                //@synthesize extid=_extid - In the implementation block
@property (nonatomic,retain) NSString * content;              //@synthesize content=_content - In the implementation block
+(id)resultWithRecord:(id)arg1 ;
+(id)resultWithRecord:(id)arg1 domain:(unsigned)arg2 displayIdentifier:(id)arg3 query:(id)arg4 ;
+(id)resultWithSearchResult:(id)arg1 identifier:(id)arg2 searchableContent:(id)arg3 ;
+(id)resultWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 summary:(id)arg4 auxiliaryTitle:(id)arg5 auxiliarySubtitle:(id)arg6 actionURL:(id)arg7 searchableContent:(id)arg8 ;
-(void)dealloc;
-(id)content;
-(void)setExtid:(id)arg1 ;
-(id)extid;
-(void)setContent:(id)arg1 ;
@end

