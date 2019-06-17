//
//  WDZShopDetailViewController.h
//  WDZForAppStore
//  门店详情
//  Created by 夏征宇 on 2018/5/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZShopDetailFrameView.h"
@protocol WDZShopDetailViewControllerDelegate;
@interface WDZShopDetailViewController : WDZBaseViewController

@property (nonatomic , retain)WDZShopDetailFrameView *frameView;

@property (nonatomic , weak)id<WDZShopDetailViewControllerDelegate>delegate;

@property (nonatomic , strong) void(^saveShopEditSuccessBlock)(NSString *shopID);

/**
 获取单个门店的信息
 @param shopID 门店 ID
 */
- (void)getShopDetailByShopID:(NSString *)shopID;


@end


@protocol WDZShopDetailViewControllerDelegate <NSObject>

-(void)saveShopEditSuccessWithShopId:(NSString *)shopID;

@end
