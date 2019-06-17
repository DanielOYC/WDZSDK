//
//  WDZConfigTool.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/3/7.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZConfigTool : NSObject

//app类型
@property (nonatomic, strong) NSString *AppType;
//是否是appStore的版本
@property (nonatomic, strong) NSDictionary *configMap;

+ (instancetype)shanredInstance;

#pragma mark ---------------------AppType-----------------------------------------
//初始化配置文件工具类
+ (void)initConfigToolApptype:(NSString *)appType ConfigPlist:(NSString *)filePlistPath;
/**
 主题色
 */
+ (UIColor *)getThemeColor;

/**
 是否有导航栏颜色
 */
+ (BOOL)isHaveNavigationColor;
/**
 返回按钮图片
 */
+ (NSString *)getBackNormalImage;

/**
 返回按钮选中图片
 */
+ (NSString *)getBackSelectedImage;

/**
 登录界面
 */
+ (NSString *)passWordImage;
+ (NSString *)userNameImage;
+ (NSString *)logoimage;
+ (BOOL)isExpericence;
+ (BOOL)isRegister;
+ (BOOL)isChangeServer;
+ (NSString *)manageBanner;

/**
 获取Base_URL
 */
+ (NSString *)getHttpURL;

@end
