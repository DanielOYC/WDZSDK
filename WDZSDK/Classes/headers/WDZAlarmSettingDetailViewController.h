//
//  WDZAlarmSettingDetailViewController.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/4/9.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAlarmShopModel.h"
#import "WDZAlarmModel.h"

@interface WDZAlarmSettingDetailViewController : WDZBaseViewController

@property (nonatomic , strong)WDZAlarmShopModel *alarmShopModel;

@property (nonatomic , strong)NSMutableArray<WDZAlarmCategory *> *categoryArr;

@end
