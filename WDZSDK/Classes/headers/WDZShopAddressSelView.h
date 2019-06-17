//
//  WDZShopAddressSelView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/26.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//  门店地址选择view

#import <UIKit/UIKit.h>
#import "WDZCityModel.h"

@interface WDZShopAddressSelView : UIView

/**
 数据源
 */
@property (nonatomic, strong) NSArray<WDZCityModel *> *dataSource;


@end


