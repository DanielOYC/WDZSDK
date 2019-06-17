//
//  WDZPCMDataPlayer.h
//  WDZForAppStore
//
//  Created by Hayder on 2017/5/2.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>

@interface WDZPCMDataPlayer : NSObject

@property (nonatomic, assign) BOOL isAllowAudio;
/**
 创建播放器
 */
+ (instancetype)shareInstance;

/**
 设置播放器参数
 */
- (void)resetWithSampleRete:(int)smpleRate channels:(int) channels;

/**
 播放
 */
- (void)play:(void*)pcmData length:(unsigned int)length;

/**
 停止
 */
- (void)stop;


@end
