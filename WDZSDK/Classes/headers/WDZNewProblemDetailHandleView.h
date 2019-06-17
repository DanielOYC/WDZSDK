//
//  WDZNewProblemDetailHandleView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//   代办单详情 转发相关

#import <UIKit/UIKit.h>
#import "WDZNewProblemCommentFrameModel.h"

@interface WDZNewProblemDetailHandleView : UIView

@property (nonatomic, strong) NSString *timeStr;
@property (nonatomic, strong) NSMutableAttributedString *handleAtt;
@property (nonatomic, assign) BOOL isShowLine;

@property (nonatomic, assign) WDZNewProblemDetailStepType type;
@property (nonatomic, strong) UIImage *stepImg;

-(void)refreshUI;

@end
