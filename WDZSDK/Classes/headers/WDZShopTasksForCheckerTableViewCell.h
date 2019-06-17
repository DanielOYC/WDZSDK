//
//  WDZShopTasksForCheckerTableViewCell.h
//  WDZForAppStore
//
//  Created by shine on 2019/4/16.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZShopTaskModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WDZShopTasksForCheckerTableViewCell : UITableViewCell

@property (nonatomic, strong) WDZShopTaskModel *model;

+(CGFloat)heightForCellWithModel:(WDZShopTaskModel *)model;

@end

NS_ASSUME_NONNULL_END
