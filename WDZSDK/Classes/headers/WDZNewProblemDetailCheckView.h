//
//  WDZNewProblemDetailCheckView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//  代办单详情  问题审核者相关

#import <UIKit/UIKit.h>
#import "WDZNewProblemCommentFrameModel.h"

@interface WDZNewProblemDetailCheckView : UIView

@property (nonatomic, strong) NSString *titleStr;
@property (nonatomic, strong) NSString *timeStr;
@property (nonatomic, strong) NSMutableAttributedString *checkAtt;
@property (nonatomic, assign) BOOL isShowLine;

@property (nonatomic, assign) WDZNewProblemDetailStepType type;
@property (nonatomic, strong) UIImage *stepImg;
-(void)refreshUI;
@end
