//
//  WDZAlarmCategoryTableViewCell.h
//  WanDianZhang
//
//  Created by  ovopark_iOS1 on 16/6/13.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAlarmModel.h"
@interface WDZAlarmCategoryTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *iamgeView;

@property (weak, nonatomic) IBOutlet UILabel *categoryLabel;

+ (instancetype)initFromNib;

+ (CGFloat )heightForCellWithAlarmCategory:(WDZAlarmCategory *)category;

- (void)displayWithCategory:(WDZAlarmCategory *)category;


@end
