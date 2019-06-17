//
//  WDZStatisticsTool.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/7/25.
//  Copyright © 2017年 Hayder. All rights reserved.
//  统计工具类

#import <Foundation/Foundation.h>

@interface WDZStatistics : NSObject
/**
 控制器与ID 映射字典 统计整体
 */
@property (nonatomic, strong) NSMutableDictionary *wholeVcIDMap;

/**
 控制器与ID 映射字典 统计界面
 */
@property (nonatomic, strong) NSMutableDictionary *intefaceVCIDMap;

/**
 统计数据数组
 */
@property (nonatomic, strong) NSMutableArray *statisticData;

/**
 创建单例对象
 */
+ (instancetype)sharedInstance;

#pragma mark ---------------------统计整体模块-----------------------------------------
/**
 控制器出现时候传入控制器名字进行统计
 */
- (void)controllerEnterIntoStatsticsWithController:(NSString *)controllerName;
/**
 控制器消失时候统计
 */
- (void)controllerLeaveStatsticsWithController:(NSString *)controllerName;

/**
 根控制器进入时间统计
 */
- (void)rootControllerEnterIntoStaticsWithController:(NSString *)controllerName;

/**
 根控制器离开时间统计
 */
- (void)rootControllerLeaveStaticsWithController:(NSString *)controllerName;

#pragma mark ---------------------统计部分模块-----------------------------------------
/**
 统计的模块控制器出现在界面
 */
- (void)modulesAppearInWindow:(NSString *)controllerName;
/**
 统计的模块控制器出现在界面
 */
- (void)modulesDisAppearInWindow:(NSString *)controllerName;

/**
 加载web端的json字符串
 */
- (void)addWebStatisticsData:(NSString *)jsonStr;
/**
 统计事件点击
 */
- (void)staticModuleEventWithID:(NSString *)moduleID EventId:(NSString *)eventID;

/**
 保存统计数据
 */
+ (BOOL)saveStatisticsData;

/**
 读取统计数据
 */
+ (NSMutableArray *)readStatisticsData;




/**
 上传数据接口
 */
+ (void)uploadOperationLogWithCompletion:(void (^) (BOOL isSuccess)) completion;

@end
