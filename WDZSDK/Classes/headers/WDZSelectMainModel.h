//
//  WDZSelectMainModel.h
//  Pods
//
//  Created by Daniel on 2019/2/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZSelectMainModel : NSObject

/**
 如果是模板,单独设置此 ID
 */
@property (nonatomic , retain)NSString *templateId;
/**
 是否是模板
 */
@property (nonatomic , assign)BOOL isTemp;

/**
 本大项是否可以提交
 */
@property (nonatomic , assign)BOOL canSubmit;

/**
 大点检项名称
 */
@property (nonatomic , retain)NSString *name;

/**
 分数
 */
@property (nonatomic , retain)NSString *score;

/**
 groupID
 */
@property (nonatomic , retain)NSString *group_id;
/**
 id
 */
@property (nonatomic , retain)NSString *ID;
@property (nonatomic , retain)NSString *order;
/**
 已完成的
 */
@property (nonatomic , retain)NSString *completeCount;
/**
 总项
 */
@property (nonatomic , retain)NSString *dbViewShopNum;
/**
 不通过
 */
@property (nonatomic , retain)NSString *notQualified;
/**
 通过
 */
@property (nonatomic , retain)NSString *qualified;
/**
 不支持
 */
@property (nonatomic , retain)NSString *notApplicable;
//兼容旧的
// 大项名称
@property (copy, nonatomic) NSString *title;
// 当前处理过的小项总数
@property (assign, nonatomic) NSInteger currentValue;
// 所属小项总数
@property (assign, nonatomic) NSInteger totalValue;
// 大项ID
@property (copy, nonatomic) NSString *mainItemID;

@end

NS_ASSUME_NONNULL_END
