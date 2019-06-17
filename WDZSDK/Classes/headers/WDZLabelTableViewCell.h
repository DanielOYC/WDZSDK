//
//  WDZLabelTableViewCell.h
//  WDZForAppStore
//
//  Created by uMac on 17/2/15.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZLabelTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *memberLabel;

+ (instancetype)initFromNib;

@end
