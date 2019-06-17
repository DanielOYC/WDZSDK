//
//  WDZPosHistoryTableViewCell.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 2017/7/25.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZPosHistoryTableViewCell : UITableViewCell

/**
 日期
 */
@property (nonatomic , retain)UILabel *dateLabel;

/**
 订单量
 */
@property (nonatomic , retain)UILabel *orderLabel;

/**
 总金额
 */
@property (nonatomic , retain)UILabel *moneyLabel;
@end
