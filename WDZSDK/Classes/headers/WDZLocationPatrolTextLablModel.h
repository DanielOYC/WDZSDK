//
//  WDZLocationPatrolTextLablModel.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/23.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZLocationPatrolTextLablModel : NSObject

#pragma mark - 根据文字计算cell的高度
+ (CGFloat)detailedRuleCellHeightForText:(NSString *)text withWidth:(CGFloat)width withFount:(CGFloat)font;

@end
