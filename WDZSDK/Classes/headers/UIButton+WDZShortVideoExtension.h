//
//  UIButton+WDZShortVideoExtension.h
//  AFNetworking
//
//  Created by dingkan on 2018/10/31.
//

#import <UIKit/UIKit.h>

@interface UIButton (WDZShortVideoExtension)
/**
 动画
 */
- (void)show;
- (void)hide;


/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(MKButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;
@end
