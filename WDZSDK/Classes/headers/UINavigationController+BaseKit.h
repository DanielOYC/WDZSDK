//
//  UINavigationController+BaseKit.h
//  WDZForAppStore
//
//  Created by 李轩霖 on 2018/10/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (BaseKit)


/**
 导航控制器是否包含一个控制器
 */
- (UIViewController *)navigationContainsViewController:(Class) cls;
@end
