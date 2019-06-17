//
//  WDZChangeLanguage.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/1.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZChangeLanguage : NSObject

@property (nonatomic, assign) BOOL isUserLocalBundle;

+ (instancetype)sharedInstance;

+(NSBundle *)bundle;//获取当前资源文件

+(void)initUserLanguage;//初始化语言文件

+(NSString *)userLanguage;//获取应用当前语言

+(void)setUserlanguage:(NSString *)language;//设置当前语言

#pragma mark -------------业务逻辑方法-------------------
+(NSString *)showUserLanguage;//获取应用当前语言

+ (BOOL)isEnglish;


@end
