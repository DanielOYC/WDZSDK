//
//  WDZViewController.m
//  WDZSDK
//
//  Created by DanielOYC on 06/11/2019.
//  Copyright (c) 2019 DanielOYC. All rights reserved.
//

#import "WDZViewController.h"
#import "WDZDevelopModuleMediator.h"
#import "WDZDevelopCenter.h"

@interface WDZViewController ()

@end

@implementation WDZViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [WDZDevelopCenter setAmapAppKey:@"9768c3b4c437cef2e7bbbeb059671a2e"];
    [WDZDevelopCenter registerWDZPlayerWithAsid:@"" token:@"11C44B74CE21172BACD116890A5A26D92FEC6BD1FB986EC81C70DDFE8FFB146A34F8820F56128B8A485FED11110D8406C0C2198A95AF4112D10D2A0611A5EF29" Compeltion:^(BOOL isSuccess, NSDictionary * _Nonnull params) {
        
        NSLog(@"dadadadad");
    }];
    
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [super touchesBegan:touches withEvent:event];
    
    [self presentViewController:[WDZDevelopModuleMediator wdz_getShopModuleControllerByLocation] animated:YES completion:nil];
}
@end
