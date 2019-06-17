//
//  WDZPosPayment.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZPosPayment : NSObject
/**
 主键ID
 */
@property (nonatomic, copy) NSString *ID;

/**
 
 */
@property (nonatomic, copy) NSString *paymentType;
/**
 付款方式
 */
@property (nonatomic, copy) NSString *paymentName;

/**
 价格
 */
@property (nonatomic, copy) NSString *price;

@property (nonatomic, copy) NSString *ticketId;

@end
