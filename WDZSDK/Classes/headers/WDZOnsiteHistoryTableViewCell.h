//
//  WDZOnsiteHistoryTableViewCell.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/17.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZOnsiteHistoryModel.h"

@interface WDZOnsiteHistoryTableViewCell : UITableViewCell
/**
 是否是远程巡店
 */
@property (nonatomic , assign)BOOL isRemote;

-(void)displayWithModel:(WDZOnsiteHistoryModel *)model;


@end
