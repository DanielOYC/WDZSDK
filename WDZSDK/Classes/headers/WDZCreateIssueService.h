//
//  WDZCreateIssueService.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/7/23.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModelHeader.h"
#import <AFNetworking/AFHTTPSessionManager.h>

@class WDZCreateIssueModel,WDZPickerModel;

@interface WDZCreateIssueService : NSObject

/**
 创建问题

 @param model 创建问题的模型
 @param successBlock 成功回调
 @param failBlock 失败回调
 */
+ (void)createIssueWithModel:(WDZCreateIssueModel *)model WithTempId:(NSString *)tempId successBlock:(void (^)(void))successBlock failBlock:(void (^)(NSError *error))failBlock;

/**
 根据图片ID获取门店信息

 @param picID 图片ID
 @param successBlock 成功回调
 @param failBlock 失败回调
 */
+ (void)getPicInfoWithPicId:(NSString *)picID successBlock:(void (^)(WDZShopModel *shopModel,WDZVideoModel *videoModel))successBlock failBlock:(void (^)(NSError *error))failBlock;

/**
 获取门店店长

 @param shopID 门店ID
 */
+ (void)getShopManagerWithShopID:(NSString *)shopID successBlock:(void (^)(WDZUserModel *shopManagerModel))successBlock failBlock:(void (^)(NSError *error))failBlock;


/**
 根据模板获取点检项(大)
 */
+(void)getParentViewShopWithTempId:(NSString *)tempId withBlock:(void (^)(BOOL isSuccess,NSArray *resultArray,NSError *error))block;

/**
 查询检查项模板
 */
+(void)getCheckTempLatesAppWithpageNumber:(NSInteger)pageNumber withPageSize:(NSInteger)pageSize withBlock:(void (^)(BOOL isSuccess, NSDictionary *resultDic, NSError *error))block;

+ (AFHTTPSessionManager *)getMainItemsWithEnterpriseID:(id)enterpriseID success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

#pragma mark - 根据考评大项id获取考评项集合
+ (AFHTTPSessionManager *)getSubItemsWithMainItemID:(id)mainItemID success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 根据考评小项id获取考评细则
+ (AFHTTPSessionManager *)getDetailedRulesWithSubItemID:(id)subItemID success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;
@end
