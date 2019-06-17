//
//  WDZUlucuCamera.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/11/1.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZUlucuCameraPlayback : NSObject

@property (assign, nonatomic) NSInteger play_type;

@property (copy, nonatomic) NSString *device_id;

@property (copy, nonatomic) NSString *device_auto_id;

@property (copy, nonatomic) NSString *device_token;

@property (copy, nonatomic) NSString *channel_id;

@end

@interface WDZUlucuCameraLive : NSObject

@property (copy, nonatomic) NSString *device_id;

@property (copy, nonatomic) NSString *device_token;

@property (copy, nonatomic) NSString *channel_id;

@property (copy, nonatomic) NSString *upload_rate;

@property (strong, nonatomic) NSArray *rate;

@end

@interface WDZUlucuCamera : NSObject

@property (nonatomic, copy) NSString *customer;

@property (strong, nonatomic) WDZUlucuCameraPlayback *playback;

@property (strong, nonatomic) WDZUlucuCameraLive *live;

@end
