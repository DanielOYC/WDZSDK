//
//  WDZAlarmHeaderTableView.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/8.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAlarmModel.h"
@protocol WDZAlarmHeaderTableViewDelegate <NSObject>

-(void)headerTableViewDidSelectedWithModel:(WDZAlarmCategory *)model;

@end

@interface WDZAlarmHeaderTableView : UITableView

@property (nonatomic , weak)id<WDZAlarmHeaderTableViewDelegate> headerTableDelegate;

@property (nonatomic , strong)NSMutableArray<WDZAlarmCategory *> *listArr;

@end
