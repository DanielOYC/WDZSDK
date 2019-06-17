//
//  WDZImageShowConfigManager.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/23.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZImageShowConfig.h"

@interface WDZImageShowConfigManager : NSObject

+ (instancetype)shareInstance;

/**
 图片浏览  根据多选枚举值  来获取alert选项
 */
-(NSMutableArray<UIAlertAction *> *)getConfigAlertWithType:(WDZShowImageMangerType)type delegate:(id<WDZImageShowViewHandleDelegate>)delegate;

/**
 短视频播放  根据多选枚举值  来配置操作栏选项
 */
-(NSMutableArray *)getShortVideoHandleWithType:(WDZShowShortVideoMangerType)type delegaate:(id<WDZShoreVideoHandleDelegate>)delegate;

@end
