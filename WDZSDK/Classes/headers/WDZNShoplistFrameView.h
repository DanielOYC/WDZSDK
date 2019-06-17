//
//  WDZNShoplistFrameView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/20.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZShopListCell.h"

@interface WDZNShoplistFrameView : WDZBaseFrameView
//
///**
// 是否允许操作
// */
//@property (nonatomic, assign) BOOL isAllowedOperation;
/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;

/**
 是否需要跳到收藏界面
 */
@property (nonatomic, assign) BOOL isNeedToCollection;

/**
 加载数据
 */
- (void)frameViewLoadData;


/**
 收藏选择
 */
- (void)collectionSelected;

/**
 选择查看所有门店
 */
- (void)allShopSelected;

@end
