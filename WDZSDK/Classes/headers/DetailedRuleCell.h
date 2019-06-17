//
//  DetailedRuleCell.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/2.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailedRuleCell : UITableViewCell

@property (copy, nonatomic) NSString *content;

@property (assign, nonatomic) BOOL isSelected;

+ (CGFloat)heightForContent:(NSString *)content;

@end
