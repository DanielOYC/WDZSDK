//
//  WDZOrganizationViewModel.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZOrganizationNode.h"

@interface WDZOrganizationViewModel : NSObject

/**
 增加组织架构中全选的门店
 */
+ (void)addOrganizedShopListToSelectedShopList:(NSMutableArray *)shoplist;

/**
 移除组织架构门店列表
 */
+ (void)removeOrganizedShopListFromeSelectedShopList:(NSMutableArray *)shoplist;

/**
 设置组织结构门店选择
 */
+ (void)setOrganizedShopSelected:(NSArray *)list;

#pragma mark -------------request-------------------
/**
 检查门店设备
 */
+ (void)checkShopWithShop:(WDZShopModel *)shop Completion:(void (^)(BOOL isSuccessd,NSArray *devices,NSString *errorString))completion;

/**
 根据ID获取每个节点下的信息
 4 5 代表获取的门店的组织机构,其中4是不包括门店和未分组的  5代表获取的有门店的组织架构
 */
+ (void)getOrganizationTreeWithID:(WDZOrganizationNode *)parentNode withType:(NSString *)showType Completion:(void (^)(BOOL isSuccessed,WDZOrganizationNode *node)) completion;

/**
 获取根节点及元素
 */
+ (void)getOrganizationTreeRootNodeCompletion:(void (^)(BOOL isSuccessed, WDZOrganizationNode *node))completion;

/**
 根据组织Id获取所有的门店
 */
+ (void)getAllShopsWithOrganizeId:(NSString *)OrganizeId Completion:(void (^)(BOOL isSuccessed,NSMutableArray *shopList))completion;

@end
