//
//  WDZUserDealTableViewCell.h
//  WDZLaiYiFen
//
//  Created by 郑来贤 on 15/7/7.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZUserModel.h"

@interface WDZUserDealTableViewCell : UITableViewCell

@property (weak , nonatomic) IBOutlet UIImageView *selectedIconImageView;
@property (weak , nonatomic) IBOutlet UIImageView *userThumbnailImageView;
@property (weak , nonatomic) IBOutlet UILabel *usernameLabel;
@property (weak, nonatomic) IBOutlet UILabel *shortNameLabel;

/**
 当前通讯录的type 只有为0时  通讯录列表时 才能点击头像进入个人主页
 */
@property (nonatomic, copy) NSString *type;

+ (instancetype)initFromNib;

- (void)displayWithUserModel:(WDZUserModel *)user;

@end
