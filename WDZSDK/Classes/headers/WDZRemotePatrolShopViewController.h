//
//  WDZRemotePatrolShopViewController.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/11/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZRemotePatrolFrameView.h"


@interface WDZRemotePatrolShopViewController : WDZBaseViewController

@property (nonatomic , retain)WDZRemotePatrolFrameView *frameView;


@property (nonatomic , retain)NSString *VCtype;
/**
 巡店选择的门店
 */
@property (nonatomic , retain)WDZShopModel *seleteShop;

/**
 设备列表
 */
@property (nonatomic , retain)NSMutableArray *deviceArray;
/**
 是否是继续巡店
 */
@property (nonatomic , assign)BOOL isLastRemote;

/**
 是否允许旋转
 */
@property (nonatomic, assign) BOOL isAllowRotation;

@end
