//
//  WDZNUserListTool.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/23.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZNUserListTool : NSObject

/**
 根据ID获取对应的颜色
 */
+(UIColor *)getColorWithID:(NSString *)IDDD;

/**
 创建Label
 */
+(UILabel *)getLabelWithFrame:(CGRect)frame withTitle:(NSString *)title withFontNum:(CGFloat)fontNum withTextAligment:(NSTextAlignment)alignment withTextColor:(UIColor *)textColor withBackColor:(UIColor *)backColor;
/**
 创建Button
 */
+(UIButton *)getButtonWithFrame:(CGRect)frame withTitle:(NSString *)title withImageName:(NSString *)imageName withSeleteImageName:(NSString *)seleteImageName withBackImageName:(NSString *)backImageName WithBackSeleteImageName:(NSString *)backSeleteImageName withFontNum:(CGFloat)fontNum withTextAligment:(UIControlContentHorizontalAlignment)alignment withTextColor:(UIColor *)textColor withBackColor:(UIColor *)backColor;

+ (NSObject *)WDZSendMessageWithTarget:(id)target method:(NSString *)method arguments:(NSArray *)arguments;

/**
 调用target的- (id)performSelector:(SEL)aSelector方法

 @param target 接收消息的对象
 @param selectorStr 发送的消息
 @param arguments 参数，最多两个
 @return 返回值
 */
+ (id)WDZPerformTarget:(id)target withSelector:(NSString *)selectorStr arguments:(NSArray *)arguments;
@end
