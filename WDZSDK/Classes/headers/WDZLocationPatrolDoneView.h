//
//  WDZLocationPatrolDoneView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/11/14.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "WDZOnsiteHistoryModel.h"
typedef void(^hideKDLocationDoneViewBlock)(WDZOnsiteHistoryModel *historModel);

@interface WDZLocationPatrolDoneView : UIView

@property (nonatomic , copy)hideKDLocationDoneViewBlock block;

/**
 完成界面显示的信息
 */
@property (nonatomic , retain)NSDictionary *dataDic;

/**
 是否是远程巡店  默认为NO
 */
@property (nonatomic , assign)BOOL isRemote;

@property (nonatomic , retain)NSString *VCtype;

-(instancetype)initWithFrame:(CGRect)frame;

@end
