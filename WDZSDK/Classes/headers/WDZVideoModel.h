//
//  WDZDeviceInfoMode.h
//  WDZStore
//
//  Created by 郑来贤 on 14-4-11.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "WDZBaseModel.h"
#import "WDZShopModel.h"
#import "WDZUlucuCamera.h"

@class WDZVideoModeList;
@class Location;

typedef NS_ENUM (NSInteger, WDZDeviceModelType)   {
    WDZDeviceModelType_IPC = 1,//IPC  支持设备退网、设备重启、
    WDZDeviceModelType_NVR = 2,//NVR  支持升级、设备退网、设备关联
    WDZDeviceModelType_CUSTOMDEVICE = 3,//客流设备
    WDZDeviceModelType_CUSTOMBOX = 4,//客流BOX
    WDZDeviceModelType_HOTDEVICE = 5,//热点设备
    WDZDeviceModelType_HOTBOX = 6,//热点BOX
    WDZDeviceModelType_PC4 = 7,//PC4
    WDZDeviceModelType_LIFENCEBOX = 8,//智能BOX（支持客流、热点）
    WDZDeviceModelType_LIGENCEDEVICE = 9,//智能设备（挂在智能BOX下的设备）
    WDZDeviceModelType_OVOSTATION = 10,//OVOSTATION
};
typedef enum {
    Node =0,
    Device
} NodeType;

typedef enum {
    Device_OffLine =0,
    Device_OnLine
} DeviceStatus;

typedef void(^WDZVideoModeListGetVideoListBlock)(BOOL isSuccess,WDZVideoModeList *videoModelList,NSError *error);
typedef void(^WDZVideoModelAddDeviceBlock)(BOOL isSuccess,NSError *error);
typedef void(^setDeviceThumbBlock)(BOOL isSuccess,NSError *error);
typedef void(^deleteDeviceBlock)(BOOL isSuccess,NSError *error);
typedef void(^addDevicePlayPasswordBlock)(BOOL isSuccess,NSError *error);
typedef void(^cancleDevicePlayPasswordBlock)(BOOL isSuccess,NSError *error);
typedef void(^checkDevicePlayPasswordBlock)(BOOL isSuccess, BOOL isRight,NSError *error);
typedef void(^setUploadProgressBlock)(NSUInteger bytesWritten, long long totalBytesWritten, long long totalBytesExpectedToWrite);
typedef void(^setDeviceLocation)(BOOL isSuccess,NSError *error);
typedef void(^setDeviceNameBlock)(BOOL isSuccess,NSError *error);
typedef void(^setDeviceSubNameBlock)(BOOL isSuccess,NSError *error);
typedef void(^setDeviceResolutionBlock)(BOOL isSuccess,NSError *error);
typedef void(^setAudioStateBlock)(BOOL isSuccess,NSError *error);
typedef void(^shotPicBlock)(BOOL isSuccess,NSDictionary *picDic,NSError *error);
typedef void(^getShotPicsBlock)(BOOL isSuccess,NSArray *picUrls,NSError *error);
typedef void(^collectionVideoBlock)(BOOL isSuccess,NSError *error);

typedef void(^getVideoDevicePresetBlock)(BOOL isSuccess,NSArray *dataArray,NSError *error);

typedef void(^getvideoosdBlock)(BOOL isSuccess,NSString *name,NSError *error);

// device
@interface WDZVideoModel : WDZBaseModel <NSCoding>

@property (nonatomic, assign) NSInteger videoViewCount;

@property (nonatomic,getter=isSelected) BOOL selected;

@property (nonatomic, strong) WDZShopModel *shopModel;
/**
 NVR的Mac
 */
@property (nonatomic , retain)NSString *pMac;

/**
 是否允许音频
 */
@property (nonatomic, assign) BOOL isStopAudio;

/**
 是否是收藏界面进入，默认不是 业务标志位
 */
@property (nonatomic, assign) BOOL isCollectionEntry;

/**
 店面的ID
 */
@property (strong , nonatomic) NSString *ID;
@property (strong , nonatomic) NSString *videoImageStr;


/**
 节点类型
 return node or device
 */
@property (assign , nonatomic) NodeType type;
/**
 节点名称
 return node_name or device_name
 */
@property (strong , nonatomic) NSString *name;

/**
 
 video source channel_id
 */
