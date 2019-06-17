//
//  NSObject+KDEX.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2017/8/18.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>


@class KDWorkWorldImageModel;
@interface NSObject (KDEX)
/**
 判断手机是否插入SIM 卡
 */
+ (BOOL)isSIMInstalled;
- (BOOL)isSIMInstalled;

@end
