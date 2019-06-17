//
//  UIViewController+BaseKit.h
//  WDZForAppStore
//
//  Created by 李轩霖 on 2018/10/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface UIViewController (BaseKit)<MFMailComposeViewControllerDelegate>

- (void)sendMailToEmail:(NSString *)email withTitle:(NSString *)title withImage:(UIImage *)img;

- (void)sendMail;

@end
