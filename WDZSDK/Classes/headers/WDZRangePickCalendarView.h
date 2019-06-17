//
//  WDZRangePickCalendarView.h
//  Test
//
//  Created by Daniel on 2018/11/23.
//  Copyright © 2018年 Daniel. All rights reserved.
//  选择一段时间范围

#import "WDZCalendarView.h"

@interface WDZRangePickCalendarView : WDZCalendarView

// 初始化设置开始时间，结束时间
- (void)setStartDate:(NSDate *)startDate endDate:(NSDate *)endDate;

// 选中的开始时间,可能为空（即什么都没选的时候）,只读
@property (readonly,strong, nonatomic) NSDate *selectedStartDate;

// 选中的结束时间,可能为空(即只选择了开始时间，或者什么都没选的时候)，只读
@property (readonly,strong, nonatomic) NSDate *selectedEndDate;

// 设置滚动到指定日期所在的页面
- (void)setCurrentPage:(NSDate *)currentPage animation:(BOOL)animation;

// 重置,animation标志是否展示滚回当前日期所在页面的动画
- (void)reset:(BOOL)animation;
@end
