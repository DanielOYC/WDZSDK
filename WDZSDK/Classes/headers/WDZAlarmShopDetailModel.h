//
//  WDZAlarmShopDetailModel.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZAlarmShopDeviceModel.h"
#import "WDZAlarmShopConfigModel.h"

@interface WDZAlarmShopDetailModel : NSObject

/**
 设备信息
 */
@property (nonatomic , strong)NSArray<WDZAlarmShopDeviceModel *> *data;

/**
 配置信息
 */
@property (nonatomic , strong)WDZAlarmShopConfigModel *config;

/**
 门店下所有设备数
 */
@property (nonatomic , strong)NSString *total;

/**
 警报类型
 */
@property (nonatomic , strong)NSString *alertType;

//@property (nonatomic , assign)BOOL allDataSelect;

@end
