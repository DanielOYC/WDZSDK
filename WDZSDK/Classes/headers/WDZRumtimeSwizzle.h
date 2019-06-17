//
//  WDZRumtimeSwizzle.h
//  test
//
//  Created by dingkan on 2018/10/6.
//  Copyright © 2018年 dingkan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZRumtimeSwizzle : NSObject

+ (void)WDZ_methodSwizzleAClass:(Class)aClass Selector:(SEL)aSel  Selector:(SEL)bSel isClassMethod:(BOOL)classMethod;
+ (id)WDZ_getPrivateProperty:(Class)aClass  name:(NSString *)propertyName;
@end
