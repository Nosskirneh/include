/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:16 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSMutableArray;

@interface SPSearchResultSection : PBCodable {

	NSString* _category;
	NSString* _displayIdentifier;
	NSUInteger _domain;
	NSInteger _flags;
	NSString* _icon;
	NSMutableArray* _results;
	NSString* _scheme;
	SCD_Struct_SP5 _has;

}

@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) NSUInteger domain;                           //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) NSString * icon;                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayIdentifier; 
@property (nonatomic,retain) NSString * displayIdentifier;              //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                       //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) BOOL hasScheme; 
@property (nonatomic,retain) NSString * scheme;                         //@synthesize scheme=_scheme - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) NSInteger flags;                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                  //@synthesize results=_results - In the implementation block

- (id)scheme;
- (NSUInteger)resultsCount;
- (id)resultsAtIndex:(NSUInteger)arg1;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (BOOL)hasEquivalentResults:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)icon;

@end
