//
//  NetworkManager.h
//  LaiYiFen
//
//  Created by ovopark_iOS on 15/10/30.
//  Copyright © 2015年 ovopark_iOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

typedef NS_ENUM(NSInteger, CheckShopType) {
    CheckShopTypeOnsite = 0, // 现场巡店
    CheckShopTypeVideo = 1, // 视频巡店
};


@interface NetworkManager : NSObject


// 获取用户门店行政范围
+ (void)getUserShopAddressWithFlag:(NSString *)flag parentCode:(NSString *)parentCode success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 获取门店列表
+ (AFHTTPSessionManager *)getAllShopsListWithZipCode:(NSString *)zipCode typeString:(NSString *)typeString containDevice:(BOOL)containDevice success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;


// 获取企业的考评大项
+ (AFHTTPSessionManager *)getMainItemsWithEnterpriseID:(id)enterpriseID success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 根据考评大项id获取考评项集合
+ (AFHTTPSessionManager *)getSubItemsWithMainItemID:(id)mainItemID success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 根据考评小项id获取考评细则
+ (AFHTTPSessionManager *)getDetailedRulesWithSubItemID:(id)subItemID success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;


// 巡店接口

// 获取附近门店
+ (AFHTTPSessionManager *)getNearbyShopsWithLatitude:(NSString *)latitude longitude:(NSString *)longitude radius:(NSString *)radius success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 获取用户偏好考评大项
+ (AFHTTPSessionManager *)getUserPreferredMainItemsSuccess:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

//// 保存用户偏好考评大项
//+ (AFHTTPSessionManager *)saveUserPreferredMainItems:(NSString /*考评大项id列表，使用逗号分隔*/ *)mainItems success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;
#pragma mark - 保存用户偏好考评大项
+ (AFHTTPSessionManager *)saveUserPreferredMainItems:(NSString *)mainItems withIsTemp:(NSString *)temp success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 获取企业下的所有考评大项
+ (AFHTTPSessionManager *)getAllMainItemsForEnterprise:(NSString *)enterpriseID success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 获取大项下的所有小项及其所有的细则
+ (AFHTTPSessionManager *)getSubItemsAndDetailedRulesWithMainItemID:(NSString *)mainItemID success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 获取门店当日未完成任务
+ (AFHTTPSessionManager *)getUndoneOnsiteCheckTaskForShop:(NSString *)shopID withCheckType:(CheckShopType)checkType success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 获取任务下某个大项的所有考评记录
+ (AFHTTPSessionManager *)getOnsiteCheckPointsForTask:(NSString *)taskID withMainItemID:(NSString *)mainItemID success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 创建巡店任务
+ (AFHTTPSessionManager *)createOnsiteCheckTaskForShop:(NSString *)shopID withEvaluationIds:(NSString /*考评大项id列表，使用逗号分隔*/ *)evaluationIds andCheckType:(CheckShopType)checkType success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 修改巡店任务
+ (AFHTTPSessionManager *)updateOnsiteCheckTask:(NSString *)taskID withEvaluationIds:(NSString /*考评大项id列表，使用逗号分隔*/ *)evaluationIds success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 临时保存任务小项
+ (AFHTTPSessionManager *)saveOnsiteCheckSubItemWithTaskID:(NSString *)taskID subItemID:(NSString *)subItemID operatedStatus:(NSString /*-1：不适用，0：不合格，1：合格*/ *)operatedStatus withIsTemp:(BOOL)isTemp detailedRules:(NSString /*细则id列表，使用逗号分隔*/ *)detailedRules description:(NSString *)description picChanged:(BOOL)picChanged picArray:(NSArray <NSDictionary <UIImage*, NSString*> *> *)picArray withsaveLiveCheckPointsFlag:(NSString *)saveLiveCheckPointsFlag success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;
+ (AFHTTPSessionManager *)saveOnsiteCheckSubItemWithTaskID:(NSString *)taskID subItemID:(NSString *)subItemID operatedStatus:(NSString /*-1：不适用，0：不合格，1：合格*/ *)operatedStatus withIsTemp:(BOOL)isTemp detailedRules:(NSString /*细则id列表，使用逗号分隔*/ *)detailedRules description:(NSString *)description picChanged:(BOOL)picChanged deviceIDs:(NSArray *)deviceIDs picArray:(NSArray <NSDictionary <UIImage*, NSString*> *> *)picArray success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;

// 提交任务
+ (AFHTTPSessionManager *)submitOnsiteCheckTaskWithTaskID:(NSString *)taskID withIsInRang:(NSString *)isIsRang success:(void (^)(id responseObject))success failuer:(void (^)(NSError *error))failuer;


@end
