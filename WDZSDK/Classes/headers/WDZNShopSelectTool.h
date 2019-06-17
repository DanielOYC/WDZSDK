//
//  WDZNShopSelectTool.h
//  WDZFunctionModule
//
//  Created by 夏征宇 on 2019/4/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZNShopSelectTool : NSObject

/**
 调用 target 的 performSelector 方法

 @param target 接收消息的对象
 @param selectorStr 发送的消息
 @param arguments 参数
 */
+ (id)WDZPerformTarget:(id)target withSelector:(NSString *)selectorStr arguments:(NSArray *)arguments;

/**
 创建label
 @param frame
 @param title label名字
 @param font 字号
 @param alignment 对齐方式
 @param textColor 文字颜色
 @param backColor 背景颜色
 */
+(UILabel *)getLabelWithFrame:(CGRect)frame withTitle:(NSString *)title withFontNum:(CGFloat)fontNum withTextAligment:(NSTextAlignment)alignment withTextColor:(UIColor *)textColor withBackColor:(UIColor *)backColor;

@end

NS_ASSUME_NONNULL_END
