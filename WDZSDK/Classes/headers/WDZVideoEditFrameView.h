//
//  WDZVideoEditFrameView.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/7/25.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZVideoEditFrameView : UIView

@property (nonatomic, strong) NSURL *inputPath; // 传进需要裁剪的视频路径

// 完成事件回调
@property (copy, nonatomic) void (^completeBlock)(NSURL *outputPath);

// 取消事件回调
@property (copy, nonatomic) void (^cancelBlock)(WDZVideoEditFrameView *videoEditFrameView);

@end
