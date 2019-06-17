//
//  WDZDoodleDrawerPaintPath.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/4.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZDoodleDrawerPaintPath : UIBezierPath
+ (instancetype)paintPathWithLineWidth:(CGFloat)width
                            startPoint:(CGPoint)startP;

+(void)refreshDrawerPaintPath:(WDZDoodleDrawerPaintPath *)path oldFrame:(CGRect)oldFrame newFrame:(CGRect)newFrame;
@end
