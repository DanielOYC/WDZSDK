//
//  WDZBackLogDetailRulesManager.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZBackLogDetailQuestionFrameModel;
@interface WDZBackLogDetailRulesManager : UIView
+(void)showBackLogDetailRulesViewWithModel:(WDZBackLogDetailQuestionFrameModel *)model;
+(void)dismiss;
@end
