//
//  WDZShopDAO.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/20.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZShopModel.h"

@interface WDZShopDAO : NSObject

/**
 删除表中所有的数据
 */
+ (void)deleteAllShopList;

/**
 获取所有门店
 */
+ (NSArray *)getShopList;

/**
 添加
 */
+ (void)addShopDomain:(WDZShopModel *)shop;

/**
 插入门店列表
 */
+ (BOOL)addShoplist:(NSArray<WDZShopModel *> *) shoplist;


/**
 修改shopdomain对应的门店
 */
+ (BOOL)updateShopDicWithShopDomain:(WDZShopModel *)shop;


/**
 更新门店列表数据
 */
+ (BOOL)updateShopList:(NSArray<WDZShopModel *> *) shoplist;


/**
 根据门店id数据获取门店信息
 */
+ (WDZShopModel *)getShopByID:(NSString *)ID;

/**
 根据id数组获取门店数组
 */
+ (NSArray<WDZShopModel *>*)getShpsByIDs:(NSArray <NSString *>*)IDs;

/**
 根据地区搜索数据库
 */
+ (NSArray *)getShopListSql:(NSString *)sql;

@end
