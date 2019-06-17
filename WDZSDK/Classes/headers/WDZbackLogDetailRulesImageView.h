//
//  WDZbackLogDetailRulesImageView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZbackLogDetailRulesImageViewDelegate <NSObject>
-(void)WDZbackLogDetailRulesImageViewDidClickImg:(NSInteger)index;
@end

@interface WDZbackLogDetailRulesImageView : UIView
@property (nonatomic, weak) id<WDZbackLogDetailRulesImageViewDelegate> delegate;
@property (nonatomic, strong) NSArray *imgDatas;
@end
