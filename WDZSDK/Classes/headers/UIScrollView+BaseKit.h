//
//  UIScrollView+BaseKit.h
//  WDZForAppStore
//
//  Created by 李轩霖 on 2018/10/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIScrollView (BaseKit)



/**
 截图
 
 @return 返回截图后的图片
 */
-(UIImage *)captureScreen;



/**
 添加刷新组件
 
 @param target <#target description#>
 @param headerAction <#headerAction description#>
 @param footerAction <#footerAction description#>
 */
-(void)addRefreshWithTarget:(id)target headerAction:(SEL)headerAction footerAction:(SEL)footerAction;

/**
 <#Description#>
 
 @param target <#target description#>
 @param footerAction <#footerAction description#>
 */
-(void)addRefreshWithTarget:(id)target footerAction:(SEL)footerAction;

-(void)addRefreshWithTarget:(id)target headerAction:(SEL)headerAction;

@end
