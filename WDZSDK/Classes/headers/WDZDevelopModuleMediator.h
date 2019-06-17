//
//  WDZDevelopModuleMediator.h
//  WDZForAppStore
//
//  Created by Hayder on 2019/5/10.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//  万店掌模块控制器调度中心

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZDevelopModuleMediator : NSObject

#pragma mark ---------------------1.巡店模块----------------------------
/**
 获取代办单模块控制器
 Method: PUSH
 */
+ (UIViewController *)wdz_getBackLogModuleController;

/**
 获取现场巡店控制器
 Method:PUSH
 */
+ (UIViewController *)wdz_getShopModuleControllerByLocation;

/**
 获取远程巡店
 Method: PUSH
 */
+ (UIViewController *)wdz_getShopModuleControllerByRemote;

/**
 摇一摇巡店
 Method:PUSH
 */
+ (UIViewController *)wdz_getShopModuleControllerByShake;
/**
 获取点检中心
 Method: PUSH
 */
+ (UIViewController *)wdz_getCheckCenterModuleController;

/**
 获取点检配置
 Method: PUSH
 */
+ (UIViewController *)wdz_getTaskConfigWebViewController;

@end

NS_ASSUME_NONNULL_END
