//
//  WDZOrganizationUserListCell.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/10.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//   用户

#import <UIKit/UIKit.h>
#import "WDZUserModel.h"
#import "WDZOrganizationConfigManager.h"

@protocol WDZOrganizationUserListCellDelegate <NSObject>
-(void)WDZOrganizationUserListCellDidClickUserIcon:(WDZUserModel *)userModel;
@end

@interface WDZOrganizationUserListCell : UITableViewCell

@property (nonatomic, weak) id<WDZOrganizationUserListCellDelegate> delegate;

@property (nonatomic , retain)WDZUserModel *userModel;

@property (nonatomic, strong) WDZOrganizationConfigManager *config;

@property (nonatomic , retain)NSString *searchText;
@end
