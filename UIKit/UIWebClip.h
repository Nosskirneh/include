/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class NSMutableData, NSURLConnection, NSString, UIImage, NSURL;

@interface UIWebClip : NSObject {
	NSString* identifier;
	NSURL* pageURL;
	NSURL* precomposedIconURL;
	NSURL* iconURL;
	NSURL* startupImageURL;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	NSURL* startupLandscapeImageURL;
#endif
	NSString* title;
	CGFloat scale;
	CGPoint scrollPoint;
	BOOL fullScreen;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	BOOL classicMode;
#endif
	BOOL removalDisallowed;
	int statusBarStyle;
	UIImage* iconImage;
	UIImage* startupImage;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	UIImage* startupLandscapeImage;
#endif
	id delegate;
@private
	NSMutableData* _customIconData;
	NSURLConnection* _iconConnection;
	NSMutableData* _customStartupImageData;
	NSURLConnection* _startupImageConnection;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	NSMutableData* _customStartupLandscapeImageData;
	NSURLConnection* _startupLandscapeImageConnection;
#endif
}
@property(copy) NSString* identifier;
@property(retain) NSURL* pageURL;
@property(retain) NSURL* precomposedIconURL;
@property(retain) NSURL* iconURL;
@property(retain) NSURL* startupImageURL;
@property(copy) NSString* title;
@property(assign) CGFloat scale;
@property(assign) CGPoint scrollPoint;
@property(assign) BOOL fullScreen;
@property(assign) BOOL removalDisallowed;
@property(assign) int statusBarStyle;
@property(retain) UIImage* iconImage;
@property(retain) UIImage* startupImage;
@property(assign) id delegate;
@property(readonly, assign) NSString* iconImagePath;
+(id)webClipWithIdentifier:(id)identifier;
+(id)webClipWithURL:(id)url;
+(id)webClips;
+(id)_contentForMetaName:(id)metaName inWebDocumentView:(id)webDocumentView;
+(int)webClipStatusBarStyleForWebDocumentView:(id)webDocumentView;
+(BOOL)webClipFullScreenValueForWebDocumentView:(id)webDocumentView;
+(id)webClipsDirectoryPath;
+(id)pathForWebClipWithIdentifier:(id)identifier;
+(id)urlForWebClipWithIdentifier:(id)identifier;
-(void)_readPropertiesFromBundle:(CFBundleRef)bundle;
-(id)_info;
-(BOOL)_writeImage:(id)image toDiskWithFileName:(id)fileName;
-(BOOL)updateOnDisk;
-(BOOL)createOnDisk;
-(BOOL)removeFromDisk;
-(id)_initWithIdentifier:(id)identifier;
-(id)_bundleResourceWithName:(id)name;
-(id)_bundleImageWithName:(id)name;
// inherited: -(void)dealloc;
-(void)stopLoadingCustomIcon;
-(void)stopLoadingStartupImage;
-(void)connection:(id)connection didReceiveData:(id)data;
-(id)_displayIdentifierString;
-(void)updateCustomMediaLocationsFromWebDocumentView:(id)webDocumentView;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)requestCustomIconUpdateWithDelegate:(id)delegate;
-(void)requestCustomStartupImageUpdateWithDelegate:(id)delegate;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(retain) NSURL* startupLandscapeImageURL;
@property(assign) BOOL classicMode;
@property(retain) UIImage* startupLandscapeImage;
+(BOOL)webClipClassicModeValueForWebDocumentView:(id)webDocumentView;
-(void)stopLoadingStartupLandscapeImage;
-(void)requestCustomStartupPortraitImageUpdateWithDelegate:(id)delegate;
-(void)requestCustomStartupLandscapeImageUpdateWithDelegate:(id)delegate;
-(id)getStartupImage:(int)image;
-(id)getStartupImage;
#endif
@end

