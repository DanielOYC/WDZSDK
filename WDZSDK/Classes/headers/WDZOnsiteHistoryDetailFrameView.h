//
//  WDZOnsiteHistoryDetailFrameView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/11/3.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZOnsiteHistoryModel.h"

@protocol WDZOnsiteHistoryDetailFrameViewDelegate;
@interface WDZOnsiteHistoryDetailFrameView : WDZBaseFrameView


@property (nonatomic , assign)id<WDZOnsiteHistoryDetailFrameViewDelegate>delegate;

@property (nonatomic , retain)WDZOnsiteHistoryModel *historyModel;

@end

@protocol WDZOnsiteHistoryDetailFrameViewDelegate <NSObject>

-(void)frameViewDidBackWithFrameView:(WDZOnsiteHistoryDetailFrameView *)frameView;

@end
