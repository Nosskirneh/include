/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSInputStream.h"

@class NSArray, NSMutableData;

@interface PLDataArrayInputStream : NSInputStream
{
    NSArray *_dataArray;
    NSMutableData *_bodyData;
    unsigned long long _dataCount;
    unsigned long long _dataLength;
    unsigned long long _dataOffset;
    unsigned long long _currentIndex;
    unsigned long long _currentOffset;
    unsigned long long _currentLength;
    _Bool _openEventSent;
    unsigned long long _streamStatus;
    id _delegate;
    id <PLDataArrayInputStreamProgressDelegate> _progressDelegate;
    struct __CFRunLoopSource *_rls;
    void *_clientCallback;
    CDStruct_4210025a _clientContext;
}

@property(nonatomic) id <PLDataArrayInputStreamProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (_Bool)getBuffer:(char **)arg1 length:(unsigned long long *)arg2;
- (_Bool)hasBytesAvailable;
- (unsigned long long)bytesRead;
- (unsigned long long)totalBytes;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)_scheduleProgressUpdate;
- (void)_updateProgress;
- (unsigned long long)streamStatus;
- (id)streamError;
- (void)close;
- (void)open;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (_Bool)_setCFClientFlags:(unsigned long long)arg1 callback:(void *)arg2 context:(CDStruct_4210025a *)arg3;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop *)arg1 forMode:(struct __CFString *)arg2;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithDataArray:(id)arg1;

@end
