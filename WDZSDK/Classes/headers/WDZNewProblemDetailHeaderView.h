//
//  WDZNewProblemDetailHeaderView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/19.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//   代办单详情 顶部view

#import <UIKit/UIKit.h>
@class WDZProblem;
@protocol WDZNewProblemDetailHeaderViewdelegate <NSObject>
-(void)WDZNewProblemDetailHeaderViewDidClickPlayBtn:(UIButton *)btn problem:(WDZProblem *)problem;
-(void)WDZNewProblemDetailHeaderViewDidClickDetailBtn:(UIButton *)btn problem:(WDZProblem *)problem;

-(void)WDZNewProblemDetailHeaderViewDidClickImg:(NSInteger)index thumbImgs:(NSArray *)imgs;

-(void)WDZNewProblemDetailHeaderViewDidShowAllDes;

@end
@interface WDZNewProblemDetailHeaderView : UIView
@property (nonatomic, weak) id<WDZNewProblemDetailHeaderViewdelegate> delegate;
@property (nonatomic, strong) WDZProblem *problem;

@property (nonatomic, assign) BOOL isShowAll;

-(void)refreshUI;
@end
