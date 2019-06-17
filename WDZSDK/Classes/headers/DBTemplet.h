//
//  DBTemplet.h
//  FMDBDemo
//
//  Created by 王振海 on 2017/9/18.
//  Copyright © 2017年 王振海. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZCacheResultSetHandleDelegate.h"

@interface DBTemplet : NSObject

///**
// 更新数据库 增删改
// */
//+ (BOOL)updateWithSql:(NSString *)sql,...;

/**
 @param sql 查询的sql
 @param handler 处理查询结果
 */
+ (NSArray *)queryWithSql:(NSString *)sql withHandle:(id<WDZCacheResultSetHandleDelegate>) handler;

@end
