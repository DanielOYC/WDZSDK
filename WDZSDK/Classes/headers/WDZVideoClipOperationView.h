//
//  WDZVideoClipOperationView.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/7/26.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//  裁剪的操作视图，选取视频范围

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface WDZVideoClipOperationView : UIView

// 跳到指定的开始，结束时间
@property (copy, nonatomic) void (^seekToTime)(CGFloat startTime, CGFloat endTime);

// 根据传入的视频URL生成AVAsset对象
@property (nonatomic, strong) AVAsset *videoAvasset;

// 当前播放器对象
@property (strong, nonatomic) AVPlayer *player;

@end
