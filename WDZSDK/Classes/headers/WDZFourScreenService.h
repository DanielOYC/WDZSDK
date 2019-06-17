//
//  WDZFourScreenService.h
//  AFNetworking
//
//  Created by Hayder on 2019/5/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZFourScreenService : NSObject

/**
 根据type搜索门店列表
 */
+ (void)getShopListBySearchType:(NSInteger)type name:(NSString *)name page:(NSInteger)page num:(NSNumber *)num Completion:(void (^)(BOOL isSuccessed,NSArray* shopList))completion;

@end

NS_ASSUME_NONNULL_END
