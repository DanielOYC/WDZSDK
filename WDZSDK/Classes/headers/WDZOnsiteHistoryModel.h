//
//  WDZOnsiteHistoryModel.h
//  WDZForAppStore
//  巡店历史Model
//  Created by JaryPan on 2017/10/17.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseModel.h"

@interface WDZOnsiteHistoryModel : WDZBaseModel

/**
 是否是单次巡店修改分数
 */
@property (nonatomic , assign)BOOL isSigle;

/**
 门店ID
 */
@property (nonatomic , retain)NSString *deptId;
/**
 创建时间
 */
@property (nonatomic , retain)NSString *createTime;
/**
 门店名称
 */
@property (nonatomic , retain)NSString *deptName;

@property (nonatomic , retain)NSString *evaluationCount;

@property (nonatomic , retain)NSString *ID;

/**
 任务状态  0  进行中   1 完成  2 失效
 */
@property (nonatomic , retain)NSString *isComplete;

/**
 null 没有开启范围限制   0 不在有效范围内  1在范围内
 */
@property (nonatomic , retain)NSString *isInRange;

/**
 得分/总分
 */
@property (nonatomic , retain)NSString *scoreStr;

/**
 耗时
 */
@property (nonatomic , retain)NSString *liveSeconds;

@property (nonatomic , retain)NSString *notPassCount;

@property (nonatomic , retain)NSString *passCount;

/**
 巡店得分
 */
@property (nonatomic , retain)NSString *score;

@property (nonatomic , retain)NSString *taskId;

@property (nonatomic , retain)NSString *moneyStr;//罚款

@property (nonatomic , retain)NSString *userId;//巡店人ID
@property (nonatomic , retain)NSString *userName;//巡店人名称
/**
 任务ID
 */
@property (nonatomic , retain)NSString *liveCheckTaskId;


@end
