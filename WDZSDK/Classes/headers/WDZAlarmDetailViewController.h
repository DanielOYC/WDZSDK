//
//  WDZAlarmDetailViewController.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZBaseViewController,WDZShopModel,WDZAlarmModel;
@interface WDZAlarmDetailViewController : UIViewController

//-(void)initWithAlarmArray:(NSArray<WDZAlarmModel *>*)alarmArr index:(NSInteger)index;
@property (strong , nonatomic) NSArray<WDZAlarmModel *>*alarmModelArr;

@property (nonatomic , assign)NSInteger index;

/**
 保险电话
 */
@property (nonatomic , strong)NSString *insurance;

//@property (strong , nonatomic) WDZShopModel *shopModel;

@end
