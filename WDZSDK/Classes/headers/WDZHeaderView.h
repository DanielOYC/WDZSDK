//
//  WDZShopListTableHeaderView.h
//  WDZStore
//
//  Created by 郑来贤 on 15/1/15.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZHeaderViewDelegate;
@interface WDZHeaderView : UIView

- (void)setText:(NSString *)text;

@property (weak , nonatomic) id<WDZHeaderViewDelegate> delegate;



@end

@protocol WDZHeaderViewDelegate <NSObject>

@optional
- (void)head:(WDZHeaderView *)view didSelectedWithSection:(NSInteger )section;
- (void)head:(WDZHeaderView *)view didSelectedAllWithSection:(NSInteger )section;

@end
