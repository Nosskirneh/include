/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:08 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSOutputStream;

@interface PBMessageStreamWriter : NSObject {

	NSOutputStream* _stream;

}
-(void)dealloc;
-(id)initWithOutputStream:(id)arg1 ;
-(BOOL)writeMessage:(id)arg1 ;
@end
