//
//  WDZBackLogDetsailQuestionModel.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZBackLogDetsailQuestionModel : NSObject
@property (nonatomic, strong) NSArray *detailedRules;
@property (nonatomic, strong) NSArray *urls;
@end

@interface WDZBackLogDetsailRuleslModel : NSObject
@property (nonatomic, copy) NSString * code;
@property (nonatomic, copy) NSString *dbViewShopId;
@property (nonatomic, copy) NSString  *Description;
@property (nonatomic, assign) BOOL hasChecked;
@property (nonatomic, copy) NSString *ID;
@end
