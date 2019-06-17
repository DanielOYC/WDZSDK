//
//  WDZVideoClipManager.h
//  WDZForAppStore
//
//  Created by Hayder on 2017/11/8.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZVideoClipManager : NSObject

+ (instancetype)sharedInstance;
/**
 开始录制
 */
- (void)startRecord;

/**
 停止录制
 */
- (void)stopRecord;

/**
 拼接录像数据
 */
- (void)appendReocrdVideoData:(char *)data length:(NSUInteger) length;

@end
