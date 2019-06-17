//
//  WDZNUserListConfigModel.h
//  WDZForAppStore
//  配置选项
//  Created by 夏征宇 on 2018/3/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZUserModel.h"


@interface WDZNUserListConfigModel : NSObject
/**
 导航条名字
 */
@property (nonatomic , retain)NSString *navTitleName;
/**
 是否包含自己 默认为NO(有自己)
 */
@property (nonatomic , assign)BOOL isNOSelf;
/**
 是否包含全部按钮
 */
@property (nonatomic , assign)BOOL isHaveAll;

/**
 是否选中了全部按钮
 */
@property (nonatomic , assign)BOOL isSeleteAll;
/**
 是否是单选
 */
@property (nonatomic , assign)BOOL isSigle;
/**
 是否是多选
 */
@property (nonatomic , assign)BOOL isDouble;
/**
 是否是通讯录
 */
@property (nonatomic , assign)BOOL isMaiList;
/**
 是否显示电话按钮
 */
@property (nonatomic , assign)BOOL isHaveTel;
/**
 是否有历史群聊
 */
@property (nonatomic , assign)BOOL isHaveHistoryMsg;
/**
 @人：是否有AtAll
 */
@property (nonatomic , assign)BOOL isHaveAtAll;
/**
 是否可以进入个人主页
 */
@property (nonatomic , assign)BOOL isClickSigleHome;
/**
 @人需求：@所有人是否支持
 */
@property (nonatomic , assign)BOOL isAtAll;
/**
 已经选中的Model(适用于单选情况下)
 */
@property (nonatomic , retain)WDZUserModel *seleteUserModel;
/**
 是否允许点击选中的数组,默认为否（允许点击）
 */
@property (nonatomic , assign)BOOL isNoClickSelete;
/**
 是否不获取传入的数组联系人（默认为NO，继续获取，设置为YES：得到的数组将不包含传入的数组数据）
 */
@property (nonatomic , assign)BOOL isNoOldSeleteUsers;
/**
 最多选择人数
 */
@property (nonatomic , assign)NSInteger MaxNumber;
/**
 不允许点击的数组
 */
@property (nonatomic , retain)NSMutableArray <WDZUserModel *>*noClickArray;
/**
 已选中的联系人
 */
@property (nonatomic , retain)NSMutableArray <WDZUserModel *>*seleteUsers;

/**
 传入全部数据，如果传入此数组，将不再有下拉刷新功能。全部数据即为传入的数据
 */
@property (nonatomic , retain)NSArray <WDZUserModel *>*dataSource;

/**
 是否用frameView
 */
@property (nonatomic, assign) BOOL isUseFrameview;

/**
 是否隐藏选中的按钮  默认为NO（允许显示）
 */
@property (nonatomic , assign)BOOL isHiddenSeleteBtn;


/**
 单选模式  其余数据需要自定义设置,在设置完之后,如果有不满足,也可以设置其余数据
 titleName        : 请选择联系人
 isHaveAll        : 有全部按钮
 isHaveTel        : 不包含电话按钮
 isHaveHistoryMsg : 不包含历史群聊
 isHiddenSeleteBtn: 默认一直显示右上角的确定按钮,可以选择空的数据出来
 seleteUserModel  : 已经选中的 Model
 */
-(instancetype)initWithSigleSeleteWithSeleteModel:(WDZUserModel *)seleteUserModel;


/**
 多选模式  其余数据需要自定义设置,在设置完之后,如果有不满足,也可以设置其余数据
 titleName        : 请选择联系人
 isHaveAll        : 有全部按钮
 isHaveTel        : 不包含电话按钮
 isHaveHistoryMsg : 不包含历史群聊
 isHiddenSeleteBtn: 默认一直显示右上角的确定按钮,可以选择空的数据出来
 seletUsers       : 已经选中的数据
 */
-(instancetype)initWithDoubleSeleteWithSeleteModels:(NSArray *)seletUsers;
@end
