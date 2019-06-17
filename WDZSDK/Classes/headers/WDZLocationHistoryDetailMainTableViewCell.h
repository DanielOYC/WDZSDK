//
//  WDZLocationHistoryDetailMainTableViewCell.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/11/9.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZLocationPatrolModel.h"
@interface WDZLocationHistoryDetailMainTableViewCell : UITableViewCell

@property (nonatomic , retain)UILabel *nameLabel;
@property (nonatomic , retain)UILabel *socreLabel;
-(void)disPlayWithDic:(NSDictionary *)dic;

@end
