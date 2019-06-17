//
//  WDZBaseViewController.h
//  WDZStore
//
//  Created by 郑来贤 on 14-4-6.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZBaseViewController : UIViewController

/**
    给viewcontroller 添加appdelegate属性，子类可以直接使用appdelegate 属性
 */
//@property (strong , nonatomic,readonly) WDZAppDelegate *appDelegate;

/**
    界面是否需要刷新
 */
@property (assign , nonatomic) BOOL needReload;

/**
 给viewcontroller 添加appdelegate属性，子类可以直接使用appdelegate 属性 , 默认是NO
 */
@property (assign , nonatomic) BOOL hiddenCustomBottomBarWhenPush;

- (void)setStatusBarHidden:(BOOL)hidden;

/**
    给viewcontroller添加app状态变化的响应函数，具体实现有子类去完成
 */
- (void)applicationWillEnterForeground;

/**
 给viewcontroller添加app状态变化的响应函数，具体实现有子类去完成
 */
- (void)applicationDidEnterBackground;
/**
 给viewcontroller添加app状态变化的响应函数，具体实现有子类去完成
 */
- (void)applicationDidBecomeActive;

/**
 给viewcontroller添加app状态变化的响应函数，具体实现有子类去完成
 */
- (void)applicationWillResignActive;

//获取version
- (NSString *)getVersion;

@end
