//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface CAMAssetSaver : NSObject
{
    NSMutableDictionary *__inflightAssets;
    NSMutableArray *__pendingImageJobs;
    NSMutableDictionary *__inProgressAvalancheFileDescriptors;
    NSMutableDictionary *__inProgressNebulaFileDescriptors;
    NSMutableArray *__transientStillImageResponses;
}

+ (void)setTakingPhotoIsBusy:(BOOL)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (id)takingPhotoIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (void)resetNebulaCaptureIsBusy;
+ (void)setNebulaCaptureIsBusy:(BOOL)arg1;
+ (id)takingNebulaIndicatorFilePath;
+ (id)sharedAssetSaver;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(CDUnknownBlockType)arg4;
- (void)batchSavePendingAssetJobs;
- (void)queueJobDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(CDUnknownBlockType)arg6;
- (void)_setIsTakingPhoto:(BOOL)arg1;
- (id)_saveIsolationQueue;
- (void)setAvalancheInProgress:(BOOL)arg1 uuid:(id)arg2;
@property(readonly, nonatomic) NSMutableArray *_transientStillImageResponses; // @synthesize _transientStillImageResponses=__transientStillImageResponses;
@property(retain, nonatomic) NSMutableDictionary *_inProgressNebulaFileDescriptors; // @synthesize _inProgressNebulaFileDescriptors=__inProgressNebulaFileDescriptors;
@property(retain, nonatomic) NSMutableDictionary *_inProgressAvalancheFileDescriptors; // @synthesize _inProgressAvalancheFileDescriptors=__inProgressAvalancheFileDescriptors;
@property(retain, nonatomic) NSMutableArray *_pendingImageJobs; // @synthesize _pendingImageJobs=__pendingImageJobs;
- (id)enqueueTransientResponse:(id)arg1 requestEnqueuedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(BOOL)arg4 isSlalom:(BOOL)arg5 videoHandler:(CDUnknownBlockType)arg6 requestEnqueuedBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)saveTimelapseCaptureResponse:(id)arg1 requestEnqueuedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)requestAssetSavingAccess;
- (id)saveStillImageCaptureResponse:(id)arg1 requestEnqueuedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_addInflightAssetWithPath:(id)arg1 thumbnailImage:(id)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4 imageSurface:(struct __IOSurface *)arg5 previewImageSurface:(struct __IOSurface *)arg6 transient:(BOOL)arg7;
@property(readonly, nonatomic) NSMutableDictionary *_inflightAssets; // @synthesize _inflightAssets=__inflightAssets;
- (id)_imageJobForStillImageCaptureResponse:(id)arg1;
- (id)_addInflightAssetWithPath:(id)arg1 withUUID:(id)arg2 avalancheUUID:(id)arg3;
- (id)saveVideoCaptureResponse:(id)arg1 assetUUID:(id)arg2 jobTypeOverride:(id)arg3 requestEnqueuedBlock:(CDUnknownBlockType)arg4;
- (void)setNebulaInProgress:(BOOL)arg1 uuid:(id)arg2;
- (void)resetAllNebulaProgress;
- (void)dropAllTransientResponses;
- (void)saveAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 bestAssetUUIDs:(id)arg3 stackAssetUUID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)saveAllTransientResponses;
- (void).cxx_destruct;
- (id)init;

@end

