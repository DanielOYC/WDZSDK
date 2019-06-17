//
//  WDZShopHomeService.h
//  AFNetworking
//
//  Created by Hayder on 2019/4/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZShopHomeService : NSObject

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

/**
 创建Button
 
 @param frame frame
 @param title button名字
 @param imageName 图片名称
 @param seleteImageName 图片点击名称
 @param backImageName 背景图片
 @param backSeleteImageName 点击背景图片
 @param font 字号
 @param alignment 对齐方式
 @param textColor 文字颜色
 @param backColor 背景颜色
 */
+(UIButton *)getButtonWithFrame:(CGRect)frame withTitle:(NSString *)title withImageName:(NSString *)imageName withSeleteImageName:(NSString *)seleteImageName withBackImageName:(NSString *)backImageName WithBackSeleteImageName:(NSString *)backSeleteImageName withFontNum:(CGFloat)fontNum withTextAligment:(UIControlContentHorizontalAlignment)alignment withTextColor:(UIColor *)textColor withBackColor:(UIColor *)backColor;
@end

NS_ASSUME_NONNULL_END
