//
//  NSString+keda.h
//  WDZStore
//
//  Created by 郑来贤 on 14-4-25.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface NSString (keda)

// 判断密码强度
//声明：包含大写/小写/数字/特殊字符
//
//两种以下密码强度低
//
//两种密码强度中
//
//大于两种密码强度高
//
//密码强度标准根据需要随时调整
+ (NSString*) judgePasswordStrength:(NSString*) _password;

// 是否包含特殊字符串
-(BOOL)stringContainsSpecialCharacter;
/**
 日期转为字符串

 @param NSString 传入日期
 @return 返回字符串
 */
- (NSString *)dateConvertToStringWithDate:(NSDate *)_date;

/**
 字符串转日期

 @param _dateFormatter 字符串
 @return 返回日期
 */
- (NSDate *)convertToDatewithDateFormatter:(NSString *)_dateFormatter;

/**
 获取字符串格式的时间戳

 @return 时间戳
 */
+ (NSString *)getNowDateTimestamp;


/**
 *  返回字符串所占用的尺寸
 *
 *  @param font    字体
 *  @param maxSize 最大尺寸
 */
- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;

/**
 计算待办单点检问题字符尺寸
 */
- (CGSize)checkMenuSizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;

+ (NSString *)convertTimeWithSecond:(NSTimeInterval)second;

+ (NSString *)getEncodeUrl:(NSString *)url;

/**
 新待办单
 */
+ (BOOL)compareWithString:(NSString *)string OtherString:(NSString *)otherStr;

/**
 汉字转拼音

 @param chinese 汉字字符串
 @return 拼音
 */
+ (NSString *)uppercaseSpellingWithChineseCharacters:(NSString *)chinese;

/**
 小写
 */
+ (NSString *)lowercaseSpellingWithChineseCharacters:(NSString *)chinese;

/**
 判断字符串是否为空

 @param str 字符串
 */
+ (BOOL)hasLengthWithStr:(NSString *)str;

/**
 单个文件大小

 @param filePath 文件地址
 @return 文件大小
 */
+ (long long) fileSizeAtPath:(NSString*) filePath;

/**
 文件夹大小

 @param folderPath 文件夹地址
 @return
 */
+ (float ) folderSizeAtPath:(NSString*) folderPath;




#pragma mark - lxl添加


-(NSString *)edit;

/**
 判断是否是 email
 */
-(BOOL)checkEmail;

/**
 判断是否是身份证号
 */
- (BOOL)checkCard;

/**
 判断是否是手机号
 */
- (BOOL)checkPhone;


/**
 获取拼音首字母
 */
- (NSString *)firstCharactor;


/**
 判断字符串中是否有 emoji
 */
-(BOOL)stringContainsEmoji;

+ (BOOL)stringContainsEmoji:(NSString *)string;

/**
 文件大小
 
 @return 文件大小字符串 (0.1K/1.1M)
 */
- (NSString *)getFileSize;

/**
 文件类型
 
 @return 文件类型字符串 (audio,ppt 等)
 */
- (NSString *)getMimetype;


/**
 文件类型全称
 
 @return 文件类型字符串
 */
- (NSString *)getAllMimetype;

/**
 计算文字宽度
 */
- (CGFloat)getWidthWithfont:(UIFont *)font height:(CGFloat)height;

/**
 去掉最后一个 , (逗号)
 */
-(NSString *)deleteLastComma;

/**
 判断两个字符串是否相等
 */
+ (BOOL)compareString:(NSString *)str1 string2:(NSString *)str2;



/**
 获取上周日期
 
 @return  yyyy/MM/dd-MM/dd
 */
+ (NSString *)getLastWeeksTime;

/**
 获取本周日期
 
 @return  yyyy/MM/dd-MM/dd
 */
+ (NSString *)getWeekTime;

/**
 获取本月日期
 
 @return  yyyy/MM/dd-MM/dd
 */
+ (NSString *)getMonthStr;

/**
 获取上月日期
 
 @return  yyyy/MM/dd-MM/dd
 */
+ (NSString *)getLastMonthStr;

- (NSUInteger)unicodeLengthOfString;

/**
 随机生成不同的0-9a-z的六位数
 
 @return 生成的验证码
 */
+ (NSString *)shuffledAlphabet;

/**
 获取当前时间
 */
+ (NSString *)getNowTimeTimestamp;

/**
 工作圈区分标题
 */
-(BOOL)isWorkWorldHeader;

/**
 字符串是否为空

 @param string <#string description#>
 @return YES为空   NO不为空
 */
+ (BOOL)stringIsNull:(NSString *)string;

@end
