//
//  WDZNewProblemDetailCommentView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//   代办单详情  评论相关

#import <UIKit/UIKit.h>
#import "WDZNewProblemCommentFrameModel.h"

@protocol WDZNewProblemDetailCommentViewDelegate <NSObject>
-(void)WDZNewProblemDetailCommentViewDidClickImg:(NSInteger) index imgArray:(NSArray *)imgs;
@end

@interface WDZNewProblemDetailCommentView : UIView

@property (nonatomic, weak) id<WDZNewProblemDetailCommentViewDelegate> delegate;

@property (nonatomic, strong) NSString *commentFrom;
@property (nonatomic, strong) NSString *timeStr;
@property (nonatomic, strong) NSMutableAttributedString *commentStr;
@property (nonatomic, strong) NSArray *picArray;

@property (nonatomic, assign) CGFloat commentImgsHeight;

@property (nonatomic, assign) BOOL isShowline;

@property (nonatomic, assign) WDZNewProblemDetailStepType type;
@property (nonatomic, strong) UIImage *stepImg;

-(void)refreshUI;

@end
