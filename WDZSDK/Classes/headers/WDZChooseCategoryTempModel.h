//
//  WDZChooseCategoryTempModel.h
//  Pods
//
//  Created by Daniel on 2019/2/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZChooseCategoryTempModel : NSObject
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

NS_ASSUME_NONNULL_END
