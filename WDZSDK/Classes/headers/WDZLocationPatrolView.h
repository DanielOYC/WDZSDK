//
//  WDZLocationPatrolView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/11.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZCommentConfig;
@interface WDZLocationPatrolView : UIView

-(instancetype)initWithFrame:(CGRect)frame config:(WDZCommentConfig *)config;
-(NSMutableArray *)getChoosePhotos;
-(NSString *)getComment;
@end
