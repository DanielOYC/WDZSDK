//
//  WDZShopDetailFrameView.h
//  WDZForAppStore
//  门店详情
//  Created by 夏征宇 on 2018/5/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
@protocol WDZShopDetailFrameViewDelegate;
@interface WDZShopDetailFrameView : WDZBaseFrameView

@property (nonatomic , retain)WDZShopModel *shopModel;

@property (nonatomic , retain)WDZUserModel *userModel;
@property (nonatomic , strong) void(^saveShopEditSuccessBlock)(NSString *shopID);
/**
 是否是创建新的门店
 */
@property (nonatomic , assign)BOOL isCreatNewShop;

@property (nonatomic , weak)id <WDZShopDetailFrameViewDelegate>delegate;
@end

@protocol WDZShopDetailFrameViewDelegate <NSObject>

-(void)saveShopSuccessWithShopId:(NSString *)shopID;

@end
