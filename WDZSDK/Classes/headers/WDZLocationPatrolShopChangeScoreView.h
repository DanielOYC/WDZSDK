//
//  WDZLocationPatrolShopChangeScoreView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/1/2.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//
// block回调类型定义
typedef void(^getBackScoreBlock)(BOOL isChanged,NSString *NewScore);
#import <UIKit/UIKit.h>
@protocol WDZLocationPatrolDrawerScorlViewDelegate;
@interface WDZLocationPatrolShopChangeScoreView : UIView
@property (nonatomic , assign)id<WDZLocationPatrolDrawerScorlViewDelegate>delegate;
@property (nonatomic , assign)getBackScoreBlock getScoreBlock;
@property (nonatomic , retain)NSString *titleStr;
/**
 最高分数
 */
@property (nonatomic , retain)NSString *maxScore;
/**
 当前分数
 */
@property (nonatomic , retain)NSString *nowScore;

//显示个隐藏View
-(void)showMessageView;
-(void)hideMessageView;
@end

@protocol WDZLocationPatrolDrawerScorlViewDelegate <NSObject>

-(void)clickOkButtonAction:(WDZLocationPatrolShopChangeScoreView *)scoreView;

@end
