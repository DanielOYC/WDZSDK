//
//  WDZSearchPromptView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/28.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNSearchPromptShowAble.h"

@protocol WDZSearchPromptViewDelegate <NSObject>

//- (void)didSelectedModel:(WDZShopModel *)domain;

@end

@interface WDZNSearchPromptView : UIView
/**
 关键字
 */
@property (nonatomic, copy) NSString *keyWord;

@property (nonatomic, strong) UITableView *tableView;
/**
 搜索的结果
 */
@property (nonatomic, strong) NSArray<id<WDZNSearchPromptShowAble>> *dataSource;

@property (nonatomic, weak) id<WDZSearchPromptViewDelegate> delegate;



@end
