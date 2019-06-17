//
//  WDZNewProblemCommentFrameModel.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
/*
 dbd_icon_status_by 完成
 dbd_icon_status_current 正在执行
 dbd_icon_status_past 已执行
 dbd_icon_status_point  小步骤
 */

typedef enum : NSUInteger {
    WDZNewProblemDetailStepTypeFinish = 0,
    WDZNewProblemDetailStepTypeGoing = 1,
    WDZNewProblemDetailStepTypeNormal = 3,
    WDZNewProblemDetailStepTypeSub = 4
} WDZNewProblemDetailStepType;

@class WDZNewPrombelCommentModel;

@interface WDZNewProblemCommentFrameModel : NSObject


@property (nonatomic, strong) WDZNewPrombelCommentModel *model;

#pragma 布局
@property (nonatomic, assign) CGFloat cellHeight;

@property (nonatomic, assign) CGRect checkFrame;
@property (nonatomic, assign) CGRect handleFrame;
@property (nonatomic, assign) CGRect commentFrame;

@property (nonatomic, assign) CGFloat commentImgsHeight;

@property (nonatomic, assign) BOOL isShowCheck;
@property (nonatomic, assign) BOOL isShowHandle;
@property (nonatomic, assign) BOOL isShowComment;

#pragma 数据
//问题审核者
@property (nonatomic, strong) NSString *creater;
//时间
@property (nonatomic, strong) NSString *createTime;
//时间用于排序
@property (nonatomic, assign) NSInteger timeInteger;
//处理 (整改结果 + 抄送)
@property (nonatomic, strong) NSMutableAttributedString *handlerAtt;
//转发
@property (nonatomic, strong) NSMutableAttributedString *transmitAtt;
//评论人员
@property (nonatomic, strong) NSString *commentFrom;
//评论内容
@property (nonatomic, strong) NSMutableAttributedString *commentStr;
//是否有评论图片显示
@property (nonatomic, assign) BOOL isShowImg;
//显示图片
@property (nonatomic, strong) NSArray *imgArray;
@property (nonatomic, strong) NSArray *thumbArray;
/**
 新
 图片&短视频数据集合
 */
@property (nonatomic, strong) NSMutableArray *pictureDatas;

//是否正在执行的步骤
@property (nonatomic, assign) BOOL isDoing;
//是否是最后一个，用于影藏线条
@property (nonatomic, assign) BOOL isLast;

//获取创建问题来源
@property (nonatomic, strong) NSString *SourceTypeStr;

//用于显示左侧点图案类型
//@property (nonatomic, assign) WDZNewProblemDetailStepType handleType;
//@property (nonatomic, assign) WDZNewProblemDetailStepType transmitType;
//@property (nonatomic, assign) WDZNewProblemDetailStepType commentType;

-(UIImage *)getStepImgWithType:(WDZNewProblemDetailStepType)type;
//获取 评论 栏目 步骤类型   不存在 完成 的情况
-(WDZNewProblemDetailStepType)getCommentType;
//获取 转发 栏目 步骤类型   不存在 完成 的情况
-(WDZNewProblemDetailStepType)getTransmitType;
//获取 处理 栏目 步骤类型    不存在 点 的情况
-(WDZNewProblemDetailStepType)getHandleType;

//用于操作最后一栏线
-(BOOL)isShowCheckLine;
-(BOOL)isShowCommentLine;
-(BOOL)isShowHandleLine;

-(BOOL)problemIsFinish;
@end
