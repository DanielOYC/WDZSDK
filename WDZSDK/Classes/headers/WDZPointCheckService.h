//
//  WDZPointCheckService.h
//  WDZForAppStore
//
//  Created by shine on 2019/4/17.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZPointCheckService : NSObject

/**
 完成点检获取金币
 
 @param ID
 @param type 2点检 
 */
+ (void)updateGoldWithID:(NSString *)ID type:(NSString *)type successBlock:(void (^)())successBlock failBlock:(void (^)(NSError *err))failBlock;


@end

NS_ASSUME_NONNULL_END
