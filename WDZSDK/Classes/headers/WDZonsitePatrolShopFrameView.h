//
//  WDZonsitePatrolShopOperationView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZOnsitePatrolHttpModel.h"
#import "WDZShopService.h"

@protocol WDZOnsitePatrolShopFrameViewDelegate;

@interface WDZonsitePatrolShopFrameView : WDZBaseFrameView

/**
 1 现场巡店入口  2 历史界面  3 门店主页
 */
@property (nonatomic , retain)NSString *VCtype;

/**
 巡店大项
 */
@property (nonatomic , retain)UITableView *mainTableView;

/**
 巡店小项
 */
@property (nonatomic , retain)UICollectionView *subCollectionView;


@property (nonatomic , retain)WDZShopModel *seleteShopModel;

@property (nonatomic , assign)id<WDZOnsitePatrolShopFrameViewDelegate>delegate;

/**
 是否是在门店范围内
 */
@property (nonatomic , retain)NSString *isInTheAddress;

/**
 创建新的巡店任务
 */
-(void)frameViewDidCreatNewPatrol;

/**
 获取上次巡店任务
 */
-(void)frameViewDidGetLastPatrol;

@end

@protocol WDZOnsitePatrolShopFrameViewDelegate <NSObject>

-(void)frameViewDidBack:(WDZonsitePatrolShopFrameView *)frameView;

@end
