//
//  WDZBackLogDetailQuestionFrameModel.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class WDZBackLogDetsailQuestionModel;
@interface WDZBackLogDetailQuestionFrameModel : NSObject

@property (nonatomic, strong) WDZBackLogDetsailQuestionModel  *model;

@property (nonatomic, strong) NSMutableArray *desArray;

@property (nonatomic, strong) NSMutableArray *desHeightArray;

@end
