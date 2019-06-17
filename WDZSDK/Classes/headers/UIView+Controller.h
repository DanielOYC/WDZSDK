//
//  UIView+Controller.h
//  WDZForAppStore
//
//  Created by mac on 17/1/11.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Controller)

- (UIViewController *_Nullable)getViewController;

/**
 get any controller in navigationContoller's stack
 @param cls class
 @return controller Object
 */
- (UIViewController *)getViewControllerInNavigationContrllersWithClass:(Class) cls;

/**
 从当前控制器 presentController
 */
-(void)getPresentViewController:(UIViewController *)viewControllerToPresent animated:(BOOL)flag completion:(void (^ __nullable)(void))completion;

@end
