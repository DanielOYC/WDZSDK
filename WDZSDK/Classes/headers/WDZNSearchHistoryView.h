//
//  WDZNSearchHistoryView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/4/9.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZNSearchHistoryView;
@protocol WDZNSearchHistoryViewDelegate<NSObject>

- (void)NSearchHistoryView:(WDZNSearchHistoryView *)searchView DidSelectText:(NSString *)text;

- (void)NSearchHistoryViewDidClickDeleteBtn:(WDZNSearchHistoryView *)searchView;
@end

@interface WDZNSearchHistoryView : UIView
/**
 历史记录key
 */
@property (nonatomic, copy) NSString *historyKey;

@property (nonatomic, weak) id<WDZNSearchHistoryViewDelegate> delegate;

/**
 dataSource
 */
@property (nonatomic, strong) NSMutableArray *dataSource;


@end
