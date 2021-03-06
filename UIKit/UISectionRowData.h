/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

__attribute__((visibility("hidden")))
@interface UISectionRowData : NSObject <NSCopying> {
	BOOL _valid;
	CGFloat _headerHeight;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	CGFloat _maxHeaderTitleWidth;
#endif
	CGFloat _footerHeight;
	CGFloat _headerOffset;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	CGFloat _maxFooterTitleWidth;
#endif
	CGFloat _footerOffset;
	int _numRows;
	int _arrayLength;
	CGFloat* _rowHeights;
	CGFloat* _rowOffsets;
	CGFloat _sectionHeight;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	int _headerAlignment;
	int _footerAlignment;
#endif
	BOOL _sectionOffsetValid;
	CGFloat _sectionOffset;
}
-(void)dealloc;
-(void)invalidate;
-(void)invalidateSectionOffset;
-(CGFloat)_headerOrFooterSizeForTable:(id)table title:(id)title isHeader:(BOOL)header;
-(void)addOffset:(CGFloat)offset fromRow:(int)row;
-(void)setHeight:(CGFloat)height forRow:(int)row;
-(CGFloat)_defaultSectionHeaderHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;
-(CGFloat)_defaultSectionFooterHeightForSection:(int)section tableView:(id)view tableViewRowData:(id)data;
-(void)refreshWithSection:(int)section tableView:(id)view tableViewRowData:(id)data;
-(void)insertRowAtIndex:(int)index inSection:(int)section rowHeight:(CGFloat)height tableViewRowData:(id)data;
-(void)deleteRowAtIndex:(int)index;
-(int)sectionLocationForRow:(int)row;
-(int)sectionLocationForReorderedRow:(int)reorderedRow;
-(id)copyWithZone:(NSZone*)zone;
@end

