//
//  WDZDefine.h
//  Pods
//
//  Created by Hayder on 2018/7/10.
//

#ifndef WDZDefine_h
#define WDZDefine_h

#define RGBOF(rgbValue)     [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 \
alpha:1.0]

#pragma mark -------------万店掌app交互规范手册-------------------

#pragma mark -------------颜色-------------------
#pragma mark -------------主色-------------------
#define KFFAE21Color RGBOF(0xFFAE21)
#define KFF6B6BColor RGBOF(0xFF6B6B)
#define K56CC87Color RGBOF(0x56CC87)
#define K5EBCEBColor RGBOF(0x5EBCEB)
#define K7A81CCColor RGBOF(0x7A81CC)

#pragma mark -------------辅助色-------------------

#define KFF9933Color RGBOF(0xFF9933)
#define KFF7B00Color RGBOF(0xFF7B00)
#define KFB4E39Color RGBOF(0xFB4E39)
#define K47CC4CColor RGBOF(0x47CC4C)
#define K297DCCColor RGBOF(0x297DCC)
#define KEE3866Color RGBOF(0xEE3866)

#pragma mark -------------灰色-------------------
#define KBLACKColor RGBOF(0x000000)
#define K999999Color RGBOF(0x999999)
#define KB3B3B3Color RGBOF(0xB3B3B3)
#define KC2C2C2Color RGBOF(0xC2C2C2)
#define KE8E8E8Color RGBOF(0xE8E8E8)
#define KF7F7F7Color RGBOF(0xF7F7F7)

#pragma mark -------------Font-------------------

#define Font(size) [UIFont systemFontOfSize:size]
#define BoldFont(size) [UIFont boldSystemFontOfSize:size]

#endif
