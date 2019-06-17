//
//  WDZShopSearchOptionResultView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/5/25.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZTableRefreshView.h"
#import "WDZShopListCell.h"

@interface WDZShopSearchOptionResultView : WDZTableRefreshView

/**
 关键字
 */
@property (nonatomic, copy) NSString *keyWord;
/**
 searchType：搜索类型：0：门店，1：设备，2：场景
 */
@property (nonatomic, assign) NSInteger searchType;

@property (nonatomic, assign) listType type;

@end
