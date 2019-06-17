//
//  WDZNShopDetailTableViewCell.h
//  WDZForAppStore
//  新增门店或
//  Created by 夏征宇 on 2018/5/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZShopDetailModel.h"
@interface WDZNShopDetailTableViewCell : UITableViewCell

@property (nonatomic , retain)NSIndexPath *indexPath;

@property (nonatomic , retain)WDZShopDetailModel *detailModel;

@end

