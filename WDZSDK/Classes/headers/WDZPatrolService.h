//
//  WDZPatrolService.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/1/18.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//
#import <Foundation/Foundation.h>
//#import "WDZAppDelegate.h"
#import "WDZOnisteIsTempModel.h"
typedef void(^getBackBlock)(BOOL isSuccess , NSDictionary *resultDic  , NSError *error);
typedef void(^getReturnBlock)(BOOL isSuccess , NSDictionary *resultDic  , NSString *error);
typedef void(^getBackWithUnDoneBlock)(BOOL isSuccess , NSDictionary *resultDic ,NSArray *unDoneArray, NSError *error);
typedef void(^getOssBlock)(BOOL isSuccess , NSDictionary *resultDic  , NSString *error);
typedef void(^getBack2Block)(BOOL isSuccess,NSArray *resultArray,NSError *error);
typedef void(^getCreatNewSiteBlock)(BOOL isSuccess,WDZOnisteIsTempModel *isTempModel,NSArray *resultArray,NSString *error);

@interface WDZPatrolService : NSObject

/**
 新提交上传过 OSS 的图片链接
 
 @param taskId 任务 ID
 @param isTemplate 是否是模板
 @param evaluationId 检查项 ID
 @param detailedRules  细则 ID
 @param Description  描述
 @param images 图片 URL 数组
 @param status 状态: -1不适用 0不合格 1合格
 */
+(void)WDZNOnsiteSaveLiveCheckPointsPicOnOssWithTaskID:(NSString *)taskId WithIsTemp:(BOOL)isTemplate WithEvaluationId:(NSString *)evaluationId WithDetailedRules:(NSString *)detailedRules withDescription:(NSString *)Description WithpicUrlStrs:(NSArray *)images WithStatus:(NSString *)status WithBlock:(getOssBlock)block;

/**
 提交并返回
 @param taskId 任务ID
 @param VCtype 控制器来源
 @param isInAddress 是否在范围内，传入数据，内部判断 非1即为不在范围内
 */
+(void)subMitAndBackWithTaskID:(NSString *)taskId withIsInRang:(NSString *)isInAddress withSubMitImages:(NSArray *)subMitImages withVcType:(NSString *)VCtype withBlock:(getBackWithUnDoneBlock)block;
/**
 创建新的巡店
 @param shopId  门店ID
 @param type 创建类型  0 现场巡店   1  远程巡店  默认为）
 @param mainItemId   大项ID
 @param photos  接口中要判断是否开启了拍照签到功能，如果开启了，图片不能为空
 @param address  地址
 @param block 返回数据
 */
+(void)creatNewLiveCheckTaskWithShopId:(NSString *)shopId withType:(NSString *)type withMainItemId:(NSString *)mainItemId withPhotos:(NSArray *)photos withAddress:(NSString *)address withBlock:(getCreatNewSiteBlock)block;

/**
 查询用户是否有正在进行中的巡店
 
 @param shopId 门店ID
 */
+(void)getLiveTaskInProgressWithShopId:(NSString *)shopId withPatrolType:(NSString *)type withBlock:(getCreatNewSiteBlock)block;


/**
 远程巡店保存小项
 */
+(void)saveOnsiteCheckSubItemWithTaskID:(NSString *)taskID subItemID:(NSString *)subItemID operatedStatus:(NSString *)operatedStatus withIsTemp:(BOOL)isTemp detailedRules:(NSString *)detailedRules description:(NSString *)description picChanged:(BOOL)picChanged picArray:(NSArray *)picArray withsaveLiveCheckPointsFlag:(NSString *)saveLiveCheckPointsFlag withDeviceIds:(NSArray *)deviceArray success:(void (^)(id))success failuer:(void (^)(NSError *))failuer;

/**
 某个任务的巡店记录
 
 @param taskId 任务ID
 @param pageNumer 页数
 @param pageSize 每页数据条数
 
 */
