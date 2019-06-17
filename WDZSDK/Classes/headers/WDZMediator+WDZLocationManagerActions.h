//
//  WDZMediator+KDLocationManagerActions.h
//  WDZForAppStore
//
//  Created by Daniel on 2019/5/8.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//

#import "WDZMediator.h"
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZMediator (WDZLocationManagerActions)

/**
 开启单次定位
 */
- (void)WDZMediator_startSingleLocationWithLocationBack:(void (^)(BOOL isSuccess, CLLocation *location, NSString *addressString))locationBlock;

/**
 开启多次定位
 */
- (void)WDZMediator_startRepeatedlyLocationWithLocationBack:(void (^)(BOOL isSuccess, CLLocation *location, NSString *addressString))locationBlock;

/**
 停止定位
 */
- (void)WDZMediator_stopLocation;

- (void)WDZMediator_cleanTarget;

@end

NS_ASSUME_NONNULL_END
