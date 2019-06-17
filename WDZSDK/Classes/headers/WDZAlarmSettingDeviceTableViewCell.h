//
//  WDZAlarmSettingDeviceTableViewCell.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAlarmShopDeviceModel.h"

@protocol WDZAlarmSettingDeviceTableViewCellDelegate <NSObject>

-(void)WDZAlarmSettingDeviceTableViewCellDidSelected;

@end

@interface WDZAlarmSettingDeviceTableViewCell : UITableViewCell

@property (nonatomic , strong)WDZAlarmShopDeviceModel *model;

@property (nonatomic , weak)id<WDZAlarmSettingDeviceTableViewCellDelegate > delegate;

@end
