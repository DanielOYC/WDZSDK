//
//  WDZLocationSubTableViewCell.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/20.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZLocationPatrolSubModel.h"
@protocol WDZLocationSubTableViewCellDelegate;
@interface WDZLocationSubTableViewCell : UICollectionViewCell
@property (nonatomic , assign)id<WDZLocationSubTableViewCellDelegate>delegate;
@property (nonatomic , retain)WDZLocationPatrolSubModel *subModel;

@end

@protocol WDZLocationSubTableViewCellDelegate <NSObject>

-(void)didClickDeleteButtonWithCell:(WDZLocationSubTableViewCell *)cell;

@end
