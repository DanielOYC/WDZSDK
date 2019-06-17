//
//  WDZNewProblemDetailSmallHeaderView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/19.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
// 代办单详情上滑 顶部view

#import <UIKit/UIKit.h>
@class WDZProblem;
@protocol WDZNewProblemDetailSmallHeaderViewdelegate <NSObject>
-(void)WDZNewProblemDetailSmallHeaderViewDidClickPlayBtn:(UIButton *)btn problem:(WDZProblem *)problem;
-(void)WDZNewProblemDetailSmallHeaderViewDidClickDetailBtn:(UIButton *)btn problem:(WDZProblem *)problem;

-(void)WDZNewProblemDetailSmallHeaderViewDidShowAllDes;
@end

@interface WDZNewProblemDetailSmallHeaderView : UIView
@property (nonatomic, weak) id<WDZNewProblemDetailSmallHeaderViewdelegate> delegate;
@property (nonatomic, strong) WDZProblem *problem;
//是否展示全部
@property (nonatomic, assign) BOOL isShowAll;


-(void)refreshUI;
@end
