//
//  WDZNSearchPromptShowAble.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/28.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZNSearchPromptShowAble <NSObject>

/**
 提示View上要展示的内容
 */
@required;
- (NSString *)showPromptText;

@end
