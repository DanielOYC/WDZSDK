//
//  WDZonsitePatrolShopViewController.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZonsitePatrolShopFrameView.h"

@interface WDZonsitePatrolShopViewController : WDZBaseViewController


@property  (nonatomic , strong)WDZonsitePatrolShopFrameView *frameView;

@property (nonatomic , retain)NSString *VCtype;
/**
 选中的门店
 */
@property (nonatomic , strong)WDZShopModel *seleteShopModel;
/**
 是否是创建新的巡店
 */
@property (nonatomic , assign)BOOL isNewOnsitePatrol;

/**
 是否是在门店范围内
 */
@property (nonatomic , retain)NSString *isInTheAddress;


@end
