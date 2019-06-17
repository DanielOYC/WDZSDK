//
//  WDZNUserListService+Request.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZNUserListService.h"
typedef void(^getNUserListBlock)(BOOL isSuccess,NSDictionary *resultDic);
typedef void(^getNUserListArrBlock)(BOOL isSuccess, NSArray *listArray);
typedef void(^deleteNUserListLabelArrBlock)(BOOL isSuccess, NSString *err);
typedef void(^getNUserListOrganizerArrBlock)(BOOL isSuccess, NSArray *organizerArray);


@interface WDZNUserListService (Request)


/**
 获取常用联系人
 */
-(void)getOftenUsersWithBlock:(getNUserListBlock)block;

/**
 获取全部联系人
 */
-(void)getUsersWithIndexNumWithBlcok:(getNUserListArrBlock)backBlock;

/**
 获取通讯录中的标签列表
 */
+(void)getUserListLabelListWithBlock:(getNUserListArrBlock)block;

/**
 获取标签中的联系人
 */
+(void)getLabelUserListWithLabelId:(NSString *)labelId withBlock:(getNUserListArrBlock)block;

/**
 删除标签
 */
+(void)deleteLabelUserListWithLabelId:(NSString *)labelId WithBlock:(deleteNUserListLabelArrBlock)block;

/**
 //获取组织架构树相关数据接口
 */
+ (void)getOrganizationWithNodeId:(NSString *)nodId withIsQueryAll:(NSString *)isQueryAll withShowType:(NSString *)showType withIsAddDevNode:(NSString *)isAddDevNode withBlock:(getNUserListOrganizerArrBlock)block;

/**
//获取获取指定组织架构下的所有用户接口
 */
+ (void)getUsersWithOragnizationId:(NSString *)organizeId withPageNumber:(int)pageNumber withPageSize:(int)pageSize withBlock:(getNUserListArrBlock)block;

/**
 获取组织架构下所有的用户（用于组织架构下的全选状态）
 @param organizeId 组织架构Id
 */
+(void)getUsersInOrganizeWithOrganizeId:(NSString *)organizeId WithBlock:(getNUserListArrBlock)block;

@end
