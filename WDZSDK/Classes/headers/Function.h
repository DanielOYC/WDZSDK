//
//  Function.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/3/11.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Function : NSObject

+ (BOOL)onlyHasSpaceOrLinefeedCharactor:(NSString *)text;
+ (CGSize)labelSizeForText:(NSString *)text withFont:(UIFont *)font andMaxWidth:(CGFloat)maxWidth;
+ (UIActivityIndicatorView *)createActivityIndicatorViewWithFrame:(CGRect)frame activityIndicatorViewStyle:(UIActivityIndicatorViewStyle)activityIndicatorViewStyle andColor:(UIColor *)color;
+(BOOL)functionYes;

@end
