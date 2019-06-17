//
//  WDZRotationManager.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/10/16.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZRotationManager : NSObject

@property (nonatomic,assign) BOOL allowRotation;//横竖屏

+ (instancetype)manager;


/**强制横屏*/
+ (void)rotationLandscape;

/**强制竖屏*/
+ (void)rotationPortrait;

/**
 是否是竖屏
 */
+ (BOOL)isPortrait;

@end

NS_ASSUME_NONNULL_END
