//
//  WDZPCMRecord.h
//  audio queue
//
//  Created by 王振海 on 2017/4/12.
//  Copyright © 2017年 王振海. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import "AsyncSocket.h"
#import <AVFoundation/AVFoundation.h>

#define QUEUE_BUFFER_SIZE 3 //队列缓冲个数
#define MIN_SIZE_PER_FRAME 514 //每帧最小数据长度

@interface WDZPCMRecord : NSObject
{
    AudioStreamBasicDescription audioDescription; ///音频参数
    AudioQueueRef audioQueue; //音频播放队列
    AudioQueueBufferRef audioQueueBuffers[QUEUE_BUFFER_SIZE]; //音频缓存
    BOOL audioQueueUsed[QUEUE_BUFFER_SIZE];
}
/**
 socket
 */
@property (nonatomic, strong) AsyncSocket *asyncSocket;

/**
 推流链接
 */
@property (nonatomic, retain)NSString *postUrl;

/**
 服务器地址
 */
@property (nonatomic, retain)NSString *host;

/**
 端口号
 */
@property (nonatomic, assign) UInt16 port;



/**
 streamKey
 */
@property (nonatomic, strong) NSString *streamKey;
/**
 0未知类型
 1删除通道
 2创建通道
 3请求语音
 */
@property (nonatomic, assign)int REQUESTTYPE;//判断socket请求类型

/**
 开始对讲
 */
- (void)start;

/**
 停止对讲
 */
- (void)stop;

/**
 语音对讲
 */
- (void)voicePlay;

@end