@property (strong , nonatomic) NSString *vsc;

/**
 节点的子节点个数
 */
@property (strong , nonatomic) NSString *child;
//在线状态，1表示在线，0表示不在线
/**
 设备的状态
 return  DeviceStatus
 */
@property (assign , nonatomic) DeviceStatus status;
/**
 播放的puid
 */
@property (strong , nonatomic) NSString *puid;
/**
 高清播放的频道ID
 */
@property (strong , nonatomic) NSString *channel_id;
/**
 流畅播放的频道ID
 */
@property (strong , nonatomic) NSString *slaveChannel_id;

/**
 播放的移动服务器IP
 */

@property (strong , nonatomic) NSString *mediaServerIp;

/**
 移动服务器端口号
 */

@property (strong , nonatomic) NSString *mediaServerPort;

/**
 移动服务器用户名
 */
@property (strong , nonatomic) NSString *mediaServerUser;

/**
 移动服务器密码(加密)
 */
@property (strong , nonatomic) NSString *mediaServerPasswd;

/**
 缩略图URL（无缩略图返回默认缩略图）
 */
@property (strong , nonatomic) NSURL *thumbUrl;

/**
 设备的UUID 用于添加设备用
 */
@property (strong , nonatomic) NSString *deviceUUID;

/**
 是否可以ptz
 */
@property (assign , nonatomic) BOOL ptzEnable;

/**
 是否可以ptz
 */
@property (assign , nonatomic) BOOL audioEnable;


/**
 下级目录是设备
 */
@property (assign , nonatomic) BOOL nextIsDeviceList;

@property (assign , nonatomic) long commentsCount;

@property (assign , nonatomic) long collectionsCount;

@property (strong , nonatomic) Location *location;

/**
 *  音频状态，0表示关，1表示开
 */
@property (assign , nonatomic) BOOL audioState;
+ (NSArray *)videoResolutionArrays;
@property (assign , nonatomic) BOOL isSlave;
/**
 *获取设备预置位信息的端口
 */
@property (strong , nonatomic) NSString *wayServerPort;
/**
 *获取设备预置位信息的IP
 */
@property (strong , nonatomic) NSString *wayServerID;

/**
 *设备是否已经收藏
 */
@property (assign , nonatomic) BOOL isCollection;

/**
 *设备分享人得ID
 */
@property (strong , nonatomic) NSString *sharerID;

/**
 *观看是否需要密码
 */
@property (assign , nonatomic) BOOL needPasswd;

/**
 *设备的电话
 */
@property (strong , nonatomic) NSString *phone;


/**
 是否支持语音对讲
 */
@property (assign , nonatomic)BOOL audioCallEnable;

@property (assign , nonatomic) BOOL settingEnable;


/**
 监控的流url
 */
@property (nonatomic, copy) NSString *url;

/**
 辅流url
 */
@property (nonatomic, copy) NSString *slaveUrl;

@property (strong , nonatomic) NSArray  *shotPics;

@property (assign , nonatomic) int presetNo;

@property (nonatomic , retain)NSMutableArray *deviceArray;


#pragma mark----------设备管理新增----------
/**
 最新版本
 */
@property (nonatomic , retain)NSString *latestVersion;
/**
 当前版本
 */
@property (nonatomic , retain)NSString *version;
/**
 是否显示可升级
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
/**
 父设备ID
 */
@property (nonatomic , retain)NSString *pId;
@property (nonatomic , retain)NSString *urlIndex;
@property (nonatomic , retain)NSString *lastSyncTime;
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
/**
 平台ID
 */
@property (nonatomic , retain)NSString *platformId;
@property (nonatomic , retain)NSString *areaId;
/**
 店长
 */
@property (nonatomic , retain)NSString *contactor;

/**第三方设备类型*/
@property (nonatomic, assign) NSInteger thirdpartType;

@property (nonatomic, strong) WDZUlucuCamera *deviceToken;

@end

@interface Location : WDZBaseModel

/**
 设备的经,维 度
 */
@property (assign , nonatomic) CGFloat latitude;

/**
 *设备的维度
 */
@property (assign , nonatomic) CGFloat longitude;

/**
 *设备的地理位置名称
 */
@property (strong , nonatomic) NSString *content;


@end




@interface WDZVideoModeList : WDZBaseModel


@end
