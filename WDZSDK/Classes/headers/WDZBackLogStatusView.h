//
//  WDZBackLogStatusView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/24.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZBackLogStatusView;
@protocol WDZBackLogStatusViewDelegate <NSObject>

/**
 点击了空白处回调
 */
- (void)backLogStatusView:(WDZBackLogStatusView *)statusView didClickMarginView:(UIView *)view requestStatuesValue:(NSString *)status EdgeNum:(int) edgeNum;

/**
 回传选中的按钮角标数和要显示的字

 */
- (void)calEdgeNumOfSelectedBtn:(NSInteger) edgeNum filterButtonShowText:(NSString *)text;

@end

@interface WDZBackLogStatusView : UIView

/**
 bar 上面角标数
 */
@property (nonatomic, assign) NSInteger edgeNum;

/**
 bar 上面需要展示的字
 */
@property (nonatomic, copy) NSString *showText;

@property (nonatomic, weak) id<WDZBackLogStatusViewDelegate> delegate;

/**
 初始化界面
 */
- (void)setupInitUI;

+ (instancetype)backLogStatusView;

/**
 设置个数
 
 @param reviewCount 待复检数
 @param modifyCount 待整改数完成数
 @param complete 完成数
 */
- (void)setAllCount:(int)allCount ReviewCount:(int)reviewCount modifyCount:(int)modifyCount complete:(int)complete;

/**
 计算status 参数的值
 */
- (NSInteger)calRequestNum;

/**
 使用status值设置UI
 */
- (void)setUIWithStatusValue:(NSInteger) status;

@end
