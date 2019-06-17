//
//  NSObject+WDZOrganizationExtension.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/18.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSObject (WDZOrganizationExtension)
/**
 * 获取当前显示的控制器
 */
+ (UIViewController *)getCurrentController;

+ (UIViewController *)getPresentController;
@end
