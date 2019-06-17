//
//  WDZMPlayerFrameView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/5/19.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import "WDZBaseFrameView.h"

@protocol WDZMPlayerFrameViewDelegate <NSObject>

- (void)playerFrameDidClickSetting:(UIButton *)button;

- (void)didClickChangeVideoButton:(UIButton *)button;

@end

@interface WDZMPlayerFrameView : WDZBaseFrameView

@property (nonatomic, weak) id<WDZMPlayerFrameViewDelegate> delegate;

/**
 当前的viewModel
 */
@property (nonatomic, strong) WDZVideoModel *videoModel;

/**
 收藏按钮
 */
@property (nonatomic, strong) UIButton *collectionBtn;

@end
