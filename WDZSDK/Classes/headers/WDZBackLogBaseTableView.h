//
//  WDZBackLogBaseTableView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/21.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBackLogRequestParams.h"

@class WDZBackLogBaseTableView;
@protocol WDZBackLogBaseTableViewDelegate <NSObject>

/**
 请求成功回调，用于全部界面设置角标
 */
- (void)backlogTableView:(WDZBackLogBaseTableView *)tableview requestSuccessWithAllCount:(int) total ReviewCount:(int)reviewCount modifyCount:(int)modifyCount complete:(int)complete;

@end

@interface WDZBackLogBaseTableView : UIView

@property (nonatomic , strong) WDZBackLogRequestParams *params;

@property (nonatomic, strong) id<WDZBackLogBaseTableViewDelegate> delegate;

- (void)setScrollViewDelegate:(id<UIScrollViewDelegate>) delegate;

/**
 选择第一个cell 用于接收到了推送进入
 */
- (void)selectFirstCell;

@end