+(void)getLiveCheckLogByTaskId:(NSString *)taskId withPageNumber:(int)pageNumer WithsourceType:(NSString *)sourceType withPageSize:(int)pageSize WithBlock:(getBackBlock)block;
/**
 巡店记录
 
 @param depId 组织架构ID
 @param startTime 开始时间
 @param endTime 结束时间
 @param status 巡店记录状态 全部  -1 or null     0 未提交     1   已完成       2   已失效
 @param pageNumer  页数
 @param checkType 记录类型 0 现场巡店   1 远程巡店
 @param pageSize 每页数据条数
 @param recordType 0 我的  1我管辖的
 @param checkerId 巡店人ID（,号间隔）
 @param isInRang 是否是在范围内 0不在范围内  1在范围内 不传表示全部
 @param block 返回数据
 */
+(void)getLiveCheckLogWithDepId:(NSString *)depId withStartTime:(NSString *)startTime withEndTime:(NSString *)endTime withStatus:(NSString *)status withCheckType:(NSString *)checkType withPageNumber:(NSInteger)pageNumer withRecordType:(NSString *)recordType withCheckerId:(NSString *)checkerId withisInRang:(NSString *)isInRang withPageSize:(NSInteger)pageSize withBlock:(getBackBlock)block;

/**
 更新巡店任务，只更新考评大项
 
 @param ID 任务ID
 @param isTemplate 是否是模板 0否 1是   非必传
 @param templateId 模板ID 非必传
 @param evaluationIds 检查项ID字符串 非必传
 @param block 返回数据
 */
+(void)updateLiveCheckTaskNewWithId:(NSString *)ID withIsTemplate:(BOOL)isTemplate withTemplateId:(NSString *)templateId withEvaluationIds:(NSString *)evaluationIds withBlock:(getBackBlock)block;

/**
 根据考评大项或模板获取考评小项列
 @param evaluationId 是模板的   时候，evaluationId为模板ID   不是模板的时候evaluationId是父检查项的ID
 @param taskId 任务ID
 @param templateId 模板ID
 @param isTemplate 是否是模板  0不是模板  1是模板
 @param block 返回数据
 */
+(void)getLiveTaskDbViewShopByParentId:(NSString *)evaluationId withLiveTaskId:(NSString *)taskId withIsTemplate:(NSString *)isTemplate withtemplateId:(NSString *)templateId withBlock:(getBackBlock)block;

/**
 查询检查项模板
 */
+(void)getCheckTempLatesAppWithpageNumber:(NSInteger)pageNumber withPageSize:(NSInteger)pageSize withBlock:(getBackBlock)block;

/**
 查询是否开启拍照签到
 */
+(void)getEnterpriseConfiggWithBlock:(getBackBlock)block;

/**
 用户修改提交检查的分数
 
 @param patrolID 任务ID
 @param evaluationId 检查项ID
 @param isTemp 是否是模板
 @param score 开启可以修改分数的话，提交的分数
 @param block 返回数据
 */
+(void)saveLiveCheckPointsScsoreWithID:(NSString *)patrolID withevaluationId:(NSString *)evaluationId withisTemplate:(NSString *)isTemp withScore:(NSString *)score Block:(getBackBlock)block;

/**
 根据模板获取点检项(大)
 */
+(void)getParentViewShopWithTempId:(NSString *)tempId withBlock:(getBack2Block)block;

/**
 提交总结
 @param ID 任务 ID
 */
+(void)subMitSummeryWithSummer:(NSString *)summery WithPatrolID:(NSString *)ID WithBlock:(getBackBlock)block;
/**
 提交上传过 OSS 的图片链接

 @param taskId 任务 ID
 @param isTemplate 是否是模板
 @param evaluationId 检查项 ID
 @param detailedRules  细则 ID
 @param Description  描述
 @param images 图片 URL 数组
 @param status 状态: -1不适用 0不合格 1合格
 */
+(void)saveLiveCheckPointsPicOnOssWithTaskID:(NSString *)taskId WithIsTemp:(BOOL)isTemplate WithEvaluationId:(NSString *)evaluationId WithDetailedRules:(NSString *)detailedRules withDescription:(NSString *)Description WithpicUrlStrs:(NSArray *)images WithStatus:(NSString *)status WithBlock:(getOssBlock)block;


@end
