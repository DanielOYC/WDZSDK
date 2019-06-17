//
//  WDZNUserListService.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/19.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZUserModel.h"

@interface WDZNUserListService : NSObject

/**
 从缓存中获取全部联系人
 */
+(NSMutableArray *)getUsersFromCache;



/**
 删除数组中的自己
 */
+(NSMutableArray *)getUserListWithOutSelfWithArray:(NSArray *)dataArray;
/**
 传入数组进行排序
 @param key 进行排序的Key值
 */
+(NSMutableArray *)getListWithArray:(NSArray *)array;

//取消searchbar背景色
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

/**
 筛选出自己
 */
+ (NSArray *)getUsersWithOutSelfWithArray:(NSArray *)dataSource;


/**
 获取所有的数据,并去重
 */
+(NSMutableArray *)getAllUsersWithNoKeysWithArray:(NSArray *)keyArray;

/**
 创建全部UserModel
 */
+(WDZUserModel *)getAllUserModel;

/**
 根据搜索内容获取搜索内容
 */
+(NSArray *)getUsersWithSearchText:(NSString *)searText WithAllDataArray:(NSArray *)dataSource;

@end
