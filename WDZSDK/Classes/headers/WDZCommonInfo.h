//
//  WDZSystemInfo.h
//  WDZStore
//
//  Created by 郑来贤 on 14-4-7.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    DeviceTypeIphone5,
    DeviceTypeIphone4,
    DeviceTypeIphone6,
    DeviceTypeIphone6_plus,
    DeviceTypeIpadMini,
    DeviceTypeIpadOther,
}DeviceType;



@interface WDZCommonInfo : NSObject

@property (assign , nonatomic, readonly) float DeviceHight;

@property (assign , nonatomic ,readonly) DeviceType deviceType;

@property (assign , nonatomic) BOOL isUserHaveAddDevice;

@property (assign , nonatomic ) BOOL appShowTipsViewWhenPortrait;
@property (assign , nonatomic ) BOOL appShowTipsViewWhenLandscape;

@property (assign , nonatomic ) BOOL firstLaunch;

@property (strong , nonatomic) NSString *latitude;

@property (strong , nonatomic) NSString *longitude;

/**
 是否显示引导页面
 */
@property (assign , nonatomic ) BOOL isShowIntro;

/**
 获取版本
 */
@property (nonatomic, strong) NSString *currentVersion;

+ (WDZCommonInfo *)shareInstance;

/**
 保存版本
 */
- (void)saveCurrentVersion:(NSString *)currentVersion;


@end
