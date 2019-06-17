//
//  WDZNUserListTableViewCell.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNUserListConfigModel.h"
#import "WDZUserModel.h"

@interface WDZNUserListTableViewCell : UITableViewCell

@property (nonatomic , retain)WDZUserModel *userModel;

@property (nonatomic , retain)WDZNUserListConfigModel *configModel;

@property (nonatomic , retain)NSString *searchText;

@end
