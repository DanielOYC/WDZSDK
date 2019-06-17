//
//  WDZNSearchBarView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/28.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNSearchPromptShowAble.h"

@class WDZNSearchBarView;
@protocol WDZNSearchBarViewDelegate<NSObject>

@required
- (UIView *)searchResultViewOfnSearchBarView:(WDZNSearchBarView *)searchBar;

@optional
- (void)nSearchBarView:(WDZNSearchBarView *)searchBar didEditing:(NSString *)text isHistory:(BOOL)isHistory;
- (void)nSearchBarView:(WDZNSearchBarView *)searchBar didSelected:(id<WDZNSearchPromptShowAble>) item;

@end

@interface WDZNSearchBarView : UIView
/**
 占位文字
 */
@property (nonatomic, copy) NSString *placeHolder;

@property (nonatomic, weak) id<WDZNSearchBarViewDelegate> delegate;

/**
 搜索的结果
 */
@property (nonatomic, strong) NSArray<id<WDZNSearchPromptShowAble>> *dataSource;

/**
 历史记录的key值
 */
@property (nonatomic, copy) NSString *historyKey;

- (void)showActivityHUD;

- (void)hiddenActivityHUD;

- (void)showErrorMessage;
@end
