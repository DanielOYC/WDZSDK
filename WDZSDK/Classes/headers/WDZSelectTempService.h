//
//  WDZSelectTempService.h
//  Pods
//
//  Created by Daniel on 2019/3/26.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZSelectTempService : NSObject

/**
 更新巡店任务，只更新考评大项
 @param ID 任务ID
 @param isTemplate 是否是模板 0否 1是   非必传
 @param templateId 模板ID 非必传
 @param evaluationIds 检查项ID字符串 非必传
 @param block 返回数据
 */
+(void)updateLiveCheckTaskNewWithId:(NSString *)ID withIsTemplate:(BOOL)isTemplate withTemplateId:(NSString *)templateId withEvaluationIds:(NSString *)evaluationIds withBlock:(void(^)(BOOL isSuccess,NSDictionary *resultDic,NSError *error))block;

/**
 查询检查项模板
 */
+(void)getCheckTempLatesAppWithpageNumber:(NSInteger)pageNumber withPageSize:(NSInteger)pageSize withBlock:(void(^)(BOOL isSuccess, NSDictionary *resultDic, NSError *error))block;

@end

NS_ASSUME_NONNULL_END
