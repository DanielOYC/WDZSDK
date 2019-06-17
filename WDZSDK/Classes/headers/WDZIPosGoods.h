//
//  WDZIPosGoods.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//  POS小票商品

#import <Foundation/Foundation.h>

@interface WDZIPosGoods : NSObject
/**
 商品主键Id
 */
@property (nonatomic, copy) NSString *ID;
/**
 小票Id
 */
@property (nonatomic, copy) NSString *ticketId;
/**
 商品Id
 */
@property (nonatomic, copy) NSString *goodsId;
/**
 商品名
 */
@property (nonatomic, copy) NSString *goodsName;
/**
 颜色Id
 */
@property (nonatomic, copy) NSString *colourId;
/**
 颜色名字
 */
@property (nonatomic, copy) NSString *colourName;
/**
 尺寸Id
 */
@property (nonatomic, copy) NSString *sizeId;

/**
 尺寸
 */
@property (nonatomic, copy) NSString *sizeName;

/**
 指导价
 */
@property (nonatomic, copy) NSString *guidePrice;

/**
 单价
 */
@property (nonatomic, copy) NSString *unitPrice;

/**
 折扣
 */
@property (nonatomic, copy) NSString *discount;
/**
 价格
 */
@property (nonatomic, copy) NSString *price;
/**
 数量
 */
@property (nonatomic, copy) NSString *quantity;

@end
