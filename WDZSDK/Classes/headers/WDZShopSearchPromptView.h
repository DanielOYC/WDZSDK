//
//  WDZShopSearchPromptView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/28.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//  门店搜索提示View

#import <UIKit/UIKit.h>
#import "WDZShopModel.h"

@protocol WDZShopSearchPromptViewDelegate <NSObject>

- (void)didSelectedShop:(WDZShopModel *)domain;

@end

@interface WDZShopSearchPromptView : UIView

@property (nonatomic, strong) UITableView *tableView;
/**
 关键字
 */
@property (nonatomic, copy) NSString *keyWord;
/**
 搜索的结果
 */
@property (nonatomic, strong) NSArray<WDZShopModel *> *dataSource;

@property (nonatomic, weak) id<WDZShopSearchPromptViewDelegate> delegate;

@end
