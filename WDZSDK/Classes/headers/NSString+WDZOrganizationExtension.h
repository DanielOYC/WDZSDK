//
//  NSString+WDZOrganizationExtension.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/18.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (WDZOrganizationExtension)

- (CGSize )getSizeWithFont:(UIFont *)font constrainedWidth:(CGFloat)width numberOfLines:(NSInteger)numberOfLines;
@end
