//
//  WDZOSSToolHelper.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/9/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MBProgressHUD/MBProgressHUD.h>

@interface WDZOSSToolHelper : NSObject
//修改图片
+ (UIImage *)fixOrientationWithImage:(UIImage *)fixImage;
//获取对应的时间
+ (NSString *)currentDateStringWithFormat:(NSString *)formatterStr;
//展示HUD
+ (MBProgressHUD *)WDZ_showProgressWithDescroption:(NSString *)descripotion withView:(UIView *)containView;
//隐藏HUD
+ (void)WDZ_hideActivityHUDInContainView:(UIView *)containView;
@end
