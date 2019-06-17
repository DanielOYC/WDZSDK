//
//  WDZUserModel.h
//  WDZStore
//
//  Created by 郑来贤 on 14-9-23.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

typedef enum
{
    WDZ_USER_PERSONAL,
    WDZ_USER_COMPANY
} WDZ_USER_TYPE;

typedef enum
{
    UserCheckTypeChecker = 0,
    UserCheckTypeManager,
    UserCheckTypeAdministrator
} UserCheckType;

#import <UIKit/UIKit.h>
#import "WDZBaseModel.h"
#import "WDZUserConfigModel.h"
#import "WDZUserPrivilege.h"

@class WDZUserModel;
@class WDZUserModelList;
UIKIT_EXTERN NSString *const WDZUserDidRequestUserSuccessNoti;
UIKIT_EXTERN NSString *const WDZUserDidRequestToCopysSuccessNoti;

@interface WDZUserModel : NSObject <NSCopying>

@property (nonatomic , retain)WDZUserConfigModel *configModel;

/**
 腾讯云注册 ID(需特别注意,大部分接口没有返回,如需返回,请联系后台添加)
 */
@property (nonatomic , retain)NSString *tlsName;

/**
 最新的版本，内有APPType和版本号
 */
@property (nonatomic , retain)NSDictionary *ignoreVersionDic;
/**
 groupName
 */
@property (nonatomic, strong) NSString *groupName;
/**
 app进入后台是否需要停止视频
 */
@property (nonatomic, assign) BOOL isNeedStopVideo;

/**
 isLogin,记录用户是否是登陆状态，
 return yes or no
 */
@property (assign , nonatomic) BOOL isLogin;

//时间戳，清除缓存
@property (copy , nonatomic)NSString *version;
/**
 检查用户的账号是否已经注册过，
 return yes or no
 */
@property (assign , nonatomic) BOOL isRegistered;

@property (assign , nonatomic) int groupId;

// 签到，企业是否允许手动补拍
@property (assign, nonatomic) NSInteger isSelfie;

/**用户的账号/emial*/
@property (copy , nonatomic) NSString *userAccount;
/**
 用户的密码
 */
@property (copy , nonatomic) NSString *userPassword;
/**
 用户头像地址url
 */
@property (copy , nonatomic) NSString *userThumbUrl;
/**
 用户token
 */
@property (copy , nonatomic) NSString *token;
/**
 用户地址
 */
@property (copy , nonatomic) NSString *address;

@property (copy , nonatomic) NSString *email;
/**
 用户个性签名
 */
@property (copy , nonatomic) NSString *userSignature;
/**
 用户电话
 */
@property (copy , nonatomic) NSString *telephone;
/**
 用户账号的id
 */
@property (copy , nonatomic) NSString *userID;

/**
 用户账号的类型(0 personal,1 company)
 */
@property (assign , nonatomic)  WDZ_USER_TYPE userType;
/**
 用户资料是否完整
 */
@property (assign , nonatomic) BOOL userInfoIsUnabridged;
/**
 账号是否已经激活过
 */
@property (assign , nonatomic)  BOOL isActivated;
/**
 用户的关注数
 */
@property (copy , nonatomic)  NSString *follows;

/**
 用户的粉丝数
 */
@property (copy , nonatomic)  NSString *fans;

/**
 分享的视频数量
 */
@property (copy , nonatomic)  NSString *shares;
/**
 该用户是否被我关注
 */
@property (assign , nonatomic)  BOOL isFollowed;

@property (copy , nonatomic)  NSString *showName;

@property (assign , nonatomic)  BOOL  selected;

@property (nonatomic , retain)NSString *shortName;
/**
 直播Live 用于标记该用户是否在此房间内
 */
@property (nonatomic, assign) BOOL isInRoom;
/**
 checkType //0为点检员 1门店经理 2管理员
 */
@property (assign , nonatomic)  UserCheckType checkType;
@property (copy , nonatomic) NSString *shops;
@property (copy , nonatomic) NSString *favorShops;
@property (copy , nonatomic) NSString *favorDevices;

/**
点检未完成条数
 */
@property (copy , nonatomic) NSString *unFinishCheckRecodeNum;
/**
 代办单未完成条数
 */
@property (copy , nonatomic) NSString *unFinishProblemsNum;
/**
 警告未完成条数
 */
@property (nonatomic, copy) NSString *alertCount;
/**
 积分未完成条数
 */
@property (nonatomic, copy) NSString *scoreCount;
/**
 工作圈未完成数
 */
@property (nonatomic, copy) NSString *handoverBookCount;
/**
 掌上学院未完成数
 */
@property (nonatomic, copy) NSString *collegeCount;
/**
 顾客反馈未完成数
 */
@property (nonatomic, copy) NSString *customerFeedbackCount;

@property (nonatomic, copy) NSString *messageunreadTotal;

/**
 通讯录电话号码
 */
@property (nonatomic, copy) NSString *contactTelPhone;
/**
 权限数组
 */
@property (nonatomic, strong) NSArray *privileges;
// 签到是否必须有图片
@property (nonatomic, assign) BOOL isSignPicture;

// 任务台历待办数
@property (copy, nonatomic) NSString *taskCalendarCount;

// 表示用户身份，-4高管，-3督导，-2店长
@property (assign, nonatomic) NSInteger gradeId;


@end


typedef void(^getDealUserBlock)(BOOL isSuccess,NSArray *userDics,WDZUserModelList *users,NSError *error);
@interface WDZUserModelList : WDZBaseModel

// 用于搜索用， 这个保存一根原始数据，不搜索时候返回
@property (strong , nonatomic)  NSArray  *allUsers;

@end
