//
//  WDZDevelopAuthCenter.h
//  WDZForAppStore
//
//  Created by Hayder on 2019/5/10.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZDevelopCenter : NSObject

/**
 注册万店掌播放器
 @param asid 开放平台参数
 @param token 万店掌token
 */
+ (void)registerWDZPlayerWithAsid:(NSString *)asid token:(NSString *)token Compeltion:(void (^)(BOOL isSuccess,NSDictionary *params))completion;

/**
 初始化高德地图

 @param appKey 高德key
 */
+ (void)setAmapAppKey:(NSString *)appKey;
@end

NS_ASSUME_NONNULL_END
