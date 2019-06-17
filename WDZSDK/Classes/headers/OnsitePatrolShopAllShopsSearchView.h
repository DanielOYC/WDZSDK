//
//  OnsitePatrolShopAllShopsSearchView.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/17.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OnsitePatrolShopAllShopsSearchView;
@protocol OnsitePatrolShopAllShopsSearchViewDelegate <NSObject, UIScrollViewDelegate>

@optional
- (void)searchView:(OnsitePatrolShopAllShopsSearchView *)searchView didSelectShop:(NSDictionary *)shopInfo atIndex:(NSInteger)index;

@end

@interface OnsitePatrolShopAllShopsSearchView : UIView

@property (weak, nonatomic) id<OnsitePatrolShopAllShopsSearchViewDelegate>delegate;

@property (assign, nonatomic) BOOL searchActive;

@property (copy, nonatomic) NSString *searchText;

// 显示
- (void)show;
// 隐藏
- (void)hide;

@end
