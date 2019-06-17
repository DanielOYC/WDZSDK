//
//  WDZLocationShowMessageView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2017/12/28.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol WDZLocationShowMessageViewDelegate;
@interface WDZLocationShowMessageView : UIView

@property (nonatomic , assign)id<WDZLocationShowMessageViewDelegate>delegate;

/**
 是否是远程巡店
 */
@property (nonatomic , assign)BOOL isRemote;

/**
 进度Label
 */
@property (nonatomic , retain)UILabel *loadLabel;

/**
 进度label
 */
@property (nonatomic , retain)UILabel *loadLabel2;
/**
 通过、不通过、不支持数据
 */
@property (nonatomic , retain)NSDictionary *MessageDic;
/**
 根据所有的数据处理获取已通过、未通过、不知的数据
 */
-(void)getDetailWithAllDataDic:(NSDictionary *)allDataDic withPatrolArray:(NSArray *)patrolArray;
/**
 根据时间获取巡店时间
 */
-(void)getDetailTimeWithTimeString:(NSString *)creatTime;

@end

@protocol WDZLocationShowMessageViewDelegate <NSObject>

/**
 隐藏View
 */
-(void)hideMessageViewWithMessageView:(WDZLocationShowMessageView *)messageView;

@end
