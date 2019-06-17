//
//  WDZWebSocketManager.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SRWebSocket.h"

@interface WDZWebSocketManager : NSObject

@property (nonatomic, assign, readonly) SRReadyState state;

+ (instancetype)shareInstance;
-(void)socketURLRequest:(NSURLRequest *)request target:(id<SRWebSocketDelegate>)target;
-(void)closeWebSocket;

-(void)send:(id)data;
@end
