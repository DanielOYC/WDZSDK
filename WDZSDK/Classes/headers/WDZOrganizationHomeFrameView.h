//
//  WDZOrganizationHomeFrameView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/18.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZOrganizationConfig.h"
#import "WDZNShoplistFrameView.h"

@interface WDZOrganizationHomeFrameView : WDZBaseFrameView


/**
 所有view的标题
 */
@property (nonatomic, strong) UILabel *allTitleLabel;

/**
 是否是来源于远程巡店
 */
@property (nonatomic, assign) BOOL isFromYuancheng;

/**
 设置模式
 
 @param isContainDevice         是否包含设备
 @param isAllowMultipleChoice   是否可以多选
 @param isAllowAll              是否可以全选         多选情况下可以全选
 @param func                    设置组织架构使用功能
 */
- (void)setContaindveices:(BOOL) isContainDevice multipleChoice:(BOOL) isAllowMultipleChoice isAllowAll:(BOOL) isAllowedAll organizationFunc:(OrganizationFunction) func;
/**
 加载数据
 */
- (void)frameViewLoadData;



@end
