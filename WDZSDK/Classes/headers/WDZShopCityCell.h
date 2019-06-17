//
//  WDZShopCityCell.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/26.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZCityModel.h"

@class WDZShopCityCell,WDZCityModel;
@protocol WDZShopCityCellDelegate <NSObject>

@required;
- (void)shopCityCell:(WDZShopCityCell *)cell didSelectCity:(WDZCityModel *)city;

@end

@interface WDZShopCityCell : UITableViewCell
/**
 城市列表
 */
@property (nonatomic, strong) WDZCityModel *model;

@property (nonatomic, weak) id<WDZShopCityCellDelegate> delegate;

@end
