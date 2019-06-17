//
//  WDZTranspondFrameView.h
//  WanDianZhang
//
//  Created by  ovopark_iOS1 on 16/5/18.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZProblem.h"
//#import "MBProgressHUD.h"
@protocol WDZTranspondFrameViewDelegate ;
@interface WDZTranspondFrameView : WDZBaseFrameView

@property (weak , nonatomic) id<WDZTranspondFrameViewDelegate> delegate;
@property (strong , nonatomic)UIButton *transpondButton;

@property (strong , nonatomic)WDZProblem *problem;
- (void)disPlayFrameView:(WDZProblem *)pro;
- (void)reloadProblemToUsersWithProblem:(WDZProblem *)pro;
- (void)reloadProblemToCopysWithProblem:(WDZProblem *)pro;

@end
@protocol WDZTranspondFrameViewDelegate <NSObject>

- (void)frameViewOnBack:(WDZTranspondFrameView *)v;
- (void)WDZTranspondFrameViewdidSelectdtranspondTextField;
- (void)WDZTranspondFrameViewdidSelectdtoCopyTextField;
- (void)WDZTranspondFrameViewdidsendSucc;

/**
 新  代办单详情  10秒倒计时提交
 */
-(void)WDZTranspondFrameViewDidClickSendBtn:(UIButton *)btn commitStr:(NSString *)commitStr;

@end
