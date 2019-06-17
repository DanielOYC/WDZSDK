//
//  WDZEmptyView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/4/24.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZEmptyView;
@protocol WDZEmptyViewDelegate <NSObject>

@optional
- (void)emptyViewDidClickImage:(WDZEmptyView *)emptyView;

@end

@interface WDZEmptyView : UIView

@property (nonatomic, copy) NSString *descriptionText;

@property (nonatomic, strong) UIImage *image;

@property (nonatomic, weak) id<WDZEmptyViewDelegate> delegate;

@end
