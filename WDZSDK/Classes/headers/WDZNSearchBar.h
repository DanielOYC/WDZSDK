//
//  WDZNSearchBar.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/28.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZNSearchBar;
@protocol WDZNSearchDelegate<NSObject>

@optional
/**搜索栏结束输入后回调 带延迟(推荐)*/
- (void)nSearchBar:(WDZNSearchBar *)searchBar didEndEditing:(NSString *)text;

/**搜索栏结束输入后回调 不带延迟*/
- (void)nSearchBar:(WDZNSearchBar *)searchBar didEndEditingNoDealy:(NSString *)text;

@end

@interface WDZNSearchBar : UITextField

@property (nonatomic, assign) id<WDZNSearchDelegate> nDelegate;

+ (instancetype)searchBar;

@end
