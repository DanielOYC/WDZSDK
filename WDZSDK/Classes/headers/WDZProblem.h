//
//  WDZProblem.h
//  WDZStore
//
//  Created by 郑来贤 on 15/4/21.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import "WDZBaseModel.h"
#import "WDZBackLogRequestParams.h"
#import "BaseModelHeader.h"
#pragma mark --- noti

UIKIT_EXTERN NSString *const  WDZProblemSaveSuccessNoti;

@class WDZProblemList;
@class WDZProblem;
@class WDZProblemCategory;
@class WDZVideoModel;
@class WDZProblemState;
@class WDZOperateSatus;
@class WDZOperateType;
@class WDZRemark;

typedef NS_ENUM(NSInteger, WDZProblemSourceType) {
    WDZProblemSourceTypePointCheck = 1,//点检
    WDZProblemSourceTypeShake = 2,//摇一摇
    WDZProblemSourceTypePicShot = 3,//图片抓拍
    WDZProblemSourceTypeManual = 4,//手动创建问题
    WDZProblemSourceTypeOnlineCheck = 5,//在线考评
    WDZProblemSourceTypeSnapshots = 6,//快拍
    WDZProblemSourceTypeAlarm = 7,//告警
    WDZProblemSourceTypeOnsitePatrolShop  = 8, //现场巡店
    WDZProblemSourceTypeRemotePatrolShop = 9,//远程巡店
    
};
@interface WDZProblem : WDZBaseModel

/*
 更换成多图片选择器
 */
//存放images的数组
@property (strong , nonatomic)NSMutableArray *imageArray;
/**
 新
 代办单详情  顶部图片l轮播模型数据
 */
@property (nonatomic, strong) NSMutableArray *scrollPicArray;

/**
 缩略图
 */
@property (strong , nonatomic)NSMutableArray *thumbArray;

/*
 提交评论的images
 */
@property (strong , nonatomic)NSArray *temps;

// 新增的属性（新功能的需要）
@property (assign, nonatomic) BOOL canShowDownLoadButton;

//何剑锋的接口
@property (strong , nonatomic) NSString *pic_id;
@property (strong , nonatomic) NSString *name;
@property (strong , nonatomic) NSURL    *coverUrl;
@property (strong , nonatomic) UIImage  *coverImage;
@property (retain , nonatomic) NSString *deviceId;
@property (assign , nonatomic) int       state;

//抓拍失败的个数
@property (strong , nonatomic) NSString *failCount;

//黄林涛的接口
@property (strong , nonatomic) NSString  *createrName;
@property (strong , nonatomic) NSString  *createrID;
@property (strong , nonatomic) NSString  *createrTime;
@property (strong , nonatomic) NSString  *shopName;
@property (strong , nonatomic) NSString  *shopname;
@property (strong , nonatomic) NSString *shopId;

@property (strong , nonatomic) NSString  *pro_id;
@property (assign , nonatomic) BOOL      isOperate;
@property (strong , nonatomic) NSURL     *pictureUrl;
@property (strong , nonatomic) NSString  *problemName;
@property (assign , nonatomic) WDZProblemSourceType  sourceType;
@property (nonatomic, strong) NSDictionary *sourceTypeDict;
@property (strong , nonatomic) NSString  *toUserId;
@property (strong , nonatomic) NSString  *fromUserId;

@property (strong , nonatomic) NSArray   *checkUnitModels;

@property (strong , nonatomic) WDZProblemState *problemStatus;

@property (assign , nonatomic) int presetId;

// 问题的分类
@property (strong , nonatomic) WDZProblemCategory *category;
// 问题的描述
@property (strong , nonatomic) NSMutableArray *remarkArr;
//新的问题描述
@property (strong , nonatomic) NSString * problemDescription;
@property (nonatomic, strong) NSMutableAttributedString *problemDesAtt;
//新问题描述UI展开高度
@property (nonatomic, assign) CGFloat problemDesHeight;
//新问题分类UI展开高度
@property (nonatomic, assign) CGFloat probelCategoryHeight;
@property (nonatomic, strong) NSMutableAttributedString *problemCategoryAtt;
@property (nonatomic, assign) BOOL canShowDes;

@property (strong , nonatomic) WDZShopModel *shop;

@property (strong , nonatomic) WDZVideoModel *video;

@property (strong , nonatomic) WDZUserModel *toUser;

@property (strong , nonatomic) NSMutableArray *toUsers;

@property (strong , nonatomic) NSMutableArray *toCopys;

