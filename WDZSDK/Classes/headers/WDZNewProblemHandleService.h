//
//  WDZNewProblemHandleService.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class WDZProblem,WDZAddImageModel,WDZNewPrombelPictureInfoModel,WDZOSSUploadModel;
@interface WDZNewProblemHandleService : NSObject

/**
    更具问题id 获取单个问题详情
 */
+ (void)getProbleDetailWithProblem:(WDZProblem *)problem completeblock:(void(^)(BOOL isSuccess,WDZProblem *pro ,NSError *err, BOOL problemIsFinfish, NSInteger showCount , int operateSatus))compeletedBlock;

#pragma mark - 根据设备ID获取设备详情
+ (void)getDeviceDetailedInfoWithDeviceID:(NSString *)deveiceID problem:(WDZProblem *)problem withBlock:(void (^)(BOOL, WDZProblem *, NSError *))block;

/**
 整改操作有保存
 */
//+ (void)saveFeedbackProblemWithProblemHandleWithProblem:(WDZProblem *)problem complete:(void(^)(BOOL isSuccess ,NSError *err))compeletedBlock;
+ (void)saveFeedbackProblemWithProblemHandleWithProblem:(WDZProblem *)problem handleImgs:(NSArray *)imgs content:(NSString *)content complete:(void(^)(BOOL isSuccess ,NSError *err))compeletedBlock;

/**
 详情评论保存
 */
+(void)commitCommentWithImgs:(NSArray *)imgs comment:(NSString *)comment problem:(WDZProblem *)peoblem complete:(void(^)(BOOL isSuccess, NSError *err))complete;
/**
 查看是否有未完成任务
 */
+ (BOOL)isCheckCompeleteWithDatas:(NSArray <WDZProblem *>*)problems;
/**
 跳转到下一个页面
 */
+(NSIndexPath *)jumpToNextNotCheckWithCurrentIndex:(NSInteger) index datas:(NSArray<WDZProblem *> *)problems;

/**
 新订单详情页  提交转发请求
 */
+ (void)commitProblemTranspondMessage:(NSString *)message problem:(WDZProblem *)problem andCompeletedBlock:(void(^)(BOOL isSuccess, NSError *err))compeletedBlock;

/**
 WDZNewPrombelPictureInfoModel 模型  转 WDZAddImageModel模型
 */
+(NSMutableArray<WDZAddImageModel *> *)conversionToAddModelWithModels:(NSArray<WDZNewPrombelPictureInfoModel *> *)array;

+(NSArray *)createUploadImgVideoModelsWithArray:(NSArray<WDZOSSUploadModel *> *)array;


+(NSString *)getProblemDetailHandleStrWithTyper:(int)type;

@end
