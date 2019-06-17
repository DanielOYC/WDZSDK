//
//  WDZNShopManagerServices.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/5/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//
typedef void(^getShopListArrayBlock)(BOOL isSuccess,NSMutableArray *deviceArray,NSError *error);
typedef void(^getArrayBlock)(BOOL isSuccess,NSMutableArray *returnArray,NSError *error);
typedef void(^getAddress)(NSMutableArray *addressArray,NSString *address,NSString *code);
typedef void(^backBlock)(BOOL isSuccess,NSString *err);
#import <Foundation/Foundation.h>

@interface WDZNShopManagerServices : NSObject

/**
 分页获取企业门店列表

 @param pageNum 分页开始，从1开始
 @param pageSize 分页信息，默认20
 @param enterpriseId 企业id，系统管理员，企业用户可不传
 @param deptName 门店名称过滤
 @param nodeIds 组织架构id O_开头
 @param tagId 标签ID
 */
+(void)getDepartmentsWithPageNum:(NSInteger)pageNum WithPageSize:(NSInteger)pageSize WithEnterpriseId:(NSString *)enterpriseId WithDeptName:(NSString *)deptName WithNodeIds:(NSString *)nodeIds WithTagId:(NSString *)tagId withBlock:(getShopListArrayBlock)block;



+(void)getNewEnterpriseWithTag:(NSString *)tag WithBlock:(getArrayBlock)block;


/**
 创建或者新建门店
 */
+(void)creatOrChangeShopWithParm:(NSMutableDictionary *)parm WithBlock:(backBlock)block;

/**
 删除门店
 */
+(void)deleteShopWithShopModel:(WDZShopModel *)shopModel WithBlock:(backBlock)block;

+(void)getAddressWithCode:(NSString *)code WithBlock:(getAddress)block;


@end
