//
//  WDZAlarmShopDeviceModel.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "WDZAlarmModel.h"

@interface WDZAlarmShopDeviceModel : NSObject
//groupId = 1084,
/**
 企业 ID
 */
@property (nonatomic , strong)NSString *groupId;
//depId = 9620,
/**
 门店 ID
 */
@property (nonatomic , strong)NSString *depId;
//deviceStatusId = 5403,
/**
 设备 ID
 */
@property (nonatomic , strong)NSString *deviceStatusId;
//deviceName = "ONVIF",
/**
 设备名称
 */
@property (nonatomic , strong)NSString *deviceName;

/**
 设备状态 (1:开启   0:关闭    -1:无法开启)
 */
@property (nonatomic , strong)NSString *status;
//ipmac = "e0508b1e3763",
/**
 设备 mac 地址
 */
@property (nonatomic , strong)NSString *ipmac;

/**
 告警类型
 */
@property (nonatomic , strong)NSString *alertType;
/**
 告警类型(对应名称)
 */
@property (nonatomic , strong)NSString *alartTypeStr;

@property (nonatomic , strong)NSMutableArray<WDZAlarmCategory *> *categoryArr;
@end
