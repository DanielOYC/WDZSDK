//
//  WDZNUserListLabelTableViewCell.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/27.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNUserListLabelModel.h"
#import "WDZNUserListConfigModel.h"

@interface WDZNUserListLabelTableViewCell : UITableViewCell

@property (nonatomic , retain)WDZNUserListLabelModel *labelModel;

@property (nonatomic , retain)WDZNUserListConfigModel *configModel;

@end
