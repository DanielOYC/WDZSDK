//
//  WDZNewProblemDesView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/19.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//   分类 + 详情 + 描述

#import <UIKit/UIKit.h>

@protocol WDZNewProblemDesViewDelegate <NSObject>
-(void)WDZNewProblemDesViewDidClickDetail:(UIButton *)btn;
-(void)WDZNewProblemDesViewDidShowAllDetail;
@end

@interface WDZNewProblemDesView : UIView

@property (nonatomic, weak) id<WDZNewProblemDesViewDelegate> delegate;

/**
 titleAtt  多行展示时显示
 */
@property (nonatomic, strong) NSMutableAttributedString *titleAtt;
@property (nonatomic, strong) NSMutableAttributedString *subTitleAtt;

/**
 当行展示时显示
 */
@property (nonatomic, strong) NSString *titleStr;
@property (nonatomic, strong) NSString *subTitle;

@property (nonatomic, assign) BOOL isShowDes;
//是否展示全部描述
@property (nonatomic, assign) BOOL isShowAllDes;

-(void)refreshUI;

@end
