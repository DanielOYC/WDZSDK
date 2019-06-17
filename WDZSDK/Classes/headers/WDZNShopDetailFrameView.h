//
//  WDZNShopDetailFrameView.h
//  WDZForAppStore
//  新建门店View
//  Created by 夏征宇 on 2018/5/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZOrganizationNode.h"
@protocol WDZNShopDetailFrameViewDelegate;
@interface WDZNShopDetailFrameView : UIView

@property (nonatomic , retain)WDZShopModel *shopModel;

/**
 地址:内含省市区
 */
@property (nonatomic , retain)NSArray *addressArray;
/**
 选中的组织架构
 */
@property (nonatomic , retain)WDZOrganizationNode *seleteNode;
/**
 选中的店长
 */
@property (nonatomic , retain)WDZUserModel *seleteUserModel;

/**
 行政区域代码
 */
@property (nonatomic , retain)NSString *location;

/**
 开始时间
 */
@property (nonatomic , retain)NSString *startTime;
@property (nonatomic , retain)NSString *endTime;

@property (nonatomic , weak)id<WDZNShopDetailFrameViewDelegate> delegate;
@end


@protocol WDZNShopDetailFrameViewDelegate <NSObject>

-(void)saveShopEditSuccessWithShopId:(NSString *)shopID;

@end
