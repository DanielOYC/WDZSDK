//
//  WDZOnsitePatrolHttpModel.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseModel.h"
typedef void(^getBackBlock)(BOOL isSuccess,NSDictionary *resultDic,NSError *error);
typedef void(^getRequestBlock)(BOOL isSuccess,NSDictionary *resultDic,NSString *error);
typedef void(^getBack2Block)(BOOL isSuccess,NSArray *resultArray,NSError *error);
@interface WDZOnsitePatrolHttpModel : WDZBaseModel

/**
 创建新的巡店
 @param shopId  门店ID
 @param type 创建类型  0 现场巡店   1  远程巡店  默认为）
 @param mainItemId   大项ID
 @param photos  接口中要判断是否开启了拍照签到功能，如果开启了，图片不能为空
 @param address  地址
 @param block 返回数据
 */
+ (void)creatNewLiveCheckTaskWithShopId:(NSString *)shopId withType:(NSString *)type withMainItemId:(NSString *)mainItemId withPhotos:(NSArray *)photos withAddress:(NSString *)address withBlock:(getRequestBlock)block;


/**
 更新巡店任务，只更新考评大项
 @param ID 任务ID
 @param isTemplate 是否是模板 0否 1是   非必传
 @param templateId 模板ID 非必传
 @param evaluationIds 检查项ID字符串 非必传
 @param block 返回数据
 */
+(void)updateLiveCheckTaskNewWithId:(NSString *)ID withIsTemplate:(BOOL)isTemplate withTemplateId:(NSString *)templateId withEvaluationIds:(NSString *)evaluationIds withBlock:(getBackBlock)block;


@end
