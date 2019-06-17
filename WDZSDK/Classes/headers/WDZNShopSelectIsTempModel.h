//
//  WDZNShopSelectIsTempModel.h
//  WDZFunctionModule
//
//  Created by 夏征宇 on 2019/4/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZNShopSelectIsTempModel : NSObject

/**
 是否是模板
 */
@property (nonatomic , assign)BOOL isTemplate;
/**
 任务 ID
 */
@property (nonatomic , retain)NSString *taskId;
/**
 模板 ID
 */
@property (nonatomic , retain)NSString *templateId;
/**
 模板名称
 */
@property (nonatomic , retain)NSString *templateName;

@property (nonatomic , retain)NSString *createTime;

@end

NS_ASSUME_NONNULL_END
