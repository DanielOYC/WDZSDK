//
//  WDZNShopShowLabelView.h
//  WDZForAppStore
//  标签显示Label和选择Label
//  Created by 夏征宇 on 2018/5/16.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZTableRefreshView.h"
#import "WDZNShopLabelModel.h"
@protocol WDZNShopShowLabelViewDelegate;
@interface WDZNShopShowLabelView : WDZTableRefreshView

@property (nonatomic , assign)id<WDZNShopShowLabelViewDelegate>delegate;

@end
@protocol WDZNShopShowLabelViewDelegate <NSObject>

/**
 传出labelModel
 */
-(void)WDZNShopShowLabelViewSeleteShopLabelMdoel:(WDZNShopLabelModel *)labelModel;

-(void)WDZNShopShowLabelViewHideView;

@end
