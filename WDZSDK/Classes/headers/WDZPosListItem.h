//
//  WDZPosListItem.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZNSearchPromptShowAble.h"

@interface WDZPosListItem : NSObject<WDZNSearchPromptShowAble>

@property (nonatomic, copy) NSString *ID;

@property (nonatomic, copy) NSString *machineId;

@property (nonatomic, copy) NSString *ticketId;

@property (nonatomic, copy) NSString *ticketTimeStr;

@property (nonatomic, copy) NSString *shopName;


/**
 是否是顾客   为兼容顾客添加的zz字段   如果为NO  再根据 isPos 字段再判断是否是 Pos 小票
 */
@property (nonatomic, assign) BOOL isCustomer;

/**
 是否是Pos小票的数据
 */
@property (nonatomic, assign) BOOL isPos;

/**
 是否是当前展示的小票
 */
@property (nonatomic, assign) BOOL isCurrentShow;

/**
 小票时间在24小时中的秒
 */
@property (nonatomic, readonly) NSInteger posTimeSecond;

/**
 小票时间在24小时中的分
 */
@property (nonatomic, readonly) NSInteger posTimeMinute;

#pragma mark -------------ticket-------------------
//设备Id
@property (nonatomic, copy) NSString *equipmentId;
@property (nonatomic, copy) NSString *listNum;
//门店Id
@property (nonatomic, copy) NSString *depId;
@property (nonatomic, copy) NSString *depName;
@property (nonatomic, copy) NSString *userName;
//企业Id
@property (nonatomic, copy) NSString *groupId;

/**
 ticket 和 顾客通用
 */
@property (nonatomic, copy) NSString *createTime;

@property (nonatomic, copy) NSString *videoId;

@property (nonatomic, copy) NSString *endTime;
/**
 是否需要刷新列表
 */
@property (nonatomic, assign) BOOL isNeedRefreshLsit;

/**
 是否是详情界面的Item
 */
@property (nonatomic, assign) BOOL isDetailItem;

#pragma mark -------------customer(顾客)-------------------

/**顾客ID*/
@property (nonatomic, copy) NSString *faceCustomerId;
/**头像*/
@property (nonatomic, copy) NSString *faceUrl;

/**顾客类型*/
@property (nonatomic, copy) NSString *regType;

/**备注*/
@property (nonatomic, copy) NSString *remark;

/**s设备ID*/
@property (nonatomic, copy) NSString *deviceId;

@end
