//
//  NSObject+KDDoodleBoardExtension.h
//  AFNetworking
//
//  Created by dingkan on 2019/3/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface NSObject (WDZDoodleBoardExtension)
/**
 * 获取当前显示的控制器
 */
+ (UIViewController *)getCurrentController;

+ (UIViewController *)getPresentController;
@end

NS_ASSUME_NONNULL_END
