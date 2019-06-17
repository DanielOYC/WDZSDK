//
//  WDZNClickPatrolFrameView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/7/31.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZNClickModel.h"
#import "WDZShopTaskModel.h"
@protocol WDZNClickPatrolFrameViewDelegate;
@interface WDZNClickPatrolFrameView : WDZBaseFrameView

@property (nonatomic , retain)WDZNClickModel *clickModel;


-(void)displayWithShopTaskModel:(WDZShopTaskModel *)taskModel;

@property (nonatomic , assign)id<WDZNClickPatrolFrameViewDelegate>delegate;

@end


@protocol WDZNClickPatrolFrameViewDelegate <NSObject>

- (void)WDZNClickPatrolFrameViewOnBackBtnClicked;

@end
