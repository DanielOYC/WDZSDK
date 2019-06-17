//
//  WDZNSearchController.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/28.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNSearchPromptShowAble.h"

@interface WDZNSearchController : UIViewController
/**
 占位文字
 */
@property (nonatomic, copy) NSString *placeHolder;

/**
 搜索结果的View 一般是tableView
 */
@property (nonatomic, strong) UIView *searchResultView;

/**
 搜索的结果
 */
@property (nonatomic, strong) NSArray<id<WDZNSearchPromptShowAble>> *dataSource;

/**
 历史记录key
 */
@property (nonatomic, copy) NSString *historyKey;

- (void)showActivityHUD;

- (void)hiddenActivityHUD;

- (void)showErrorMessage;
@end
