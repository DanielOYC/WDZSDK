//
//  DBUtil.h
//  FMDBDemo
//
//  Created by 王振海 on 2017/9/18.
//  Copyright © 2017年 王振海. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FMDB/FMDB.h>

@interface DBManager : NSObject

/**
 数据库对象
 */
@property (nonatomic, strong) FMDatabase *db;

/**
 创建DButil对象
 */
+ (instancetype)sharedInstance;

/**
 打开数据库
 */
- (BOOL)openDatabaseAndTableWithSQL:(NSString *)sql;

/**
 关闭数据库
 */
- (BOOL)close;


@end
