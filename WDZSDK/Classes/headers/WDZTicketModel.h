//
//  WDZTicketModel.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZTicketGoods.h"
#import "WDZPosListItem.h"
@interface WDZTicketModel : NSObject

//goodsPrice = <null>,
//listNum = "11",
//listId = <null>,
//depId = 9617,
//goodsNum = <null>,
//userName = "zs",
//createTime = "2018-03-29T08:00:00",
//goodsName = <null>,
//groupId = 1084, //奇特id
//goodsId = <null>,
//depName = "A Suzhou -20.11录像下载测试，不要做录像回放！！",
//equipmentId = "111",


@property (nonatomic, copy) NSString *listNum;

@property (nonatomic, copy) NSString *listId;
//门店ID
@property (nonatomic, copy) NSString *depId;

//门店ID
@property (nonatomic, copy) NSString *videoId;


@property (nonatomic, copy) NSString *userName;

@property (nonatomic, copy) NSString *createTime;


@property (nonatomic, copy) NSString *groupId;

@property (nonatomic, copy) NSString *depName;

@property (nonatomic, copy) NSString *equipmentId;

@property (nonatomic, strong) NSArray<WDZTicketGoods *> *goods;
/**
 是否需要刷新列表
 */
@property (nonatomic, assign) BOOL isNeedRefreshLsit;

@property (nonatomic, strong) WDZPosListItem *posItem;
@end
