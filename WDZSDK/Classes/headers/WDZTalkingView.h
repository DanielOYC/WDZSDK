//
//  WDZTalkingView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/21.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZVideoModel;
@interface WDZTalkingView : UIView

/**
 视频对象
 */
@property (nonatomic, strong) WDZVideoModel *videoModel;

/**
 对讲的view
 */
+ (instancetype)talkingView;

/**
 创建请求
 */
- (void)createRequest;

/**
 停止对讲
 */
- (void)stopSpeaking;

@end
