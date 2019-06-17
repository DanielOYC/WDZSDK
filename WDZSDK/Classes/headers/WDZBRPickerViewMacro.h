//
//  WDZBRPickerViewMacro.h
//  WDZBRPickerViewDemo
//
//  Created by 任波 on 2018/4/23.
//  Copyright © 2018年 renb. All rights reserved.
//

#ifndef WDZBRPickerViewMacro_h
#define WDZBRPickerViewMacro_h

// 屏幕大小、宽、高
#ifndef SCREEN_BOUNDS
#define SCREEN_BOUNDS [UIScreen mainScreen].bounds
#endif
#ifndef SCREEN_WIDTH
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#endif
#ifndef SCREEN_HEIGHT
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height
#endif

// RGB颜色(16进制)
#define WDZBR_RGB_HEX(rgbValue, a) \
[UIColor colorWithRed:((CGFloat)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((CGFloat)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((CGFloat)(rgbValue & 0xFF)) / 255.0 alpha:(a)]

#define WDZBR_IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define WDZBR_IS_PAD (UI_USER_INTERFACE_IDIOM()== UIUserInterfaceIdiomPad)

// 等比例适配系数
#define kScaleFit (WDZBR_IS_IPHONE ? ((SCREEN_WIDTH < SCREEN_HEIGHT) ? SCREEN_WIDTH / 375.0f : SCREEN_WIDTH / 667.0f) : 1.1f)

#define kPickerHeight 216
#define kTopViewHeight 44

// 状态栏的高度(20 / 44(iPhoneX))
#define WDZBR_STATUSBAR_HEIGHT ([UIApplication sharedApplication].statusBarFrame.size.height)
#define WDZBR_IS_iPhoneX ((WDZBR_STATUSBAR_HEIGHT == 44) ? YES : NO)
// 底部安全区域远离高度
#define WDZBR_BOTTOM_MARGIN (CGFloat)(WDZBR_IS_iPhoneX ? 34 : 0)

// 默认主题颜色
#define WDZDefaultThemeColor WDZBR_RGB_HEX(0x464646, 1.0)
// topView视图的背景颜色
#define kWDZBRToolBarColor WDZBR_RGB_HEX(0xFDFDFD, 1.0f)

/** 静态库中编写 Category 时的便利宏，用于解决 Category 方法从静态库中加载需要特别设置的问题。*/
#ifndef WDZBRSYNTH_DUMMY_CLASS

#define WDZBRSYNTH_DUMMY_CLASS(_name_) \
@interface WDZBRSYNTH_DUMMY_CLASS_ ## _name_ : NSObject @end \
@implementation WDZBRSYNTH_DUMMY_CLASS_ ## _name_ @end

#endif

// 打印错误日志
#define WDZBRErrorLog(...) NSLog(@"reason: %@", [NSString stringWithFormat:__VA_ARGS__])

#endif /* WDZBRPickerViewMacro_h */
