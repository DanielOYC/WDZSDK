//
//  WDZAlarmTableViewCell.h
//  WanDianZhang
//
//  Created by  ovopark_iOS1 on 16/6/6.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAlarmModel.h"

@protocol WDZAlarmTableViewCellDelegate <NSObject>

-(void)WDZAlarmTableViewCellSelectIsNo;

@end

@interface WDZAlarmTableViewCell : UITableViewCell
@property (copy ,nonatomic) UIImageView *iconImageView;

@property (copy ,nonatomic) UILabel *nameLabel;

@property (copy ,nonatomic) UILabel *categoryLabel;

@property (copy ,nonatomic) UILabel *dateLabel;

@property (copy ,nonatomic) UILabel *stateLabel;

@property (copy ,nonatomic) UIButton *seleteButton;

@property (nonatomic , assign)BOOL isSelected;

@property (nonatomic , weak)id<WDZAlarmTableViewCellDelegate> cellIsSelected;

- (void)displayByModel:(WDZAlarmModel *)model;
- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier;

@end
