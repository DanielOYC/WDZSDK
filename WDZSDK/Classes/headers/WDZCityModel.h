//
//  WDZCityModel.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/2/15.
//  Copyright © 2017年 wangzhenhai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZCityModel : NSObject

//province字段
@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *indexId;
@property (nonatomic, copy) NSString *provinceName;
@property (nonatomic, strong) NSMutableArray *cities;

//city字段
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *provinceId;
- (instancetype)init;

@end
