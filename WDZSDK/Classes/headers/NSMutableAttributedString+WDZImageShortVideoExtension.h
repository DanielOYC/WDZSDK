//
//  NSMutableAttributedString+WDZImageShortVideoExtension.h
//  WDZPublicComponent
//
//  Created by dingkan on 2018/10/31.
//

#import <Foundation/Foundation.h>

@interface NSMutableAttributedString (WDZImageShortVideoExtension)
//添加富文本
+(NSMutableDictionary *)getAttDictWithLineSpacing:(int)lineSpacing font:(UIFont *)font color:(UIColor *)color;
//指定富文本宽度 获取高度
-(CGFloat)getCommentStrHeightWithWidth:(CGFloat)width;
@end
