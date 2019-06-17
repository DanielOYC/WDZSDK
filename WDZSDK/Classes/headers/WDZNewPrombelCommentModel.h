//
//  WDZNewPrombelCommentModel.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
//图片
@class WDZOperateSatus,WDZOperateType;

@interface WDZNewPrombelPictureInfoModel: NSObject
@property (nonatomic, strong) NSString *deviceDo;
@property (nonatomic, strong) NSString *deviceId;
@property (nonatomic, strong) NSString *picUrl;
@property (nonatomic, strong) NSString *ID;
@property (nonatomic, assign) BOOL  isOverdue;
@property (nonatomic, strong) NSString *thumbUrl;
@property (nonatomic, strong) NSString *departmentDo;
@property (nonatomic, strong) NSString *path;
@property (nonatomic, strong) NSString *videoTime;
@property (nonatomic, strong) NSString *attachType;
@end

@interface WDZNewPrombelOperateModel: NSObject
@property (nonatomic, assign) int operateType;
@property (nonatomic, assign) int operateSatus;
@property (nonatomic, strong) NSString *targetUserId;
@property (nonatomic, strong) NSString *targetUserName;
@property (nonatomic, strong) NSString *operateDesc;

- (NSString *)getOperateTypeStr;
-(UIColor *)getOperateTypeColor;
-(UIColor *)getOperateSatusColor;
-(NSString *)getOperateSatusStr;

@end

@interface WDZNewPrombelCommentModel : NSObject
@property (nonatomic, assign) BOOL isRead;
@property (nonatomic, strong) NSString *content;
@property (nonatomic, assign) int operateSatus;
@property (nonatomic, strong) NSString *showCreateTime;
@property (nonatomic, strong) NSArray<WDZNewPrombelOperateModel *> *operateDos;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, assign) int operateType;
@property (nonatomic, strong) NSArray<WDZNewPrombelPictureInfoModel *> *pictureInfoDos;
@property (nonatomic, strong) NSString *dialogId;
@end
