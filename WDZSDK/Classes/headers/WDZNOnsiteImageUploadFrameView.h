//
//  WDZNOnsiteImageUploadFrameView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/12/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBaseFrameView.h"
#import "WDZLocationPatrolSubModel.h"
#import "WDZOnisteIsTempModel.h"
#import "WDZLocationPatrolModel.h"

typedef void(^getSubModelBlock)(WDZLocationPatrolSubModel *NSubModel);

@interface WDZNOnsiteImageUploadFrameView : WDZBaseFrameView
/**
 大项 Model
 */
@property (nonatomic , retain)WDZLocationPatrolModel *patrolModel;
/**
 小项 Model
 */
@property (nonatomic , retain)WDZLocationPatrolSubModel *subModel;
/**
 门店 Model
 */
@property (nonatomic , retain)WDZShopModel *shopModel;
/**
 模板 Model
 */
@property (nonatomic , retain)WDZOnisteIsTempModel *isTempModel;

@property (nonatomic , copy)getSubModelBlock block;

@end
