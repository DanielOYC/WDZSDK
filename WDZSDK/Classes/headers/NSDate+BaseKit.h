//
//  NSDate+BaseKit.h
//  WDZForAppStore
//
//  Created by 李轩霖 on 2018/10/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (BaseKit)


+(NSTimeInterval)comateTimeStrToTimeInterval:(NSString *)str;

+ (NSString *) compareCurrentTime:(NSString *)str;

/**
 获取每月的第一天和最后一天
 */
+ (NSArray *)getMonthFirstAndLastDayWith:(NSDate *)date;
/**
 比较2个日期 如果没达到指定日期，返回-1，刚好是这一时间，返回0，否则返回1
 */
+ (int)compareOneDay:(NSDate *)oneDay withAnotherDay:(NSDate *)anotherDay;

/**
 获取当前日期前几个月
 */
+ (NSDate *)getPriousorLater:(BOOL)isLater DateFromDate:(NSDate *)date withMonth:(int)month;
/**
 计算直播时长
 */
+ (NSString *)calLiveTimeWithTime:(NSString *)time;

/**
 计算直播课程预约时长
 */
+ (NSString *)calSubscribeTimeWithTime:(NSString *)time;

/** 获取当前的时间 */
+ (NSString *)currentDateString;

+ (NSString *)currentDateStringWithFormat:(NSString *)formatterStr;

/**
 字符串根据时间格式转成date
 */
+ (NSDate *)stringToDate:(NSString *)timeString dateFormat:(NSString *)dateFormat;
/**
 date根据时间格式转成string
 */
+ (NSString *)dateToString:(NSDate *)date dateFormat:(NSString *)dateFormat;
/**
 判断当前时间是否在一个时间段内
 */
+(BOOL)judgeTime:(NSDate *)date ByStartAndEndWithStartTime:(NSString *)startStr endTime:(NSString *)endStr format:(NSString *)formatStr;
/**
 判断起始时间是否大于结束时间
 */
+ (BOOL)isCorrectWithStartTime:(NSString *)startTime EndTime:(NSString *)endTime;

+ (NSString *)convertWithDate:(NSString *)dateTime currentDateformatterString:(NSString *)currentStr covertDateFormatterstring:(NSString *)coverString;
/**
 获取时间串前几秒的时间
 */
+ (NSString *)calculateTimeAnySecondsAgo:(double)second WithConvertTimeStr:(NSString *)timeStr;
/**
 获取时间串后几秒的时间
 */
+ (NSString *)calculateTimeAnySecondsAfter:(double)second WithConvertTimeStr:(NSString *)timeStr;

/**获取上传的*/
+ (NSArray <NSString *>*)getCurrentDateStartAndEndDay;

+ (NSArray *)getWeeksInYear:(NSString *)year;
/**
 获取3年中的周
 */
+ (NSArray *)getWeeksInThreeYeas;
@end
