//
//  WDZCacheCenter.h
//  WDZForAppStore
//
//  Created by Hayder on 2017/11/23.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//  缓存中心

#import <Foundation/Foundation.h>

//获取用于接收进入app请求成功的通知名字
#define CACHE_NOTI_NAME(MODULE_NAME) [NSString stringWithFormat:@"WDZ%@UpdateNotification",MODULE_NAME]

@interface WDZCacheCenter : NSObject

+ (instancetype)defaultCenter;

/**
 清空模块名缓存
 */
- (void)clearRegisterPool;

#pragma mark ---------------------数据库模式-----------------------------------------
/**
 1.注册缓存模型名字
 如果数据库中没有缓存  会回调loadDatablock
 loadDataBlock 实现数据请求方法
 isNeed  是否需要启动的时候,没有缓存进行数据请求加载
 */
- (void)registerCacheModuleName:(NSString *) moduleName isNeedLoadWhenLaunching:(BOOL) isNeed loadData:(void (^)(void))loadData;

/**
 app启动时 保存数据
 @param moduleName 模块名
 @param data 数据
 */
- (void)appLaunchingRequestSaveDataWithModuleName:(NSString *)moduleName Data:(NSObject *)data;

/**
 根据名字加载缓存
 @param moduleName 模块名字

 @return 返回缓存数据
 */
- (NSArray *)loadCacheWithModuleName:(NSString *) moduleName;

/**
 根据模块名删除缓存
 @param moduleName 模块名
 */
- (BOOL)deleteCacheWithModuleName:(NSString *)moduleName;
/**
 模块界面请求时 保存 用于下拉刷新保存数据
 @param moduleName 模块名字
 @param data 保存的数据  数据类型为NSArray 或者 NSDictionary
 */
- (void)saveDataWithModuleName:(NSString *)moduleName Data:(NSObject *) data;

/**
 模块界面请求 保存上拉数据数据
 @param moduleName 模块名字
 @param data 保存的数据(服务器原始数据)  数据类型为NSArray 或者 NSDictionary
 @param pageNumber 页数
 */
- (void)saveMoreDataWithModuleName:(NSString *)moduleName Data:(NSObject *)data WithpageNumber:(NSInteger) pageNumber;



@end
