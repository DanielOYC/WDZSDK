//
//  WDZShopTaskModel.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/4.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//


typedef NS_ENUM(NSInteger, TaskStateType)
{
    TaskStateTypeNotCheck = 0,     // 未点检  ->TaskStateTypeCheckOk或TaskStateTypeWaitRectify
         // 待整改
    TaskStateTypeDone,             // 已完成
};

@class WDZShopTaskListModel,WDZShopTaskModel;

typedef void(^getShopTasksBlock)(BOOL isSuccess ,WDZShopTaskListModel *modelList, NSError *error );
typedef void(^getShopTaskCheckResultBlock)(BOOL isSuccess ,WDZShopTaskModel *model, NSError *error );



#import "WDZBaseModel.h"

@class TaskState;

@interface WDZShopTaskModel : WDZBaseModel

/**
 *  每个门店任务的名称
 */
@property (strong , nonatomic) NSString *name;

/**
 *  每个门店任务的ID
 */
@property (strong , nonatomic) NSString *shopTaskID;
//已点检场景
@property (strong , nonatomic) NSString *checkCount;
//场景总数
@property (strong , nonatomic) NSString *count;

//未点检场景数
@property (strong , nonatomic) NSString *unCheckCount;
//点检项总数
@property (strong , nonatomic) NSString *itemAllCount;
//合格项数
@property (strong , nonatomic) NSString *passCount;
//不合格项数
@property (strong , nonatomic) NSString *failCount;

//不适用项数
@property (strong , nonatomic) NSString *itemNoApplyCount;

@property (strong , nonatomic) NSString *pointCount;

/**
 *  无效点位个数
 */
@property (strong , nonatomic) NSString *disablePresetCount;
/**
 扣款
 */
@property (nonatomic , retain)NSString *moneyStr;

@property (nonatomic , retain)NSString *extraMark;
@property (nonatomic , retain)NSString *recordName;
@property (nonatomic , retain)NSString *recordStatus;
@property (nonatomic , retain)NSString *markStr;
@property (nonatomic , retain)NSString *recordId;
@property (nonatomic , retain)NSString *firstUnCheckPresetIndex;

@property (nonatomic, copy) NSString *showName;
/**
 *  每个门店任务的状态
 */
@property (strong , nonatomic) TaskState *shopTaskState;

@property (strong , nonatomic) NSMutableArray *pointTasks;

- (void)getShopTaskCheckResultWithBlock:(getShopTaskCheckResultBlock)compeletedBlock;


@end






@interface WDZShopTaskListModel : WDZBaseModel

@property (assign , nonatomic) int checkMyself;

/**
 *  获取用户的所有门店任务列表
 *
 *  @param beginIndex     请求开始的索引
 *  @param interval       每次请求的数量
 *  @param taskType       请求任务的类型
 *  @param completedBlock 请求完成后的回调
 */
- (void)getShopTasksWithBeginIndex:(int)beginIndex andInterval:(int)interval andTaskType:(TaskStateType)taskType CompletedBlock:(getShopTasksBlock)completedBlock;


- (void)NewgetShopTasksWithBeginIndex:(int)beginIndex andInterval:(int)interval andTaskType:(TaskStateType)taskType andcheckMyself:(int)chekMyself CompletedBlock:(getShopTasksBlock)completedBlock;

@end






@interface TaskState : NSObject

- (id)initwithStateType:(TaskStateType )type;

/**
 *  任务的类型的字符串形式表示,用于界面显示
 */
@property (strong , nonatomic ,readonly) NSString           *strForState;

/**
 *  任务字符串显示时,字体的颜色
 */
@property (strong , nonatomic ,readonly) UIColor            *color;
/**
 *  状态码
 */
@property (assign , nonatomic          ) TaskStateType  stateType;

@end





