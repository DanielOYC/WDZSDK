//
//  WDZOrganziationService.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZOrganizationConfigManager.h"

@class WDZOrganizationStructureFrameModel,WDZOrganziationFrameModel,WDZOrganizationFrameModel;
typedef void(^getOrganizerArrBlock)(BOOL isSuccess, NSArray *organizerArray);
typedef void(^getUserListArrBlock)(BOOL isSuccess, NSArray *listArray);

@interface WDZOrganziationService : NSObject

//获取组织架构树相关数据接口
+ (void)getOrganizationWithModel:(WDZOrganizationStructureFrameModel *)organModel withIsQueryAll:(NSString *)isQueryAll withShowType:(NSString *)showType withIsAddDevNode:(NSString *)isAddDevNode withBlock:(getOrganizerArrBlock)block;
//获取获取指定组织架构下的所有用户接口
+ (void)getUsersWithOragnizationModel:(WDZOrganizationStructureFrameModel *)organModel withPageNumber:(int)pageNumber withPageSize:(int)pageSize withBlock:(getUserListArrBlock)block;
/**
 获取组织架构下所有的用户（用于组织架构下的全选状态）
 @param organizeId 组织架构Id
 */
+(void)getUsersInOrganizeWithOrganizeModel:(WDZOrganizationStructureFrameModel *)organModel WithBlock:(getUserListArrBlock)block;
/**
 删除数组中的自己
 */
+(NSMutableArray *)getUserListWithOutSelfWithArray:(NSArray *)dataArray;

/**
 创建全部UserModel
 */
+(WDZUserModel *)getAllUserModel;

+(NSArray *)handleOrganizationRepeatDatas:(NSMutableArray *)datas;
@end
