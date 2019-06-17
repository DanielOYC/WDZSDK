//
//  WDZWelComeService.h
//  AFNetworking
//
//  Created by dingkan on 2019/1/17.
//

#import <Foundation/Foundation.h>

@interface WDZWelComeService : NSObject

/**
 是否需要倒计时
 */
@property (nonatomic, assign) BOOL needTime;

/**
 倒计时
 */
@property (nonatomic, assign) NSInteger timeNum;

/**
 倒计时颜色
 */
@property (nonatomic, strong) UIColor *timeColor;

/**
 是否开启倒计时触控事件
 */
@property (nonatomic, assign) BOOL needActive;

/**
 是否需要底部商家标识文案
 */
@property (nonatomic, assign) BOOL isNeedBusiness;

/**
 底部商家文案
 */
@property (nonatomic, strong) NSString *businessText;

/**
 文案颜色
 */
@property (nonatomic, strong) UIColor *businessColor;

/**
 是否需要图片触控事件
 */
@property (nonatomic, assign) BOOL needTouch;

+(instancetype)commonConfig;

@end

