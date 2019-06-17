//
//  WDZMPlaySettingModel.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/5/24.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>


#define settingTitle   @"settingTitle"
#define settingType    @"settingType"
#define settingContent @"settingContent"

#define typeChoose @"typeChoose"
#define typeSwitch @"typeSwitch"
#define typeImage @"typeImage"
#define typeSlide @"typeSlide"

#define shebeimingcheng @"shebeimingcheng"
#define zimuneirong @"zimuneirong"
#define fenbianlv @"fenbianlv"
#define bitelv @"bitelv"
#define bianmazhenlv @"bianmazhenlv"
#define guanjianzhenjiange @"guanjianzhenjiange"

#define chooseContent @"chooseContent"

#define ep_value         @"ep.value"
#define ep_malv         @"ep.malv"
#define ep_zhenlv          @"ep.zhenlv"
#define ep_guanjianzhen    @"ep.guanjianzhen"
#define ep_mpvalue    @"ep.mpvalue"
#define ep_dumbstate    @"ep.dumbstate"





@class resolutionModel;

@interface WDZMPlaySettingModel : NSObject

/**
 字幕
 */
@property (nonatomic , strong)NSString *subtitles;
/**
 是否支持字幕
 */
@property (nonatomic , assign)BOOL supportModify;
/**
 码率/比特率
 */
@property (nonatomic , strong)NSString *malv;

/**
 声音状态，1：静音，0：开启音频
 */
@property (nonatomic , strong)NSString *dumbstate;

/**
编码帧率，关键帧间隔 = 关键帧 / 帧率
 */
@property (nonatomic , strong)NSString *zhenlv;

/**
 关键帧
 */
@property (nonatomic , strong)NSString *guanjianzhen;

/**
 画面质量
 */
@property (nonatomic , strong)NSString *mpvalue;

/**
 设备支持的分辨率列表
 */
@property (nonatomic , strong)NSArray<resolutionModel*> *supportResolution;

/**
 分辨率信息
 */
@property (nonatomic , strong)resolutionModel *resolution;



@property (nonatomic , strong)NSString *saturation;

@property (nonatomic , strong)NSString *sendNum;

@property (nonatomic , strong)NSString *sendTime;

@property (nonatomic , strong)NSString *dynamicValue;

@property (nonatomic , strong)NSString *maxqt;

@property (nonatomic , strong)NSString *brightness;

@property (nonatomic , strong)NSString *contrast;

@property (nonatomic , strong)NSString *minqt;

@property (nonatomic , strong)NSString *volume;

@property (nonatomic , strong)NSString *value;

@property (nonatomic , strong)NSMutableDictionary *pushDict;

@end


#pragma mark - 分辨率
@interface resolutionModel : NSObject

@property (nonatomic , strong)NSString *ID;

@property (nonatomic , strong)NSString *height;

@property (nonatomic , strong)NSString *name;

@property (nonatomic , strong)NSString *width;

@end
