//
//  WDZCreateIssueModel.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/7/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModelHeader.h"

typedef NS_ENUM(NSInteger, WDZIssueSourceType) {
    
    WDZIssueSourceTypePointCheck           = 1,//点检
    WDZIssueSourceTypeShake                = 2,//摇一摇
    WDZIssueSourceTypePicShot              = 3,//图片抓拍
    WDZIssueSourceTypeManual               = 4,//手动创建问题
    WDZIssueSourceTypeOnlineCheck          = 5,//在线考评
    WDZIssueSourceTypeSnapshots            = 6,//快拍
    WDZIssueSourceTypeAlarm                = 7,//告警
    WDZIssueSourceTypeOnsitePatrolShop     = 8, //现场巡店
    WDZIssueSourceTypeRemotePatrolShop     = 9,//远程巡店
};

@interface WDZCreateIssueAttachModel : NSObject

// 附件类型，0 图片，1视频,必传
@property (assign, nonatomic) NSInteger attachType;
// 图片url或 视频url，必传
@property (copy, nonatomic) NSString *url;
// 缩略图，为视频时传
@property (copy, nonatomic) NSString *thumbUrl;
// 附件大小
@property (assign, nonatomic) NSInteger size;
// 视频时长
@property (assign, nonatomic) NSInteger videoTime;
// 图片对象，用于外部发送到问题，无法拿到图片URL
@property (strong, nonatomic) UIImage *image;


@end

@interface WDZCreateIssueModel : NSObject

// 问题类型,必传
@property (assign, nonatomic) WDZIssueSourceType issueType;

// 选中的门店,可选
@property (strong, nonatomic) WDZShopModel *selectedShop;

// 处理人，单选，可选
@property (strong, nonatomic) WDZUserModel *executorUser;

// 到期时间，yyyy-MM-dd,可选，默认3天后
@property (copy, nonatomic) NSString *expiredTime;

// 抄送人，多选。可选
@property (strong, nonatomic) NSArray <WDZUserModel *> *CCUsers;

////// 要上传的图片，可选
//@property (strong, nonatomic) NSArray <UIImage *> *toUploadPictures;

// 附件数组
@property (strong, nonatomic) NSArray <WDZCreateIssueAttachModel *> *attachArr;

// 问题名称，可选
@property (copy, nonatomic) NSString *issueName;

// 是否可以更改门店,默认为YES
@property (assign, nonatomic) BOOL shouldChangeShop;

// 是否显示下载按钮,默认不显示
@property (assign, nonatomic) BOOL isShowDownloadBtn;

// 问题评论,可选
@property (copy, nonatomic) NSString *issueRemark;

// 细则，可选
@property (copy, nonatomic) NSString *detailedRuleIds;

// 小项IDs
@property (copy, nonatomic) NSString *problemClassifyId;

//模板 ID(提交模板的检查项的时候,必传)
@property (copy, nonatomic) NSString *checkTemplateId;

// picID, 此ID貌似可以用来在待办里面跳转到播放界面
@property (copy, nonatomic) NSString *picID;

// 报警ID,可选
@property (copy, nonatomic) NSString *alarmID;

@property (retain , nonatomic) NSString *deviceId;


@end
