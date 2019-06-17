//
//  UIView+KDImagePickerExtension.h
//  test
//
//  Created by dingkan on 2018/10/6.
//  Copyright © 2018年 dingkan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MBProgressHUD/MBProgressHUD.h>

@interface UIView (KDImagePickerExtension)

// hide activity
-(void)kd_hideActivityHUD;
- (MBProgressHUD *)kd_showActivityHUD;
- (void)kd_showTextHUDWithPromptMessage:(NSString*)message andOffset_y:(CGFloat) offset_y andMargin:(CGFloat)margin andDuration:(NSTimeInterval) time;
@end
