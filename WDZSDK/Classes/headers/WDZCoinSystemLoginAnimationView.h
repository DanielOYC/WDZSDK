//
//  WDZCoinSystemLoginAnimationView.h
//  Test
//
//  Created by Daniel on 2018/11/5.
//  Copyright © 2018年 Daniel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZCoinSystemLoginAnimationView : UIView

+ (instancetype)instance;

/**
 显示当前第一个登陆金币奖励动画

 @param days 连续登陆的第几天
 @param rewardCount 金币奖励数
 @param jitangText 鸡汤文
 */
+ (void)showAnimationWithDays:(NSInteger)days coinRewardCount:(NSInteger)rewardCount jitangText:(NSString *)jitangText;

@end
