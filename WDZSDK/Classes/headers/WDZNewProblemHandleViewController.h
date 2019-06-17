//
//  WDZNewProblemHandleViewController.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBaseViewController.h"

typedef enum : NSUInteger {
    WDZNewProblemHandleActionFromTranspond = 0, //转发事件
    WDZNewProblemHandleActionFromReject = 1, //整改不允许
    WDZWDZNewProblemHandleActionFromResolve = 2,//整改允许
    WDZNewProblemHandleActionFromNone = 3,
    
} WDZNewProblemHandleActionFromType;

@interface WDZNewProblemHandleViewController : WDZBaseViewController

@property (nonatomic, assign) WDZNewProblemHandleActionFromType actionType;

@property (nonatomic, strong) NSIndexPath *indexPath;

@property (strong , nonatomic) NSArray *problems;

-(instancetype)initWithProblems:(NSArray *)problems;

-(void)hiddenCommentView;
@end
