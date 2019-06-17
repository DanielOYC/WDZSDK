//
//  WDZNShopLabelModel.h
//  WDZForAppStore
//  门店标签Model
//  Created by 夏征宇 on 2018/5/16.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZNShopLabelModel : NSObject

@property (nonatomic , retain)NSString *isShop;
@property (nonatomic , retain)NSString *shopCount;
@property (nonatomic , retain)NSMutableArray *shops;
@property (nonatomic , retain)NSString *enterpriseId;
@property (nonatomic , retain)NSString *ID;
@property (nonatomic , retain)NSString *tagType;
/**
 标签名称
 */
@property (nonatomic , retain)NSString *tagName;

@end
