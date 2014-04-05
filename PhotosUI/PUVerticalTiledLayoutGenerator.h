/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:06 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTiledLayoutGenerator.h>

@interface PUVerticalTiledLayoutGenerator : PUTiledLayoutGenerator {

	CGPoint _origin;
	SCD_Struct_PU14 _enqueuedCaptionTileInfo;
	BOOL _shouldDisplayCaptionsBelowBatches;
	CGFloat _referenceWidth;

}

@property (assign,nonatomic) CGFloat referenceWidth;                                //@synthesize referenceWidth=_referenceWidth - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayCaptionsBelowBatches;              //@synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches - In the implementation block
-(void)setShouldDisplayCaptionsBelowBatches:(BOOL)arg1 ;
-(BOOL)shouldDisplayCaptionsBelowBatches;
-(void)setReferenceWidth:(CGFloat)arg1 ;
-(void)willParseTiles;
-(void)didParseTiles;
-(BOOL)parseNextTiles;
-(CGFloat)referenceDistanceForMagneticGuidelines;
-(BOOL)_parseTileRequiringFullWidth;
-(BOOL)_parseSpecialSequence;
-(BOOL)_parseSpecialTileTriplet;
-(BOOL)_parseTileTriplet;
-(BOOL)_parseTilePair;
-(BOOL)_parseSingleTile;
-(BOOL)_dequeueCaption;
-(CGFloat)referenceWidth;
-(BOOL)_addRowWithContiguousTiles:(SCD_Struct_PU15*)arg1 count:(int)arg2 ;
-(BOOL)_scanTilePair:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_scanTileTriplet:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_scanTileRequiringFullWidth:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_scanTileRequiringNewRow:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_hasLeftSuboptimalRow;
-(BOOL)_addRowWithTiles:(SCD_Struct_PU15*)arg1 imageFrames:(CGRect*)arg2 count:(int)arg3 ;
-(BOOL)_scanTripletWithLargeLead:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_scanTripletWithRearrangment:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_parseSpecialSubsequenceWithRowRequired:(BOOL)arg1 rowParsed:(BOOL*)arg2 ;
-(BOOL)_scanSpecialSequenceBlock:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_scanSpecialSequenceRow:(SCD_Struct_PU15*)arg1 count:(int*)arg2 ;
-(BOOL)_addSpecialSequenceBlock:(SCD_Struct_PU15*)arg1 ;
-(BOOL)_scanNonPanoramaSequence:(SCD_Struct_PU15*)arg1 count:(int)arg2 ;
-(BOOL)_isAtEndOfRow;
-(BOOL)_hasEnqueuedCaption;
-(void)_enumerateRowFramesWithContiguousTiles:(SCD_Struct_PU15*)arg1 count:(int)arg2 useMagneticGuidelines:(BOOL)arg3 block:(/*^block*/ id)arg4 ;
-(void)_willAddRowWithFirstTileInfo:(SCD_Struct_PU15)arg1 ;
-(void)_enqueueCaptionWithTileInfo:(SCD_Struct_PU15)arg1 ;
@end

