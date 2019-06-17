//
//  WDZProblemTableViewCell.h
//  WDZLaiYiFen
//
//  Created by 郑来贤 on 15/5/13.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZProblem.h"


@interface WDZProblemTableViewCell : UITableViewCell

@property (weak , nonatomic) IBOutlet UIImageView *iconImageView;

@property (weak , nonatomic) IBOutlet UILabel *proNameLab;
@property (weak , nonatomic) IBOutlet UILabel *categoryNameLab;
@property (weak , nonatomic) IBOutlet UILabel *desLab;
@property (weak , nonatomic) IBOutlet UILabel *statusLab;
@property (weak, nonatomic) IBOutlet UILabel *handleLabel;


+ (instancetype)initFromNib;

- (void)displayWithPro:(WDZProblem *)pro;

@end
