//
//  WDZCustomerModel.h
//  WDZForAppStore
//
//  Created by shine on 2019/4/3.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZPosListItem.h"

 
NS_ASSUME_NONNULL_BEGIN

@interface WDZCustomerModel : NSObject

/**
  店铺ID
 */
@property (nonatomic, copy) NSString *depId;

/**
 是否需要刷新列表
 */
@property (nonatomic, assign) BOOL isNeedRefreshLsit;

@property (nonatomic, strong) WDZPosListItem *posItem;


@end

NS_ASSUME_NONNULL_END
