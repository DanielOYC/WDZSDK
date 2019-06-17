//
//  WDZAlarmTableView.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/8.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAlarmModel.h"

@protocol WDZAlarmTableViewDelegate <NSObject>

- (void)WDZAlarmTableViewdidSelectedAlarm:(WDZAlarmModel *)alarmModel andAllAlarm:(NSArray *)alarms andIndex:(NSIndexPath *)selectedIndexPath;

-(void)WDZAlarmTableViewCellSelectIsNo;

@end

@interface WDZAlarmTableView : UITableView

@property (nonatomic , strong)NSMutableArray<WDZAlarmModel *> *listArr;

@property (strong , nonatomic) WDZAlarmCategory *selectedAlarmCategory;

@property (nonatomic , weak)id<WDZAlarmTableViewDelegate> AlarmTableViewDelegate;
/**
 是否是全部
 */
@property (nonatomic , assign)int unhandled;

@property (nonatomic , assign)NSInteger page;

@property (nonatomic , assign)BOOL isSelected;

@end
