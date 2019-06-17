//
//  WDZFaceRecognitionPushManager.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/23.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZFaceRecognitionPushManager : NSObject

/**
 人脸推送声音
 */
@property (nonatomic , assign)BOOL rlsbVoice;

/**
 人脸推送振动
 */
@property (nonatomic , assign)BOOL rlsbVibrate;

+ (instancetype)shareInstance;

@end
