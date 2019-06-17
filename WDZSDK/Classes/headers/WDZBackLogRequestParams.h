//
//  WDZBackLogRequestParams.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/31.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZBackLogRequestParams : NSObject

/**
 点检项ID
 */
@property (nonatomic, copy) NSString *problemClassifyId;

/**
 门店ID
 */
@property (nonatomic, copy) NSString *nodeIds;

@property (nonatomic, copy) NSString *startTime;

@property (nonatomic, copy) NSString *endTime;
/**
 类别 1整改 2复检 4完成
 */
@property (nonatomic, copy) NSString *status;

/**
 与我相关的 默认-1,1:抄送我的 2:我提出的 4:转发我的
 */
@property (nonatomic, copy) NSString *relatedType;

/**
 流程数 默认-1, 1:1-3次，2:4-7次，4:8次以上
 */
@property (nonatomic, copy) NSString *processCount;

/**
 过期  默认-1,1 未过期 2 已过期 4 即将过期
 */
@property (nonatomic, copy) NSString *isInvalid;

/**
 创建时间 排序 0 降序 1 升序
 */
@property (nonatomic, copy) NSString *createTimeOrder;

/**
 会话时间 排序 0 降序 1 升序
 */
@property (nonatomic, copy) NSString *commentTimeOrder;

/**
 通讯录
 */
@property (nonatomic, copy) NSString *userIds;

/**
 分页开始条数 从0开始
 */
@property (nonatomic, assign) NSInteger index;

/**
 每页数目
 */
@property (nonatomic, copy) NSString *num;


@property (nonatomic, copy) NSString *token;

@end
