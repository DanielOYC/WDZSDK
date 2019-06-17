//
//  WDZNShopSelectServices.h
//  WDZFunctionModule
//
//  Created by 夏征宇 on 2019/4/17.
//

#import <Foundation/Foundation.h>
#import "WDZNShopSelectIsTempModel.h"
typedef void(^saveEnterpriseTagBlock)(BOOL isSuccess,NSString *result,NSError *error);
typedef void(^deleteEnterpriseTagBlock)(BOOL isSuccess,NSDictionary *resultDic,NSError *error);
typedef void(^getEnterpriseTagBlock)(BOOL isSuccess,NSArray *resultArray,NSError *error);
typedef void(^getTagShopsTagBlock)(BOOL isSuccess,NSArray *resultArray,NSError *error);
typedef void(^saveUserShopTagBlock)(BOOL isSuccess,NSDictionary *resultDic,NSError *error);
typedef void(^getUserShopTagBlock)(BOOL isSuccess,NSArray *resultArray,NSError *error);
typedef void(^getProblemInHomePageBlock)(BOOL isSuccess,NSDictionary *resultDic,NSError *error);
typedef void(^getAccoutBlock)(BOOL isSuccess,NSDictionary *resultDic,NSError *error);
typedef void(^getDeviceInHomePageBlock)(BOOL isSuccess, NSDictionary *resultDic, NSError *error);
typedef void(^getCustomBlock)(BOOL isSuccess,NSDictionary *resultDic,NSError *error);

typedef void(^getNShopCreatNewSiteBlock)(BOOL isSuccess,WDZNShopSelectIsTempModel *isTempModel,NSArray *resultArray,NSString *error);

NS_ASSUME_NONNULL_BEGIN

@interface WDZNShopSelectServices : NSObject


//1，保存企业标签：
//service/saveEnterpriseTag.action
+ (void)newMessageSaveEnterpriseTag:(NSString *)enterpriseId withTagId:(NSString *)tagId withTag:(NSString *)tag withDepIds:(NSString *)depIds withBlock:(saveEnterpriseTagBlock)block;

//2，删除企业标签：
//service/deleteEnterpriseTag.action
+ (void)deleteEnterpriseTag:(NSString *)tagId withBlock:(deleteEnterpriseTagBlock)block;

//3，获取企业标签列表
//service/getEnterpriseTags.action
+ (void)getEnterpriseTag:(NSString *)getCommonTag withblock:(getEnterpriseTagBlock)block;

//4，获取门店列表
//service/getTagShops.action
+ (void)getTagShopsWithTagId:(NSString *)tagId withIndex:(NSString *)index withNum:(NSString *)num withBlock:(getTagShopsTagBlock)block;

//5，按序保存用户标签列表
//service/saveUserShopTags.action
+ (void)saveUserShopTagsWithTagIds:(NSString *)tagIds withBlock:(saveUserShopTagBlock)block;

//6，按序获取用户标签列表
//service/getUserShopTags.action
+ (void)getUserShopTagWithIndex:(NSInteger)index withNum:(NSInteger)num withBlcok:(getUserShopTagBlock)block;
/**
 获取到问题的一些信息
 */
+ (void)getProblemnumInHomePageWithBlock:(getProblemInHomePageBlock)block;

/**
 获取设备情况
 */
+ (void)getDeviceInHomepageWithBlock:(getDeviceInHomePageBlock)block;

/**
 获取账户信息
 */
+ (void)getAccoutMessageWithBlock:(getAccoutBlock)block;
/**
 获取客流排名
 */
+(void)getCustomNumWithBlock:(getCustomBlock)block;

/**
 获取今日客流
 */
+(void)getPassengerTrafficWithBlock:(getCustomBlock)block;

/**
 获取版本号
 */
+(void)getLastVersionWithType:(NSString *)type WithBlock:(getCustomBlock)block;


/**
 查询用户是否有正在进行中的巡店
 
 @param shopId 门店ID
 */

+(void)getLiveTaskInProgressWithShopId:(NSString *)shopId withPatrolType:(NSString *)type withBlock:(getNShopCreatNewSiteBlock)block;

@end




NS_ASSUME_NONNULL_END
