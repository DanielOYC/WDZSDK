//
//  WDZShopSearchOptionView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/5/25.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZTableRefreshView.h"

@interface WDZShopSearchOptionView : WDZTableRefreshView
/**
 关键字
 */
@property (nonatomic, copy) NSString *keyWord;

@property (nonatomic, assign) NSInteger type;

@end
