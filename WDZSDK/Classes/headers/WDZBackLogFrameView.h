//
//  WDZBackLogFrameView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/23.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

typedef NS_ENUM(NSInteger, showBackLogList) {
    
    showBackLogListNormal = 0, //普通情况
    showBackLogListPending = 1,//待解决
    showBackLogListExpiring,//即将过期
    showBackLogListCompleted //整改完成
};

#import "WDZBaseFrameView.h"

@interface WDZBackLogFrameView : WDZBaseFrameView

/**
 推送过来的问题  需要跳转到详情中
 */
@property (nonatomic, strong) NSNumber *alterTag;
/**
 展示的界面  用于首页界面选择
 */
@property (nonatomic, assign) showBackLogList backlogListType;

@property (nonatomic, strong) void(^isShowFilterBlock)(BOOL isShow);

@end
