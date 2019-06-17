//
//  WDZProblemService.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/10/16.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModelHeader.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^getProblemsBlock)(BOOL isSuccess,WDZProblemList *problemList ,NSError *err);
typedef void(^saveProblemBlock)(BOOL isSuccess ,NSError *err);
typedef void(^initServerProblemsBlock)(BOOL isSuccess,NSString *totalDevices ,NSString *onlineDevices,NSError *err);
typedef void(^getProblemDetailBlock)(BOOL isSuccess,WDZProblem *pro ,NSError *err);
typedef void(^submitCommentsBlock)(BOOL isSuccess ,NSError *err);
typedef void(^transpondCommentsBlock)(BOOL isSuccess ,NSError *err);
typedef void(^uploadProgressBlock)(NSUInteger bytesWritten, long long totalBytesWritten, long long totalBytesExpectedToWrite);

@interface WDZProblemService : NSObject

+ (NSString *)getDetailRulesJSonStrWithProblem:(WDZProblem *)problem;

+ (NSString *)getProblemToUsersNameStringWithProblem:(WDZProblem *)problem;

+ (NSString *)getSourceTypeStringValueWithProblem:(WDZProblem *)problem;

+ (NSString *)getProblemToUsersIDStringWithProblem:(WDZProblem *)problem;

+ (NSString *)getCategoryStrWithProblem:(WDZProblem *)problem;

+ (BOOL)isShowPlayBtnWithProblem:(WDZProblem *)problem;

//保存图片
+ (void)saveProblem:(WDZProblem *)problem WithPicID:(NSString *)picID andRemark:(NSString *)remarkStr andAlarmID:(NSString *)ID andImageData:(NSData *)imageData andDetailedRuleIds:(NSString *)detailedRuleIds andBlock:(saveProblemBlock)block andPrgress:(uploadProgressBlock)progress;

//保存图片数组
+ (void)saveProblem:(WDZProblem *)problem WithPicID:(NSString *)picID andRemark:(NSString *)remarkStr andAlarmID:(NSString *)ID andImageArray:(NSArray *)temps andDetailedRuleIds:(NSString *)detailedRuleIds andBlock:(saveProblemBlock)block andPrgress:(uploadProgressBlock)progress;

+ (void)saveFeedbackProblem:(WDZProblem *)problem WithProblemHandleModel:(WDZProBlemHandleModel*)model WithBlock:(saveProblemBlock)compeletedBlock;

+ (void)getProblemDetail:(WDZProblem *)problem WithBlock:(getProblemDetailBlock)compeletedBlock;

+ (void)getDeviceDetailedInfo:(WDZProblem *)problem WithDeviceID:(NSString *)deveiceID withBlock:(void (^)(BOOL, WDZProblem *, NSError *))block;

+ (void)getProblemInfo:(WDZProblem *)problem WithPicID:(NSString *)picID andCompeletedBlock:(getProblemDetailBlock)compeletedBlock;


+ (void)submitComments:(WDZProblem *)problem WithMessages:(NSString *)message andCompeletedBlock:(submitCommentsBlock)compeletedBlock;
//有image的提交评论
+ (void)submitComments:(WDZProblem *)problem WithMessages:(NSString *)message andImagesArray:(NSArray *)temps andCompeletedBlock:(submitCommentsBlock)compeletedBlock;

+ (void)resetNeedRequestFlag:(NSArray *)pros;

/**
 *  目前的方式是进入摇一摇界面先告诉服务器，让服务器从头开始摇一摇
 *
 *  @param block 返回block
 */

+ (void)initServerProblemsBySnakeWithBlock:(initServerProblemsBlock )block;

+ (void)getProblems:(WDZProblemList *)problemList BySnakeWithBlock:(getProblemsBlock)block;

/**
 待办单列表 接口
 */
+ (void)getAllProblems:(WDZProblemList *)problemList WithBegin:(NSString *)begin andInterval:(NSString *)interval andOperateType:(int)operateType andProblemCategoryID:(NSString *)categoryID  andBlock:(getProblemsBlock)block;

/**
 新待办单接口
 */
+ (void)getBacklog:(WDZProblemList *)problemList WithParams:(WDZBackLogRequestParams *)params Completion:(void (^)(BOOL isSuccess,int total,int reviewCount,int modifyCount,int complete,NSArray *resultArr,NSError *error)) completion;

+ (void)getProblemCatogories:(WDZProblemCategoryList *)categoryModelList WithBlock:(getProblemCategorysBlock)compeletedBlock;
@end

NS_ASSUME_NONNULL_END
