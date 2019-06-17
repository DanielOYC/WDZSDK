//
//  WDZEnterprise.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/10/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZEnterpriseCertificationModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface WDZEnterprise : NSObject

@property (nonatomic, copy) NSString *ID;
/**是否通过certificates*/
@property (assign , nonatomic) NSInteger isPass;

@property (nonatomic , strong) NSMutableArray <WDZEnterpriseCertificationModel *> *certificates;

@end

NS_ASSUME_NONNULL_END
