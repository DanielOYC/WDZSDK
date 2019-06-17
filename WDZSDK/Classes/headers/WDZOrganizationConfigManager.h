//
//  WDZOrganizationConfigManager.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WDZOrganizationStructureFrameModel;

//typedef enum : NSUInteger {
//    WDZOrganizationUserListTypeOrganizational, //组织架构
//    WDZOrganizationUserListTypeUserList,//用户
//} WDZOrganizationUserListType;

@class WDZUserModel;

@interface WDZOrganizationConfigManager : NSObject

//@property (nonatomic, assign) WDZOrganizationUserListType type;
/**
 是否包含自己 默认为NO(有自己)
 */
@property (nonatomic , assign)BOOL isNOSelf;
/**
 是否是单选
 */
@property (nonatomic , assign)BOOL isSigle;
/**
 是否是多选
 */
@property (nonatomic , assign)BOOL isDouble;
/**
 是否显示电话按钮
 */
@property (nonatomic , assign)BOOL isHaveTel;
/**
 是否可以进入个人主页
 */
@property (nonatomic , assign)BOOL isClickSigleHome;
/**
 最多选择人数
 */
@property (nonatomic , assign)NSInteger MaxNumber;
/**
 是否隐藏选中的按钮  默认为NO（允许显示）
 */
@property (nonatomic , assign)BOOL isHiddenSeleteBtn;
/**
 不允许点击的数组
 */
@property (nonatomic , retain)NSMutableArray <WDZUserModel *>*noClickArray;
/**
 已选中的联系人
 */
@property (nonatomic , retain)NSMutableArray<WDZUserModel *> *seleteUsers;
/**
 已选中的节点数据
 */
@property (nonatomic , retain)NSMutableArray <WDZOrganizationStructureFrameModel *>*seleteOrganizationModels;


#pragma public
/**
单选模式
 */
+(instancetype)sigleDetault;
/**
 组织架构包含节点模式
 */
+(instancetype)doubleDetault;

/**
 数据去重
 */
-(NSArray *)getUserDatas;


@end
