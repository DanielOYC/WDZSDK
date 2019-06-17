//
//  WDZNRemotePatrolTakePhotoView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/12/27.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZLocationPatrolSubModel.h"
#import "WDZOnisteIsTempModel.h"
#import "WDZLocationPatrolModel.h"
#import "WDZDeviceModel.h"
typedef void(^getSubModelBlock)(WDZLocationPatrolSubModel *NSubModel);
@interface WDZNRemotePatrolTakePhotoView : UIView

/**
 图片数组
 */
@property (nonatomic , retain)NSMutableArray *imagesArray;
/**
 描述
 */
@property (nonatomic , retain)NSString *detailText;

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


@property (nonatomic , retain)WDZVideoModel *videoModel;
/**
 模板 Model
 */
@property (nonatomic , retain)WDZOnisteIsTempModel *isTempModel;

@property (nonatomic , copy)getSubModelBlock block;

-(void)addImageViewTapAciton;

@end
