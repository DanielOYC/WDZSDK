//
//  WDZTextField.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/5/16.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define WDZTextFieldPaddingWidth  (10.0f)
#define WDZTextFieldPaddingHeight (5.0f)

typedef void(^WDZ_textFieldLengthOverLimitBlock)(NSInteger maxLengthOfText);


@interface WDZTextField : UITextField


/** 占位文字普通颜色 */
@property (nonatomic, strong) UIColor *placeHolderNormalColor;

/** 成为第一响应者时占位文字的文字颜色 */
@property (nonatomic, strong) UIColor *placeHolderHighlightedColor;

/** 占位文字字体大小 */
@property (nonatomic, assign) CGFloat placeHolderFontSize;

/** 左右缩进 默认为10 */
@property (nonatomic, assign) CGFloat paddingWith;

/** 上下缩进 默认为5 */
@property (nonatomic, assign) CGFloat paddingHeight;

/** 左侧内边距(不推荐使用，建议使用paddingWith) */
@property (nonatomic, assign) CGFloat leftMargin;

/** 右侧内边距(不推荐使用，建议使用paddingWith) */
@property (nonatomic, assign) CGFloat rightMargin;

/** clearButton普通状态图片 */
@property (nonatomic, copy) NSString *clearButtonNormalImageName;

/** clearButton高亮状态图片 */
@property (nonatomic, copy) NSString *clearButtonHighlightedImageName;

/** 设置边框宽度，默认没有边框 */
@property (nonatomic, assign) NSUInteger borderWidth;

/** 设置边框颜色，默认为亮灰色 */
@property (nonatomic, strong) UIColor *borderColor;

/** 设置圆角，默认没有圆角 */
@property (nonatomic, assign) NSUInteger cornerRadius;

/** 光标宽度，默认为2 */
@property (nonatomic, assign) NSUInteger cursorWidth;

/** 光标高度，默认为 self.font.lineHeight + 4 */
@property (nonatomic, assign) NSUInteger cursorHeight;

/** textField可以输入的最大字数,默认没有字数限制 */
@property (nonatomic, assign) NSUInteger maxLengthOfText;

/**
 *  文字字数超出设定值会自动调用
 *  block参数(maxLengthOfText) → 文字长度最大值
 */
@property (nonatomic, strong) WDZ_textFieldLengthOverLimitBlock textOverLimitBlock;

/** 禁止粘贴，默认为NO */
@property (nonatomic, assign) BOOL forbidPaste;

/** 设置为密码输入样式 */
@property (nonatomic, assign) BOOL PasswordMode;


@end
