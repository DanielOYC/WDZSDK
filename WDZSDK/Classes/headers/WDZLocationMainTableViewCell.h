//
//  WDZLocationMainTableViewCell.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/19.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZLocationPatrolModel.h"
@interface WDZLocationMainTableViewCell : UITableViewCell

@property (nonatomic , retain)WDZLocationPatrolModel *model;

-(void)disPlayWithModel:(WDZLocationPatrolModel *)patrolModel;

@end
