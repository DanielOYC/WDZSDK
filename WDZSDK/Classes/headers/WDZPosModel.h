//
//  WDZPosTicket.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//  Pos小票

#import <Foundation/Foundation.h>
#import "WDZIPosGoods.h"
#import "WDZPosPayment.h"
#import "WDZPosListItem.h"

@interface WDZPosModel : NSObject
/**
 posid
 */
@property (nonatomic, copy) NSString *ID;
/**
 
 */
@property (nonatomic, copy) NSString *shopId;
/**
门店ID
 */
@property (nonatomic, copy) NSString *depId;
/**
 门店名
 */
@property (nonatomic, copy) NSString *shopName;
/**
 票据ID
 */
@property (nonatomic, copy) NSString *ticketId;
/**
 小票时间
 */
@property (nonatomic, copy) NSString *ticketTime;
/**
 小票机器id
 */
@property (nonatomic, copy) NSString *machineId;
/**
 票据时间
 */
@property (nonatomic, copy) NSString *ticketTimeStr;
/**
 出纳ID
 */
@property (nonatomic, copy) NSString *cashierId;
/**
 出纳名称
 */
@property (nonatomic, copy) NSString *cashierName;
/**
 导购Id
 */
@property (nonatomic, copy) NSString *guideId;
/**
 导购编号
 */
@property (nonatomic, copy) NSString *guideNo;
/**
 Vip卡号
 */
@property (nonatomic, copy) NSString *vipCard;
/**
 原价，指导价
 */
@property (nonatomic, copy) NSString *guidePrice;
/**
 价格
 */
@property (nonatomic, copy) NSString *price;
/**
 实收
 */
@property (nonatomic, copy) NSString *received;
/**
 找钱
 */
@property (nonatomic, copy) NSString *returned;
/**
 企业ID
 */
@property (nonatomic, copy) NSString *refund;
/**
 企业ID
 */
@property (nonatomic, copy) NSString *enterpriseId;

/**
 商品列表
 */
@property (nonatomic, strong) NSArray *goods;

/**
 付款列表
 */
@property (nonatomic, strong) NSArray *payments;

/**
 总数
 */
@property (nonatomic, strong) NSString *totalQuantity;

@property (nonatomic, strong) NSString *videoId;
/**
 是否需要刷新列表
 */
@property (nonatomic, assign) BOOL isNeedRefreshLsit;

@property (nonatomic, strong) WDZPosListItem *posItem;

@end
