//
//  WDZAlarmSettingViewController.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/7.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAlarmModel.h"
#import "WDZAlarmShopModel.h"

@interface WDZAlarmSettingViewController : WDZBaseViewController

@property (nonatomic , strong)NSMutableArray<WDZAlarmCategory *> *categoryArr;

/**
 请求到的数据
 */
@property (nonatomic , strong)WDZAlarmShopSettingModel *netModel;

@end
