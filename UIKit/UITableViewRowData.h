/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCopying.h"
#import "UITableViewRowData.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class UITableView, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UITableViewRowData : NSObject <NSCopying> {
	UITableView* _tableView;
	int _numSections;
	int _sectionRowDataCapacity;
	UISectionRowData** _sectionRowData;
	CGFloat _minimumRowHeight;
	CGFloat _tableViewWidth;
	CGFloat _tableHeaderHeight;
	CGFloat _tableFooterHeight;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
	CGFloat _tableTopPadding;
	CGFloat _tableBottomPadding;
#endif
	NSIndexPath* _reorderedIndexPath;
	CGFloat _reorderedRowHeight;
}
@property(assign, nonatomic) CGFloat minimumRowHeight;
-(id)initWithTableView:(id)tableView;
-(void)tableViewWidthDidChangeToWidth:(CGFloat)tableViewWidth;
-(void)tableHeaderHeightDidChangeToHeight:(CGFloat)tableHeaderHeight;
-(void)tableFooterHeightDidChangeToHeight:(CGFloat)tableFooterHeight;
// inherited: -(void)dealloc;
-(void)ensureAllSectionsAreValid;
-(void)invalidateAllSections;
-(void)invalidateSection:(int)section;
-(void)setReorderedIndexPath:(id)path;
-(id)reorderedIndexPath;
-(id)targetIndexPathForPoint:(CGPoint)point;
-(void)moveRowAtIndexPathFrom:(id)from toIndexPath:(id)indexPath;
-(void)addReorderGapFromIndexPath:(id)indexPath;
-(void)removeReorderGapFromIndexPath:(id)indexPath;
-(int)numberOfSections;
-(int)numberOfRowsInSection:(int)section;
-(int)numberOfRowsBeforeSection:(int)rowsBeforeSection;
-(int)numberOfRows;
-(BOOL)hasHeaderForSection:(int)section;
-(BOOL)hasFooterForSection:(int)section;
-(CGFloat)heightForTableHeaderView;
-(CGFloat)heightForTableFooterView;
-(CGFloat)heightForSection:(int)section;
-(CGFloat)heightForHeaderInSection:(int)section;
-(CGFloat)heightForFooterInSection:(int)section;
-(CGFloat)heightForRow:(int)row inSection:(int)section;
-(int)sectionLocationForRow:(int)row inSection:(int)section;
-(int)sectionLocationForReorderedRow:(int)reorderedRow inSection:(int)section;
-(CGRect)rectForTableHeaderView;
-(CGRect)rectForTableFooterView;
-(CGRect)rectForTable;
-(CGRect)rectForSection:(int)section;
-(CGRect)rectForHeaderInSection:(int)section;
-(CGRect)CGFloatingRectForHeaderInSection:(int)section visibleRect:(CGRect)rect;
-(CGRect)rectForFooterInSection:(int)section;
-(CGFloat)heightForTable;
-(CGRect)CGFloatingRectForFooterInSection:(int)section visibleRect:(CGRect)rect;
-(CGRect)rectForRow:(int)row inSection:(int)section;
-(CGRect)rectForGlobalRow:(int)globalRow;
-(id)indexPathsForRowsInRect:(CGRect)rect;
-(NSRange)globalRowsInRect:(CGRect)rect;
-(int)globalRowForRowAtIndexPath:(id)indexPath;
-(id)indexPathForRowAtGlobalRow:(int)globalRow;
// in a protocol: -(id)copyWithZone:(NSZone*)zone;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(assign, nonatomic) CGFloat tableTopPadding;
@property(assign, nonatomic) CGFloat tableBottomPadding;
-(int)headerAlignmentForSection:(int)section;
-(void)setHeaderAlignment:(int)alignment forSection:(int)section;
-(int)footerAlignmentForSection:(int)section;
-(void)setFooterAlignment:(int)alignment forSection:(int)section;
-(CGFloat)maxHeaderTitleWidthForSection:(int)section;
-(CGFloat)maxFooterTitleWidthForSection:(int)section;
// inherited: -(id)description;
#endif
@end

@interface UITableViewRowData (UITableViewRowDataPrivate)
-(void)_updateNumSections;
-(void)_updateSectionRowDataArrayForNumSections:(int)numSections;
-(void)_ensureSectionOffsetIsValidForSection:(int)section;
@end

