//
//  WDZAlarmShopSettingViewController.h
//  WDZForAppStore
//  门店配置页面
//  Created by  ovopark_iOS1 on 2018/3/19.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAlarmShopModel.h"
#import "WDZAlarmModel.h"

@protocol WDZAlarmShopSettingDelegate <NSObject>

-(void)WDZAlarmShopSettingSuccess;
@end

@interface WDZAlarmShopSettingViewController : WDZBaseViewController

@property (nonatomic , strong)WDZAlarmShopModel *alarmShopModel;

@property (nonatomic , strong)NSMutableArray<WDZAlarmCategory *> *categoryArr;

@property (nonatomic , weak)id<WDZAlarmShopSettingDelegate> delegate;

@end
