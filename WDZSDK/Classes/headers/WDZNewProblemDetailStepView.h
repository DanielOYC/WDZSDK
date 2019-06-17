//
//  WDZNewProblemDetailStepView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNewProblemCommentFrameModel.h"

@interface WDZNewProblemDetailStepView : UIView

@property (nonatomic, assign) BOOL isShowTopLine;
@property (nonatomic, assign) BOOL isShowBottomLine;

@property (nonatomic, strong) UIImage *stepImg;

-(void)refreshUI;

@end
