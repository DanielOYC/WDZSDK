//
//  WDZMediator+KDGoogleLocationManager.h
//  WDZForAppStore
//
//  Created by Daniel on 2019/5/8.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//

#import "WDZMediator.h"
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZMediator (WDZGoogleLocationManager)

/**
 开启单次定位
 */
- (void)WDZMediator_googleStartSingleLocationWithLocationBack:(void (^)(BOOL isSuccess, CLLocation *location, NSString *addressString))locationBlock;

/**
 开启多次定位
 */
- (void)WDZMediator_googleStartRepeatedlyLocationWithLocationBack:(void (^)(BOOL isSuccess, CLLocation *location, NSString *addressString))locationBlock;

/**
 停止定位
 */
- (void)WDZMediator_googleStopLocation;

- (void)WDZMediator_googleCleanTarget;

@end

NS_ASSUME_NONNULL_END
