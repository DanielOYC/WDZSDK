//
//  WDZLocationPatrolCommentController.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/11.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZCommentConfig.h"

@protocol WDZLocationPatrolCommentControllerDelegate <NSObject>

-(void)WDZLocationPatrolCommentControllerDidClickSure:(NSString *)comment imgModels:(NSMutableArray *)imgModels;

@end

@interface WDZCommentController : UIViewController

@property (nonatomic, weak) id<WDZLocationPatrolCommentControllerDelegate> delegate;

@property (nonatomic, strong) NSString *textStr;

@property (nonatomic, strong) WDZCommentConfig *config;

+(instancetype)commentWithConfig:(WDZCommentConfig *)config delegate:(id<WDZLocationPatrolCommentControllerDelegate>)delegate;
@end
