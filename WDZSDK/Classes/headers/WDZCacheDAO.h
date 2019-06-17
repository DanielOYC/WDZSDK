//
//  WDZCacheDAO.h
//  WDZForAppStore
//
//  Created by Hayder on 2017/11/23.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DBTemplet.h"
#import "DBManager.h"
#import "WDZCacheResultHandle.h"

@interface WDZCacheDAO : NSObject 
/**
 保存
 */
+ (void)save:(NSData *)data WithModuleName:(NSString *)moduleName WithPageNum:(NSNumber *) pageNumber;

/**
 更新
 */
+ (void)update:(NSData *)data WithModuleName:(NSString *)moduleName;

/**
 删除数据库中的数据
 @param tableName 数据库
 */
+ (BOOL)deleteCacheWithModuleName:(NSString *)moduleName;

/**
 获取缓存
 */
+ (NSArray *)getCacheWithModuleName:(NSString *)moduleName;

@end
