//
//  NSBundle+WDZRefresh.h
//  WDZRefreshExample
//
//  Created by MJ Lee on 16/6/13.
//  Copyright © 2016年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface NSBundle (WDZRefresh)
+ (instancetype)wdz_refreshBundle;
+ (UIImage *)wdz_arrowImage;
+ (NSString *)wdz_localizedStringForKey:(NSString *)key value:(NSString *)value;
+ (NSString *)wdz_localizedStringForKey:(NSString *)key;
@end
