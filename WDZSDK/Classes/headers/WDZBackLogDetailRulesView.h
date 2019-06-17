//
//  WDZBackLogDetailRulesView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZBackLogDetailQuestionFrameModel;

@protocol WDZBackLogDetailRulesViewDelegate <NSObject>
-(void)WDZBackLogDetailRulesViewWillDismiss;
@end

@interface WDZBackLogDetailRulesView : UIView
@property (nonatomic, weak) id<WDZBackLogDetailRulesViewDelegate> delegate;
@property (nonatomic, strong) WDZBackLogDetailQuestionFrameModel *model;
@end
