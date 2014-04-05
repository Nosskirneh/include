/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:05 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PUTransitionViewAnimatorDelegate;
#import <PhotosUI/PhotosUI-Structs.h>
@class UIView, CADisplayLink, PUValueFilter;

@interface PUTransitionViewAnimator : NSObject {

	struct {
		unsigned respondsToDidUpdate : 1;
		unsigned respondsToWillEnd : 1;
		unsigned respondsToDidEnd : 1;
	}  _delegateFlags;
	BOOL _autoUpdates;
	BOOL _shouldFinish;
	BOOL _shouldUseTargetAspectRatio;
	BOOL __isAutoUpdating;
	BOOL __isEnding;
	unsigned _direction;
	<PUTransitionViewAnimatorDelegate>* _delegate;
	CGFloat _progress;
	CGFloat _unfilteredProgress;
	UIView* _view;
	CGFloat __desiredRotation;
	CGFloat __desiredScale;
	CGFloat __desiredSizeMixFactor;
	CGFloat __currentRotation;
	CGFloat __currentScale;
	CGFloat __currentSizeMixFactor;
	CGFloat __targetScale;
	CADisplayLink* __autoUpdateDisplayLink;
	PUValueFilter* __rampUpFilter;
	PUValueFilter* __progressFilter;
	PUValueFilter* __shouldFinishFilter;
	CGPoint _currentTranslation;
	CGPoint _anchorPoint;
	double _rampUpDuration;
	CGPoint __desiredTranslation;
	CGRect _sourceFrame;
	CGRect _targetFrame;
	CGRect __targetAspectRatioSourceFrame;

}

