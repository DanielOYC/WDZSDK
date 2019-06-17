//
//  WDZShopSelectTableViewCell.h
//  WDZLaiYiFen
//
//  Created by 郑来贤 on 15/7/10.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZShopModel.h"
#import "globalDefine.h"
@interface WDZShopSelectTableViewCell : UITableViewCell

@property (weak , nonatomic) IBOutlet UILabel           *nameLabel;
@property (weak , nonatomic) IBOutlet UIImageView       *selectedImageView;

+ (instancetype)initFromNib;

- (void)disPlayWithShop:(WDZShopModel *)shop;

@end
