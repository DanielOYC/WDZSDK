//
//  WDZRecordPosContentView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/7/25.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZPosModel.h"
#import "WDZPosListItem.h"

@class WDZRecordPosContentView;
@protocol WDZRecordPosContentViewDelegate<NSObject>

- (void)recordPosContentViewDidClickCloseBtn:(WDZRecordPosContentView *)view;

/**选择了某一个pos*/
- (void)recordPosContentDidClickPosItem:(WDZPosListItem *)item;

@end

@interface WDZRecordPosContentView : UIView

@property (nonatomic, strong) WDZPosListItem *item;
/**
 pos小票的数据
 */
@property (nonatomic, strong) WDZPosModel *posTicket;

/**
 pos小票的列表数据
 */
@property (nonatomic, strong) NSArray<WDZPosListItem *> *posItems;

@property (nonatomic, weak) id<WDZRecordPosContentViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame isListDetail:(BOOL)isListDetail isPos:(BOOL) isPos;

@end
