/*
* This header is generated by classdump-dyld 0.2
* on Sunday, December 29, 2013 at 10:55:04 PM India Standard Time
* Operating System: Version 7.0.4 (Build 11B554a)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>

@protocol UICollectionViewDataSource;
@interface PUCollectionViewIntermediateDataSource : NSObject <UICollectionViewDataSource> {

	<UICollectionViewDataSource>* _realDataSource;

}

@property (assign,nonatomic) <UICollectionViewDataSource> * realDataSource;              //@synthesize realDataSource=_realDataSource - In the implementation block
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)realDataSource;
-(void)setRealDataSource:(id)arg1 ;
@end

