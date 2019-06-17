//
//  WDZEventCalendarView.h
//  Test
//
//  Created by Daniel on 2018/11/26.
//  Copyright © 2018年 Daniel. All rights reserved.
//  事件日历展示

#import "WDZCalendarView.h"

@class WDZEventCalendarView;

@protocol WDZEventCalendarViewDataSource <NSObject>

// 指定日期所包含的事件数量
- (NSInteger)eventCalendarView:(WDZEventCalendarView *)eventCalendarView numberOfEventsForDate:(NSDate *)date;

// 指定日期的事件所对应的颜色数组
- (NSArray<UIColor *> *)eventCalendarView:(WDZEventCalendarView *)eventCalendarView eventColorsForDate:(NSDate *)date;

@optional
// 将要滑动到指定的page
- (void)eventCalendarView:(WDZEventCalendarView *)eventCalendarView didChangeToPage:(NSDate *)destinationPage;

@end

@interface WDZEventCalendarView : WDZCalendarView

@property (weak, nonatomic) id <WDZEventCalendarViewDataSource> eventCalendarDatasource;

@end
