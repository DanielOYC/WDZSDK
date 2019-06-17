//
//  NSObject+KDVCExtension.h
//  test
//
//  Created by dingkan on 2018/9/29.
//  Copyright © 2018年 dingkan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSObject (KDVCExtension)
/**
 * 获取当前显示的控制器
 */
+ (UIViewController *)getCurrentController;

+ (UIViewController *)getPresentController;
@end
