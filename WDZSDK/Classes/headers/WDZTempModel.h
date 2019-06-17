//
//  WDZTempModel.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/10/31.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZTempModel : NSObject

/**
 是否是选中
 */
@property (nonatomic , assign)BOOL isSelete;

@property (nonatomic , retain)NSString *childNum;

@property (nonatomic , retain)NSArray *dbViewShopList;

@property (nonatomic , retain)NSString *enterpriseId;

@property (nonatomic , retain)NSString *ID;

@property (nonatomic , retain)NSString *isDel;

@property (nonatomic , retain)NSString *name;

@property (nonatomic , retain)NSString *sourceType;
@end
