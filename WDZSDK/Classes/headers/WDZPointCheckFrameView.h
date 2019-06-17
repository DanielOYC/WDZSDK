//
//  WDZPointTasksForCheckerFrameView.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/5.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

typedef enum {
    ComeFromShopTaskForChecker = 0,
    ComeFromPointTasks,
} ComeFromVC;

#import "WDZBaseFrameView.h"
#import "HPGrowingTextView.h"
#import "WDZPointTaskModel.h"
@class WDZBaseViewController;

@class RemarkInputViewForChecker;
@protocol WDZPointCheckFrameViewDelegate;

@interface WDZPointCheckFrameView : WDZBaseFrameView

{
    RemarkInputViewForChecker *inputView;
    WDZPointTaskModel *seletedPointTaskModel;
    NSIndexPath *markedCellIndexPath;
    //    UICollectionView *_collectionView;
    //    WDZEmptyDataView *loadEmptyView;
    WDZErrorView     *loadErrorView;
    
}

@property (weak , nonatomic) id<WDZPointCheckFrameViewDelegate> delegate;

@property (strong , nonatomic) NSMutableArray *pointTasks;

@property (strong , nonatomic) WDZShopTaskModel *shopTaskModel;

- (void)loadErr;

- (void)displayWithModels:(NSArray *)points andIndex:(int)index;

- (void)scrollToIndex:(NSIndexPath *)index;

- (void)comeFromVC:(ComeFromVC)comeVC_Type;

-(void)reloadData;

@end

@protocol WDZPointCheckFrameViewDelegate <NSObject>

- (void)WDZPointCheckFrameViewOnBackBtnClicked;

- (void)WDZPointCheckFrameViewOnCompeleted;

- (void)WDZPointCheckFrameViewOnRightClickedWithPointTasks:(NSArray *)pointTasks andCurrentPage:(int)currentPage;

- (void)WDZPointCheckFrameViewPointTaskImageClicked:(UIImage *)pointTaskImage andPicID:(NSString *)picID andPointTaskID:(NSString *)pointID andIndex:(int)index;

@end



@interface RemarkInputViewForChecker :UIView

@property (strong , nonatomic) HPGrowingTextView *textView;

@property (weak , nonatomic) id delegate;

@end
