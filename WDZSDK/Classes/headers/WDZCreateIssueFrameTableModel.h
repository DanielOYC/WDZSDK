//
//  WDZCreateIssueFrameTableModel.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/7/16.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZCreateIssueFrameTableModel : NSObject

// 左边tagLabel的title
@property (copy, nonatomic) NSString *leftTagLabelTitle;

// 右边图标
@property (copy, nonatomic) NSString *rightIconName;

// 缺省文字
@property (copy, nonatomic) NSString *defaultHint;

// 中间展示内容
@property (copy, nonatomic) NSString *centerContent;

// 默认文字颜色，十六进制字符串
@property (copy, nonatomic) NSString *defaultColor;

// 选中文字颜色，十六进制字符串
@property (copy, nonatomic) NSString *selectedColor;

// cell行高
@property (assign, nonatomic) CGFloat cellHeight;

// 到期日
@property (assign, nonatomic) BOOL isExpiredDate;


@end
