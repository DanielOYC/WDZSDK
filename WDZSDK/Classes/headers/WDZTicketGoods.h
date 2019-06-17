//
//  WDZTicketGoods.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/30.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZTicketGoods : NSObject

//goodsNum = "20",
//id = 106,
//goodsPrice = 120.9,
//goodsId = "133",
//listId = 115,
//goodsName = "good",

@property (nonatomic, copy) NSString *goodsNum;
@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *goodsName;
@property (nonatomic, copy) NSString *goodsPrice;
@property (nonatomic, copy) NSString *goodsId;
@property (nonatomic, copy) NSString *listId;

@end
