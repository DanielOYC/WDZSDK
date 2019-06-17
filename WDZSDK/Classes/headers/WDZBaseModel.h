//
//  WDZBaseModel.h
//  WDZStore
//
//  Created by 郑来贤 on 14-9-24.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MJExtension/MJExtension.h>
@interface WDZBaseModel : NSObject<NSCopying, NSCoding>

@property (strong , nonatomic) NSArray *models;
@property (assign , nonatomic) NSInteger totals;


-(instancetype)initWithDictionary:(NSDictionary *)dic;

@end


