//
//  WDZNewMessageCollectionModel.h
//  WDZForAppStore
//
//  Created by uMac on 17/3/21.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import "WDZBaseModel.h"

@interface WDZNewMessageCollectionModel : WDZBaseModel


@property (nonatomic , retain)NSString *shopID;
@property (nonatomic , retain)NSString *address;
@property (nonatomic , retain)NSString *location;
@property (nonatomic , retain)NSString *latitude;
@property (nonatomic , retain)NSString *name;
@property (nonatomic , retain)NSString *pyName;
@property (nonatomic , retain)NSString *isShopManager;
@property (nonatomic , retain)NSString *phone;
@property (nonatomic , retain)NSString *groupId;
@property (nonatomic , retain)NSString *organizeId;
@property (nonatomic , retain)NSString *ipcCountLimit;
@property (nonatomic , retain)NSURL *thumbnailUrl;


@property (nonatomic , retain)NSMutableArray *videoArray;

@end
