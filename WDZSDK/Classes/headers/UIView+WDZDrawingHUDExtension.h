//
//  UIView+WDZDrawingHUDExtension.h
//  AFNetworking
//
//  Created by dingkan on 2018/11/22.
//

#import <UIKit/UIKit.h>
#import <MBProgressHUD/MBProgressHUD.h>

@interface UIView (WDZDrawingHUDExtension)
-(void)WDZ_hideActivityHUD;
- (MBProgressHUD *)WDZ_showActivityHUD;
- (void)WDZ_showTextHUDWithPromptMessage:(NSString*)message andOffset_y:(CGFloat) offset_y andMargin:(CGFloat)margin andDuration:(NSTimeInterval) time;
@end
