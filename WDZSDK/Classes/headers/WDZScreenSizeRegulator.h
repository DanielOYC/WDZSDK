//
//  WDZScreenSizeRegulator.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/19.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZScreenSizeRegulator : NSObject

//+ (CGFloat)regulateWidthFromSix:(CGFloat)orginWidth;
//
//
//+ (CGFloat)regulateHeightFromSix:(CGFloat)orginHeight;
/**
 *  从375宽屏转换宽度
 *
 *  @param orginWidth 6上面的宽度
 *
 *  @return 转换后的结果
 */
CGFloat regulateWidthFromSix(CGFloat origin);
/**
 *  从6的高度转换 (不适配6以上)
 *
 *  @param orginHeight 6上面的高度
 *
 *  @return 转化后的结果
 */
CGFloat regulateHeightFromSix(CGFloat origin);

/**
 *  适配ipad
 *
 *  @param origin <#origin description#>
 *
 *  @return <#return value description#>
 */

CGFloat regularWidthForPadWith6(CGFloat origin);
CGFloat regularHeightForPadWith6(CGFloat origin);

CGFloat regulateWidth(CGFloat origin);
CGFloat regulateHeight(CGFloat origin);


BOOL currentDeviceIsiPad();
@end
