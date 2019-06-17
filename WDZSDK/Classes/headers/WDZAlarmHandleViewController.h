//
//  WDZAlarmHandleViewController.h
//  WanDianZhang
//
//  Created by  ovopark_iOS1 on 16/6/14.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import "WDZBaseViewController.h"
@class WDZShopModel,WDZAlarmHandleFrameView,WDZAlarmModel;

@interface WDZAlarmHandleViewController : WDZBaseViewController

@property (strong , nonatomic) WDZAlarmHandleFrameView *frameView;

@property (strong , nonatomic) WDZAlarmModel *alarmModel;

@property (strong , nonatomic) WDZAlarmModel *selectedModel;


@property (strong , nonatomic) WDZShopModel *shopModel;
@end
