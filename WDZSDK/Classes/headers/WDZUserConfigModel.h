//
//  WDZUserConfigModel.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 2017/9/13.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseModel.h"

@interface WDZUserConfigModel : NSObject

/**
 是否开启巡店小视频
 */
@property (nonatomic , assign)BOOL isVideoAllowed;
/**
 id  企业id
 */
@property (nonatomic , assign)NSInteger UserConfigModelId;

/**
 posWay pos对接方式
 */
@property (nonatomic , retain)NSString *posWay;

/**
 signScope 签到范围（100m 300m 500m)
 */
@property (nonatomic , copy)NSString *signScope;

/**
 pages 广告页面是否加入广告链接
 */
@property (nonatomic , assign)NSInteger pages;


/**
 subtitlePosition  字幕位置(左上 左下 右上  右下)
 */
@property (nonatomic , retain)NSString *subtitlePosition;

/**
 videoRes  视频分辨率 (高清 超清)
 */
@property (nonatomic , retain)NSString *videoRes;

/**
 videoResolution  视频分辨率
 */
@property (nonatomic , retain)NSString *videoResolution;

/**
 siteTour 现场巡店
 */
@property (nonatomic , retain)NSString *siteTour;

/**
 pageUrl 广告页面链接
 */
@property (nonatomic , retain)NSString *pageUrl;

/**
 passwordLevel  密码强度 （低 中 高）
 */
@property (nonatomic , assign)NSInteger passwordLevel;

/**keyframeInterval  关键帧间隔*/
@property (nonatomic , assign)NSInteger keyframeInterval;

/**frameRate帧率*/
@property (nonatomic , assign)NSInteger frameRate;

/**
 roundInterval  轮训间隔
 */
@property (nonatomic , retain)NSString *roundInterval;

/**
 groupId  企业id
 */
@property (nonatomic , assign)NSInteger groupId;

/**
 bitRate  比特率
 */
@property (nonatomic , assign)NSInteger bitRate;
/**
 remoteTour  远程巡店
 */
@property (nonatomic , retain)NSString *remoteTour;
/**verifyWay  验证方式 （单次  双重*/
@property (nonatomic , assign)NSInteger verifyWay;

/**是否开启了拍照签到    0 不开启  1开启*/
@property (nonatomic , retain)NSString *photoSign;
/**
 是否开启了现场巡店定位
 */
@property (nonatomic , retain)NSString *isFixPosition;

/**
 是否开启了自定义分数  0 否 1是
 */
@property (nonatomic , retain)NSString *isConfigScore;
/**
 是否开启 合格检查项自定义分数 0否 1是
 */
@property (nonatomic , assign)BOOL isConfigScoreRight;
/**
 巡店是否需要提交签名 0否 1是
 */
@property (nonatomic , assign)BOOL isSign;
/**
 提交的巡店报告是否需要审核
 */
@property (nonatomic , assign)BOOL isApproval;
/*
 是否允许现场拍照
 */
@property (nonatomic, assign) BOOL isOnlyLivePhoto;

/**
 是否有巡店总结栏
 */
@property (nonatomic, assign) BOOL isSummary;

/**
 是否开启了仅支持巡店模板选择
 */
@property (nonatomic, assign) BOOL isTemplatePrivilege;

@end
