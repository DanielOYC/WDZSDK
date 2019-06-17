//
//  WDZDevelopConfig.h
//  WDZForAppStore
//
//  Created by Hayder on 2019/5/10.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//  万店掌开发包配置

#import <Foundation/Foundation.h>

@interface WDZDevelopConfig : NSObject

+ (instancetype)sharedInstance;

/**默认配置  主题色是橘黄色 导航栏 白色 导航栏 字体大小20 字体颜色 51 */
+ (instancetype)defaultConfig;

#pragma mark ---------------------选择配置----------------------------
/**主题色*/
@property (nonatomic, copy) UIColor *themeColor;
/**返回按钮颜色*/
@property (nonatomic, copy) UIColor *backButtonColor;
/**导航栏  默认为白色*/
@property (nonatomic, copy) UIColor *navigationBarColor;
/**导航栏 字体大小*/
@property (nonatomic, copy) UIFont *navigationTitleFont;
/**导航栏 字颜色*/
@property (nonatomic, copy) UIColor *navigationBarTitleColor;


@end
