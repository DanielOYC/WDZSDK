//
//  WDZBackLogCell.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/24.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZProblem.h"

@class WDZProblem;
@protocol WDZBackLogCellDelegate <NSObject>

@optional
- (void)backLogToDetailview:(WDZProblem *)problem;

@end

@interface WDZBackLogCell : UITableViewCell

@property (nonatomic, strong) WDZProblem *problem;

@property (nonatomic, weak) id<WDZBackLogCellDelegate> delegate;

@end
