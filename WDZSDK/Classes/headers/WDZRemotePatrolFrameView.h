//
//  WDZRemotePatrolFrameView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/11/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZMPlayer.h"

@interface WDZRemotePatrolFrameView : WDZBaseFrameView

/**
 0门店主页 1历史界面 2门店标签 3组织架构
 */
@property (nonatomic , retain)NSString *VCType;

/**
 是否是继续巡店
 */
@property (nonatomic , assign)BOOL isLastRemote;
/**
 巡店选择的门店
 */
@property (nonatomic , retain)WDZShopModel *seleteShop;
/**
 设备列表
 */
@property (nonatomic , retain)NSMutableArray *deviceArray;
/**
 播放页面
 */
@property (nonatomic , retain)WDZMPlayer *mplayerView;
/**
 DevideId
 */
@property (nonatomic , retain)NSString *deviceId;



/**
 新建巡店
 */
-(void)frameViewDidCreatNewRemote;

/**
 继续巡店
 */
-(void)frameViewDidUpLoadLastRemoteWithNeedGetVideo:(BOOL)needGetVideo;


/**
 获取设备
 */
- (void)geitVideoWithShopModel:(WDZShopModel *)shop;

/**
 开始播放
 */
- (void)playVideo:(WDZVideoModel *)videoModel atIndex:(NSInteger)index;

/**
 横竖屏
 */
- (void)resetFrame:(CGRect)frame;

@end
