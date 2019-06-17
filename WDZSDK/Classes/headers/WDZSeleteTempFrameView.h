//
//  WDZSeleteTempFrameView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/10/31.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBaseFrameView.h"
//#import "WDZSeleteTempConfig.h"
@class WDZSeleteTempConfig;
@protocol WDZSeleteTempFrameViewDelegate;
@interface WDZSeleteTempFrameView : WDZBaseFrameView

@property (nonatomic , retain)WDZSeleteTempConfig *configModel;

@property (nonatomic , assign)id <WDZSeleteTempFrameViewDelegate>delegate;

-(NSArray *)didClickOkButton;

@end


@protocol WDZSeleteTempFrameViewDelegate<NSObject>

-(void)didCkickSaveButton;


@end
