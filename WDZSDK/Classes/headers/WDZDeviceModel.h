//
//  WDZDeviceModel.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/5/10.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZVideoModel.h"


@interface WDZDeviceModel : NSObject

@property (nonatomic , retain)NSString *pMac;
/**
 是否需要更新
 */
@property (nonatomic , assign)BOOL isNeedUpload;
@property (nonatomic , assign)CGFloat cellHeight;
/**
 设备类型枚举
 */
@property (nonatomic , assign)WDZDeviceModelType modelType;

/**
 mac地址
 */
@property (nonatomic , retain)NSString *mac;
@property (nonatomic , retain)NSString *speed;
@property (nonatomic , retain)NSString *width;
/**
 id
 */
@property (nonatomic , retain)NSString *ID;
@property (nonatomic , retain)NSString *isDelete;
/**
 工作开始时间
 */
@property (nonatomic , retain)NSString *startTime;
@property (nonatomic , retain)NSString *capability;
/**
 视频在线状态，false:不在线   true:在线
 */
@property (nonatomic , retain)NSString *onlineOnPlatform;
@property (nonatomic , retain)NSString *isOfflineAlertEnable;
@property (nonatomic , retain)NSString *descripTion;//
/**
 当前版本
 */
@property (nonatomic , retain)NSString *version;
/**
 平台地址
 */
@property (nonatomic , retain)NSString *platformAddress;
@property (nonatomic , retain)NSString *tsRecordPlay;
@property (nonatomic , retain)NSString *positionx;
@property (nonatomic , retain)NSString *depName;
/**
 设备分类  1：IPC  2：NVR 3:客流设备  4:客流BOX 5:热点分析  6:热点BOX  7:PC4  8:智能BOX（支持客流、热点）  9:智能设备(挂在智能BOX下的设备) 10:OVOSTATION
 */
@property (nonatomic , retain)NSString *dType;
/**
 工作结束时间
 */
@property (nonatomic , retain)NSString *endTime;
@property (nonatomic , retain)NSString *createId;
/**
 门店ID
 */
@property (nonatomic , retain)NSString *depId;
@property (nonatomic , retain)NSString *puid;
/**
 父设备ID
 */
@property (nonatomic , retain)NSString *pId;
@property (nonatomic , retain)NSString *urlIndex;
@property (nonatomic , retain)NSString *lastSyncTime;
/**
 最新版本（和当前版本不一致时可升级）
 */
@property (nonatomic , retain)NSString *latestVersion;
/**
 子设备列表
 */
@property (nonatomic , retain)NSArray *deviceStatusLst;
@property (nonatomic , retain)NSString *height;
/**
 0:设备状态正常  1:设备不可用（超过限制）
 */
@property (nonatomic , retain)NSString *isHidden;
/**
 双网卡时有第二个mac地址
 */
@property (nonatomic , retain)NSString *mac1;
/**
 设备型号
 */
@property (nonatomic , retain)NSString *deviceType;
/**
 网管在线状态   0:不在线   1:在线
 */
@property (nonatomic , retain)NSString *online;
@property (nonatomic , retain)NSString *positiony;
/**
 status == 1 时候是正在升级
 */
@property (nonatomic , retain)NSString *status;
@property (nonatomic , retain)NSString *record;
@property (nonatomic , retain)NSString *upgradeTime;
@property (nonatomic , retain)NSString *extendCapacity;
@property (nonatomic , retain)NSString *ability;
/**
 接入方式 0:注册  1:VSIP  2:ONVIF
 */
@property (nonatomic , retain)NSString *accessType;
@property (nonatomic , retain)NSString *rtspChnid;
@property (nonatomic , retain)NSString *groupId;
/**
 入网时间
 */
@property (nonatomic , retain)NSString *createTime;
/**
 设备名称
 */
@property (nonatomic , retain)NSString *deviceName;
@property (nonatomic , retain)NSString *alarmEnable;
@property (nonatomic , retain)NSString *channels;
@property (nonatomic , retain)NSString *areaName;
/**
 通道ID
 */
@property (nonatomic , retain)NSString *channelId;
/**
 设备ID
 */
@property (nonatomic , retain)NSString *deviceIp;
@property (nonatomic , retain)NSString *passwd;
@property (nonatomic , retain)NSString *phone;
/**
 平台ID
 */
@property (nonatomic , retain)NSString *platformId;
@property (nonatomic , retain)NSString *areaId;
@property (nonatomic , retain)NSString *contactor;

@end
