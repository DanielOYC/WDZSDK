//
//  WDZButton+Block.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 2017/4/17.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>


typedef void (^btnActionBlock)(void);

@interface WDZButton_Block : UIButton

@property (readonly) NSMutableDictionary *event;

- (void) handleControlEvent:(UIControlEvents)controlEvent withBlock:(btnActionBlock)action;

@end
