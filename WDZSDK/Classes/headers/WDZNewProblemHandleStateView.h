//
//  WDZNewProblemHandleStateView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/19.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZNewProblemHandleStateViewDelegate <NSObject>
-(void)WDZNewProblemHandleStateViewDidClickRejectBtn:(UIButton *)btn isOperate:(BOOL)isOperate;

-(void)WDZNewProblemHandleStateViewDidClickResolveBtn:(UIButton *)btn isOperate:(BOOL)isOperate;
@end

@interface WDZNewProblemHandleStateView : UIView

@property (nonatomic, weak) id<WDZNewProblemHandleStateViewDelegate> delegate;

@property (nonatomic, assign) BOOL isOperate;

@property (nonatomic, strong) NSString *stateStep;

@property (nonatomic, strong) UIColor *stateColor;

@property (nonatomic, assign)  int operateSatus;

-(void)refreshUI;

@end
