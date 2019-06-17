//
//  WDZActionAlertViewController.h
//  WDZForAppStore
//  万店掌 弹框控制器
//  Created by  ovopark_iOS1 on 2018/3/19.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, WDZAlertAlignment) {
    WDZAlertAlignmentLeft      = 0,    // 文字在左边
    WDZAlertAlignmentCenter    = 1,    // 文字在中间
};

@interface WDZActionAlertViewController : WDZBaseViewController

/**
 初始化方法

 @param titleArr 数组,不可为空
 @param alertAlignment 选择模式
 @param rightImage 右侧展现的图标 (可为空)
 @param target 写了方法的 NSObject
 @param sureAction (选择了某个标题)返回 选择的字符串
 @param cancelAction (点击取消,关闭)
 @return 返回 WDZActionAlertViewController
 */
-(instancetype _Nonnull )initWithTitleArray:(nonnull NSArray <NSString *>*)titleArr AlertAlignment:(WDZAlertAlignment)alertAlignment lineRightImage:(nullable UIImage *)rightImage Target:(nullable id)target sureAction:(SEL _Nonnull )sureAction cancelAction:(SEL _Nonnull )cancelAction;


@end
