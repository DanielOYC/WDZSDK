//
//  WDZDoodleBoradViewTopHandleView.h
//  AFNetworking
//
//  Created by dingkan on 2019/2/22.
//    顶部完成&取消 事件栏目

#import <UIKit/UIKit.h>

@protocol WDZDoodleBoradViewTopHandleViewDelegate <NSObject>

/**
 取消事件
 */
-(void)WDZDoodleBoradViewTopHandleViewDidCacnel:(UIButton *)btn;

/**
 完成事件
 */
-(void)WDZDoodleBoradViewTopHandleViewDidFinfish:(UIButton *)btn;

@end

@interface WDZDoodleBoradViewTopHandleView : UIView

@property (nonatomic, weak) id<WDZDoodleBoradViewTopHandleViewDelegate> delegate;

@end
