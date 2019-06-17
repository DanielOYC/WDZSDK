//
//  WDZDeviceData.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/5.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//  获取当前系统数据或者设备数据  如版本号   iPhone型号等

#import <UIKit/UIKit.h>

@interface WDZDeviceAndSystemData : NSObject

#pragma mark -------------系统软件信息-------------------
//获取软件版本
+ (NSString *)appVersion;

//获取时区
+ (NSString *)getTimeZone;
/**
 获取当前的语言
 */
+ (NSString *)getCurrentLanguage;



#pragma mark -------------硬件信息-------------------
/**
 获取手机型号 
 */
+ (NSString *)iphoneType;

/**
 设备的版本型号
 */
+ (NSString *)iphoneSystemVersion;
#pragma mark -------------业务逻辑处理的软硬件信息-------------------
/**
 请求头中所需的语言类型
 */
+ (NSString *)requestHeaderParamLanguage;

/**
 请求头中的设备版本
 */
+ (NSString *)requestHeaderParamDeviceVersion;

/**
保存webView的Version
 */
+ (void)saveWebViewVersion:(NSString *)version;

/**
 获取webView的Version
 */
+ (NSString *)getWebViewVersion;

@end
