//
//  WDZNetworkURL.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/6/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZNetworkURL : NSObject

@property (nonatomic, copy) NSString *supportServerUrl;
@property (nonatomic, copy) NSString *facePulsPlusIp;
@property (nonatomic, copy) NSString *websocketServerUrl;
@property (nonatomic, copy) NSString *bossServerUrl;

@property (nonatomic, copy) NSString *zuulServerUrl;
//faceURlL
@property (nonatomic, copy) NSString *faceBaseUrl;
@property (nonatomic, copy) NSString *consoleServerUrl;

+ (instancetype)sharedInstance;

@end
