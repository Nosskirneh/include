/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <UIKit/UIPickerView.h>
#import "UIKit-Structs.h"
#import "UIPickerViewDelegate.h"
#import "UIPickerViewDataSource.h"

@class NSTimeZone, NSCalendar, NSDateComponents, UILabel, UIDatePicker, NSDate, NSString, NSLocale;

@interface UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource> {
	int _datePickerMode;
	NSLocale* _locale;
	NSTimeZone* _timeZone;
	NSCalendar* _calendar;
	NSDate* _date;
	NSDate* _minimumDate;
	NSDate* _maximumDate;
	double _countDownDuration;
	int _minuteInterval;
	NSDateComponents* _referenceComponents;
	double _todaySinceReferenceDate;
	NSDateComponents* _todayDateComponents;
	NSString* _amString;
	NSString* _pmString;
	UILabel* _hourLabel;
	UILabel* _minuteLabel;
	UIDatePicker* _datePickerDelegate;
	id _delegateOfDatePicker;
	int _numberOfDaysInCurrentMonth;
	int _expectedAMPM;
	NSDateComponents* _minDateComponents;
	NSDateComponents* _maxDateComponents;
	struct {
		unsigned dateOrder : 2;
		unsigned timeOrder : 2;
		unsigned weekdayOrder : 1;
		unsigned staggerTimeIntervals : 1;
		unsigned loadingDateOrTime : 1;
		unsigned highlightsToday : 1;
		unsigned reserved : 24;
	} _datePickerFlags;
}
@property(assign, nonatomic) int datePickerMode;
@property(retain, nonatomic) NSLocale* locale;
@property(retain, nonatomic) NSTimeZone* timeZone;
@property(copy, nonatomic) NSCalendar* calendar;
@property(copy, nonatomic) NSDate* date;
@property(copy, nonatomic) NSDate* minimumDate;
@property(copy, nonatomic) NSDate* maximumDate;
@property(assign, nonatomic) int minuteInterval;
@property(assign, nonatomic) id delegateOfDatePicker;
@property(assign, nonatomic) double countDownDuration;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(CGFloat)_tableRowHeight;
-(id)pickerImageNamePrefix;
-(int)_incrementForElement:(unsigned)element;
-(void)_doneLoadingDateOrTime;
-(BOOL)_showingDate;
-(int)_numberOfDaysInDate:(id)date;
-(void)_updateReferenceBits;
-(void)_updateBitsForDate:(id)date andReload:(BOOL)reload animateIfNeeded:(BOOL)needed;
-(void)setDate:(id)date animated:(BOOL)animated;
-(int)hour;
-(int)minute;
-(int)second;
-(id)_datePickerCellFont;
-(id)_ampmCellFont;
-(id)_hrMinFont;
-(int)_numberOfDaysInWeek;
-(unsigned)_elementForColumn:(int)column;
-(int)_columnForElement:(unsigned)element;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(void)setStaggerTimeIntervals:(BOOL)intervals;
-(int)_incrementedAmountForValue:(int)value withElement:(unsigned)element;
-(void)scrollerDidScroll:(id)scroller;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(void)_updateRowInColumn:(int)column toValue:(int)value withRepeatingAmount:(int)repeatingAmount element:(unsigned)element animated:(BOOL)animated;
-(void)_loadDateAnimated:(BOOL)animated;
-(void)pickerViewLoaded:(id)loaded;
-(void)_loadDesignatorStrings;
-(void)setDelegate:(id)delegate;
-(int)_selectedHourForColumn:(int)column;
-(int)_selectedMinuteForColumn:(int)column;
-(int)_minuteForRow:(int)row;
-(int)_secondForRow:(int)row;
-(void)_setDateComponent:(id)component withElement:(unsigned)element;
-(BOOL)_updateDateOrTime;
-(id)_fadeLabel:(id)label toNewLabelWithString:(id)string ifAnimated:(BOOL)animated;
-(id)_minutesString;
-(id)_hoursString;
-(void)_updateLabels:(BOOL)labels;
-(void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;
-(int)_dayForRow:(int)row;
-(int)_hourForRow:(int)row;
-(BOOL)_shouldEnableDayForRow:(int)row column:(int)column;
-(BOOL)_shouldEnableMonthForRow:(int)row column:(int)column;
-(BOOL)_scrollingAnyColumnExcept:(int)except;
-(BOOL)_shouldEnableMinuteForValue:(int)value column:(int)column;
-(BOOL)_shouldEnableHourForValue:(int)value column:(int)column;
-(BOOL)_shouldEnableYearForRow:(int)row;
-(BOOL)_shouldEnableWeekMonthDayForCell:(id)cell;
-(void)scrollerWillStartDragging:(id)scroller;
-(void)_updateEnabledCells:(BOOL)cells;
-(id)_todayTextColor;
-(void)_ensureTodayIsSet;
-(int)_monthForRow:(int)row;
-(void)_setupCell:(id)cell atRow:(int)row inColumn:(int)column withElementFlag:(unsigned)elementFlag;
-(void)setHighlightsToday:(BOOL)today;
-(id)dateComponents;
-(void)setDateComponents:(id)components;
-(CGFloat)pickerView:(id)view rowHeightForComponent:(int)component;
-(CGFloat)pickerView:(id)view widthForComponent:(int)component;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(id)shadowColor;
-(id)_createAccessoryViewWithText:(id)text andFont:(id)font;
-(id)_createLabelWithString:(id)string above:(id)above;
-(void)pickerView:(id)view createdTable:(id)table forColumn:(int)column;
@end