@property (assign,nonatomic) BOOL autoUpdates;                                                                           //@synthesize autoUpdates=_autoUpdates - In the implementation block
@property (assign,nonatomic) unsigned direction;                                                                         //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic,__weak) <PUTransitionViewAnimatorDelegate> * delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGFloat progress;                                                                             //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) CGFloat unfilteredProgress;                                                                   //@synthesize unfilteredProgress=_unfilteredProgress - In the implementation block
@property (assign,nonatomic) BOOL shouldFinish;                                                                          //@synthesize shouldFinish=_shouldFinish - In the implementation block
@property (assign,nonatomic) CGPoint currentTranslation;                                                                 //@synthesize currentTranslation=_currentTranslation - In the implementation block
@property (setter=_setView:,nonatomic,retain) UIView * view;                                                             //@synthesize view=_view - In the implementation block
@property (assign,setter=_setSourceFrame:,nonatomic) CGRect sourceFrame;                                                 //@synthesize sourceFrame=_sourceFrame - In the implementation block
@property (assign,setter=_setTargetFrame:,nonatomic) CGRect targetFrame;                                                 //@synthesize targetFrame=_targetFrame - In the implementation block
@property (assign,setter=_setAnchorPoint:,nonatomic) CGPoint anchorPoint;                                                //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,setter=_setShouldUseTargetAspectRatio:,nonatomic) BOOL shouldUseTargetAspectRatio;                     //@synthesize shouldUseTargetAspectRatio=_shouldUseTargetAspectRatio - In the implementation block
@property (assign,setter=_setRampUpDuration:,nonatomic) double rampUpDuration;                                           //@synthesize rampUpDuration=_rampUpDuration - In the implementation block
@property (assign,setter=_setDesiredTranslation:,nonatomic) CGPoint _desiredTranslation;                                 //@synthesize _desiredTranslation=__desiredTranslation - In the implementation block
@property (assign,setter=_setDesiredRotation:,nonatomic) CGFloat _desiredRotation;                                         //@synthesize _desiredRotation=__desiredRotation - In the implementation block
@property (assign,setter=_setDesiredScale:,nonatomic) CGFloat _desiredScale;                                               //@synthesize _desiredScale=__desiredScale - In the implementation block
@property (assign,setter=_setDesiredSizeMixFactor:,nonatomic) CGFloat _desiredSizeMixFactor;                               //@synthesize _desiredSizeMixFactor=__desiredSizeMixFactor - In the implementation block
@property (assign,setter=_setCurrentRotation:,nonatomic) CGFloat _currentRotation;                                         //@synthesize _currentRotation=__currentRotation - In the implementation block
@property (assign,setter=_setCurrentScale:,nonatomic) CGFloat _currentScale;                                               //@synthesize _currentScale=__currentScale - In the implementation block
@property (assign,setter=_setCurrentSizeMixFactor:,nonatomic) CGFloat _currentSizeMixFactor;                               //@synthesize _currentSizeMixFactor=__currentSizeMixFactor - In the implementation block
@property (assign,setter=_setTargetAspectRatioSourceFrame:,nonatomic) CGRect _targetAspectRatioSourceFrame;              //@synthesize _targetAspectRatioSourceFrame=__targetAspectRatioSourceFrame - In the implementation block
@property (assign,setter=_setTargetScale:,nonatomic) CGFloat _targetScale;                                                 //@synthesize _targetScale=__targetScale - In the implementation block
@property (assign,setter=_setAutoUpdating:,nonatomic) BOOL _isAutoUpdating;                                              //@synthesize _isAutoUpdating=__isAutoUpdating - In the implementation block
@property (setter=_setAutoUpdateDisplayLink:,nonatomic,retain) CADisplayLink * _autoUpdateDisplayLink;                   //@synthesize _autoUpdateDisplayLink=__autoUpdateDisplayLink - In the implementation block
@property (setter=_setRampUpFilter:,nonatomic,retain) PUValueFilter * _rampUpFilter;                                     //@synthesize _rampUpFilter=__rampUpFilter - In the implementation block
@property (setter=_setProgressFilter:,nonatomic,retain) PUValueFilter * _progressFilter;                                 //@synthesize _progressFilter=__progressFilter - In the implementation block
@property (setter=_setShouldFinishFilter:,nonatomic,retain) PUValueFilter * _shouldFinishFilter;                         //@synthesize _shouldFinishFilter=__shouldFinishFilter - In the implementation block
@property (assign,setter=_setEnding:,nonatomic) BOOL _isEnding;                                                          //@synthesize _isEnding=__isEnding - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)view;
-(CGPoint)anchorPoint;
-(unsigned)direction;
-(void)_update;
-(void)_setProgress:(CGFloat)arg1 ;
-(CGFloat)progress;
-(CGRect)targetFrame;
-(id)initWithView:(id)arg1 sourceFrame:(CGRect)arg2 targetFrame:(CGRect)arg3 anchorPoint:(CGPoint)arg4 shouldUseTargetAspectRatio:(BOOL)arg5 rampUpDuration:(double)arg6 direction:(unsigned)arg7 ;
-(void)setAutoUpdates:(BOOL)arg1 ;
-(void)updateWithTranslation:(CGPoint)arg1 rotation:(CGFloat)arg2 scale:(CGFloat)arg3 ;
-(void)cancelWithoutAnimation;
-(BOOL)shouldFinish;
-(void)finishWithTranslationVelocity:(CGPoint)arg1 rotationVelocity:(CGFloat)arg2 scaleVelocity:(CGFloat)arg3 shouldBounce:(BOOL)arg4 ;
-(void)cancelWithTranslationVelocity:(CGPoint)arg1 rotationVelocity:(CGFloat)arg2 scaleVelocity:(CGFloat)arg3 shouldBounce:(BOOL)arg4 ;
-(CGFloat)unfilteredProgress;
-(CGPoint)currentTranslation;
-(void)_setView:(id)arg1 ;
-(void)_setSourceFrame:(CGRect)arg1 ;
-(void)_setTargetFrame:(CGRect)arg1 ;
-(void)_setAnchorPoint:(CGPoint)arg1 ;
-(void)_setShouldUseTargetAspectRatio:(BOOL)arg1 ;
-(void)_setRampUpDuration:(double)arg1 ;
-(void)_setDirection:(unsigned)arg1 ;
-(void)_setCurrentScale:(CGFloat)arg1 ;
-(void)_setShouldFinish:(BOOL)arg1 ;
-(void)_setDesiredSizeMixFactor:(CGFloat)arg1 ;
-(void)_setTargetAspectRatioSourceFrame:(CGRect)arg1 ;
-(void)_setTargetScale:(CGFloat)arg1 ;
-(void)_setRampUpFilter:(id)arg1 ;
-(void)_setProgressFilter:(id)arg1 ;
-(void)_setShouldFinishFilter:(id)arg1 ;
-(BOOL)_isEnding;
-(void)_setDesiredTranslation:(CGPoint)arg1 ;
-(void)_setDesiredRotation:(CGFloat)arg1 ;
-(void)_setDesiredScale:(CGFloat)arg1 ;
-(BOOL)_isAutoUpdating;
-(void)_endWithTranslationVelocity:(CGPoint)arg1 rotationVelocity:(CGFloat)arg2 scaleVelocity:(CGFloat)arg3 shouldBounce:(BOOL)arg4 finish:(BOOL)arg5 animated:(BOOL)arg6 ;
-(CGPoint)_desiredTranslation;
-(CGFloat)_desiredRotation;
-(CGFloat)_desiredScale;
-(CGFloat)_desiredSizeMixFactor;
-(id)_rampUpFilter;
-(void)_setCurrentTranslation:(CGPoint)arg1 ;
-(void)_setCurrentRotation:(CGFloat)arg1 ;
-(void)_setCurrentSizeMixFactor:(CGFloat)arg1 ;
-(CGRect)sourceFrame;
-(CGRect)_targetAspectRatioSourceFrame;
-(CGFloat)_targetScale;
-(id)_progressFilter;
-(void)_setUnfilteredProgress:(CGFloat)arg1 ;
-(id)_shouldFinishFilter;
-(BOOL)autoUpdates;
-(void)_setAutoUpdating:(BOOL)arg1 ;
-(void)_updateAutoUpdateDisplayLink;
-(id)_autoUpdateDisplayLink;
-(void)_autoUpdate:(id)arg1 ;
-(void)_setAutoUpdateDisplayLink:(id)arg1 ;
-(void)_setEnding:(BOOL)arg1 ;
-(CGFloat)_currentRotation;
-(CGFloat)_currentScale;
-(CGFloat)_currentSizeMixFactor;
-(BOOL)shouldUseTargetAspectRatio;
-(double)rampUpDuration;
-(void).cxx_destruct;
@end

