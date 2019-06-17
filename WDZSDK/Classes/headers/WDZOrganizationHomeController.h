//
//  WDZOrganizationHomeController.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/18.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//  请用NavigationController Push使用

#import "WDZBaseViewController.h"
#import "WDZOrganizationConfig.h"
#import "WDZNShoplistFrameView.h"
#import "WDZShopModel.h"

@class WDZOrganizationHomeController;
@protocol WDZOrganizationHomeControllerDelegate <NSObject>
/**
 选中门店
 @param vc     组织架构控制器
 @param shops  选择的门店
 @param isAll  shops数组里面是否是全部的门店
 */
- (void)organizationHomeController:(WDZOrganizationHomeController *)vc didChooseedShops:(NSArray *)shops isAll:(BOOL) isAll;

@end

@interface WDZOrganizationHomeController : WDZBaseViewController

@property (nonatomic, strong) void(^chooseBlock)(NSArray *shops, BOOL isAll);

/**
 是否全选  如果设置了isAll为YES  original内容失效
 */
@property (nonatomic, assign) BOOL isAll;
/**
 全部标题文字设置
 */
@property (nonatomic, copy) NSString *allTitleStr;

/**
 初始的数组，用于初始化列表
 */
@property (nonatomic, strong) NSMutableArray <WDZShopModel *>* originalShop;
/**
 当前功能为门店选择功能时，可以利用代理接收选中门店
 */
@property (nonatomic, weak) id<WDZOrganizationHomeControllerDelegate> delegate;

/**
 是否是从远程巡店进入
 */
@property (nonatomic, assign) BOOL isFromYuancheng;
/**
 设置模式
 
 @param isContainDevice         是否包含设备
 @param isAllowMultipleChoice   是否可以多选
 @param isAllowAll              是否可以全选         多选情况下可以全选
 @param func                    设置组织架构使用功能   使用工作圈专用的情况下 也可以全选
 */
- (void)setContaindveices:(BOOL) isContainDevice multipleChoice:(BOOL) isAllowMultipleChoice isAllowAll:(BOOL) isAllowedAll organizationFunc:(OrganizationFunction) func;


@end
