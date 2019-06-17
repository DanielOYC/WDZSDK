//
//  JPLocationManager.h
//  JPLocationManager
//
//  Created by ovopark_iOS on 16/6/16.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
@class JPLocationManager;


// 定位类型枚举
typedef NS_ENUM(NSInteger, LocatingType) {
    LocatingOnce = 0,
    LocatingAllTheTime,
};


// block回调类型定义
typedef void(^LocationUpdateBlock)( NSError * _Nullable error, NSArray<CLLocation *> * _Nullable locations);
typedef void(^LatestLocationBlock)( NSDictionary * _Nonnull location);


// 代理协议
@protocol JPLocationManagerDelegate <NSObject>

@optional
- (void)locationManager:( JPLocationManager * _Nonnull)locationManager didFailWithError:(NSError * _Nonnull)error;
- (void)locationManager:(JPLocationManager * _Nonnull)locationManager didUpdateLocation:(NSDictionary * _Nonnull)location;

@end


@interface JPLocationManager : NSObject

// 代理属性
@property (weak, nonatomic) id<JPLocationManagerDelegate> _Nullable delegate;

// 定位类型
@property (assign, nonatomic) LocatingType locatingType;


// 位置信息更新的block
@property (copy, nonatomic) LocationUpdateBlock _Nullable locationUpdateblock;
// 拿到最新位置信息的block
@property (copy, nonatomic) LatestLocationBlock _Nullable latestLocationBlock;


// 开启定位
- (void)startLocating;
// 停止定位
- (void)stopLocating;


@end
