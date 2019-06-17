//
//  WDZMPlayScrollview.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/5/27.
//  Copyright © 2017年 Hayder. All rights reserved.
//  循环滚动videoListview

#import <UIKit/UIKit.h>

@class WDZMPlayScrollview,WDZVideoModel,WDZMPlayer;
@protocol WDZMPlayScrollviewDelegate <NSObject>

- (void)mPlayScrollview:(WDZMPlayScrollview *)scrollPlayView didChangedVideo:(WDZVideoModel *)videoModel;

@end

@interface WDZMPlayScrollview : UIView

/**
 当前需要显示的videoModel
 */
@property (nonatomic, strong) WDZVideoModel *videoModel;

/**
 需要循环的videolist
 */
@property (nonatomic, strong) NSArray *videoList;

@property (nonatomic, readonly) WDZMPlayer *currentPlayer;


@property (nonatomic, weak) id<WDZMPlayScrollviewDelegate> delegate;

- (void)mplay;

- (void)mstop;

/**
 进入后台停止
 */
- (void)appEntryBackgroundMstop;

@end
