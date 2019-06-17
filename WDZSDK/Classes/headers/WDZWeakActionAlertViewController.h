//
//  WDZWeakActionAlertViewController.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZWeakActionAlertViewController : WDZBaseViewController

-(instancetype _Nullable )initWithTitle:(NSString *)title selectList:(NSString *_Nonnull)selectList Target:(nullable id)target sureAction:(SEL _Nonnull )sureAction cancelAction:(SEL _Nullable )cancelAction;

@end
