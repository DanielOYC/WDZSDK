//
//  WDZCategoryModel.h
//  WDZStore
//
//  Created by 郑来贤 on 14-7-17.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

@class WDZCategoryModelList;

typedef void(^getCategoryModelListBlock)(BOOL isSuccess,WDZCategoryModelList *categoryModelList,NSError *error);

#import <Foundation/Foundation.h>
#import "WDZBaseModel.h"

@interface WDZCategoryModel : WDZBaseModel

@property (strong , nonatomic) NSString *ID;
@property (strong , nonatomic) NSString *name;
@property (strong , nonatomic) NSString *imageName;
@property (assign , nonatomic) BOOL selected;

@end

@interface WDZCategoryModelList : WDZBaseModel

@property (assign , nonatomic) int total;
@property (strong , nonatomic) NSArray *categorys;
@property (strong , nonatomic) NSArray *HotCategorys;
@property (strong , nonatomic) NSArray *NomalCategorys;

- (void)getCategoryListWithBlock:(getCategoryModelListBlock)completedBlock;

@end
