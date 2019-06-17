//
//  WDZNewProblemHandleView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBaseFrameView.h"
#import "WDZNewProblemHandleCell.h"
#import "UIView+NavigationBar.h"

@class WDZProblem;

@protocol WDZNewProblemHandleViewDelegate <NSObject>
-(void)WDZNewProblemHandleViewDidClickBack;
-(void)WDZNewProblemHandleViewDidClickHandleBtn:(UIButton *)btn;
//监听滑动事件
-(void)WDZNewProblemHandleViewDidScrollToIndex:(NSInteger)index problem:(WDZProblem *)problem;
-(void)WDZNewProblemHandleViewDidRefreshNavTitle:(NSString *)title isHiddenHandleBtn:(BOOL)hidden;
@end

@interface WDZNewProblemHandleView : UIView

@property (nonatomic, strong) NSIndexPath *indexPath;

@property (nonatomic, weak) id<WDZNewProblemHandleViewDelegate> delegate;

@property (strong , nonatomic) NSArray *problems;

@property (nonatomic, weak) id<WDZNewProblemHandleCellDelegate> target;
/**
 重新请求刷新当前cell
 */
-(void)requestNewDataToRefreshCurrentCell;
-(void)scrollToIndex:(NSIndexPath *)indexPath position:(UICollectionViewScrollPosition)position;

@end