@property (strong , nonatomic) WDZUserModel *creater;

@property (assign , nonatomic) BOOL hasSuccessRequstProblemDetail;
// 0: 未过期 1:已过期
@property (assign , nonatomic) BOOL isInvalid;
@property (strong , nonatomic) NSString *endTime;
@property (strong , nonatomic) WDZOperateSatus *operateSatus;
@property (strong , nonatomic) WDZOperateType *operateType;
@property (strong , nonatomic) NSString *alarmID;
@property (strong , nonatomic)NSMutableArray *deviceIDMuArray;

//细则
@property (strong , nonatomic) NSMutableArray *detailedRulesArr;

/**
 待办单cell高度
 */
@property (nonatomic, assign) CGFloat cellHeight;

/**
 待办单改版:保存对象在列表中的位置
 */
@property (nonatomic, assign) NSIndexPath *indexPath;


/**新待办单字段*/
/**
 创建时间
 */
@property (nonatomic, assign) NSString *createTimeShow;

@property (nonatomic, strong) WDZRemark *remark;
/**
 抄送人人ids
 */
@property (nonatomic, strong) NSString *cToIDs;

/**
 抄送人姓名
 */
@property (nonatomic, strong) NSString *cToNames;

/**
 新增 更加详细的字段名  yyyy-MM-dd HH:mm:ss
 */
@property (nonatomic, strong) NSString *createTimeDetail;

/**
 是否已读
 */
@property (nonatomic, assign) BOOL readOrNot;

/**
 代办单优化
 */
@property (nonatomic, strong) NSMutableArray *ProblemCommentArray;


/**
 代办单详情，获取问题类型
 */
-(NSString *)getProblemTypeStr;

/**
 代办单详情  整改操作
 isReject： YES : 整改不通过
 NO:  整改通过
 */
-(void)setProblemHandleStatsIsReject:(BOOL)isReject;

/**
 获取最新状态
 */
-(void)getNowState;

@end

/**
 最近一条节点数据
 */
@interface WDZRemark : NSObject

/**
 流程数
 */
@property (nonatomic, assign) NSInteger dialogCount;

/**
 最后一条时间
 */
@property (nonatomic, copy) NSString *showCreateTime;

/**
 操作
 */
@property (nonatomic, strong) NSString *operateDesc;

/**
 转发给 (如果转发，转发的目标人)
 */
@property (nonatomic, strong) NSString *targetUserName;

/**
 操作状态
 */
@property (nonatomic, strong) NSString *operateType;

/**
 最后一个节点的处理人
 */
@property (nonatomic, strong) NSString *username;

/**
 是否是处理人，不然未处理人
 */
@property (nonatomic, assign) BOOL isCreater;

//业务标记  用于计算行高
/**
 是否有抄送人
 */
@property (nonatomic, assign) BOOL hasCopiedToPerson;

/**
 是否抄送给我
 */
@property (nonatomic, assign) BOOL hasCopedToMe;

@end

@interface WDZProblemList : WDZBaseModel

//
@property (strong , nonatomic) NSString *currentIndex;

//当前用户拥有的设备数量
@property (strong , nonatomic) NSString *devicesOfUser;

//当前用户拥有的设备数量的在线数量
@property (strong , nonatomic) NSString *onlineDevicesOfUser;


@end


@interface WDZProblemState : NSObject

@property (strong , nonatomic) NSString *name;
@property (strong , nonatomic) UIColor   *color;
@property (assign , nonatomic) int type;

- (instancetype)initWithStatus:(int)status;

@end
@interface WDZOperateType : NSObject

@property (strong , nonatomic) NSString *name;
@property (strong , nonatomic) UIColor   *color;
@property (assign , nonatomic) int type;

- (instancetype)initWithStatus:(int)status;

@end

@interface WDZOperateSatus : NSObject
@property (strong , nonatomic) NSString *name;
@property (strong , nonatomic) UIColor   *color;
@property (assign , nonatomic) int type;

- (instancetype)initWithStatus:(int)status;

@end

UIKIT_EXTERN NSString *const WDZProblemCategoryChangedNoti;

@interface WDZProblemCategory : WDZBaseModel

@property (strong , nonatomic) NSString *ID;

@property (strong , nonatomic) NSString *name;

@property (assign , nonatomic) BOOL isSelected;


@end


@class WDZProblemCategoryList;
typedef void(^getProblemCategorysBlock)(BOOL isSuccess,WDZProblemCategoryList *categories,NSError *error);

@interface WDZProblemCategoryList : WDZBaseModel


@end
