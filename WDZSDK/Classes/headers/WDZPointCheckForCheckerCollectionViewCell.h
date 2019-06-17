//
//  WDZPointCheckForCheckerCollectionViewCell.h
//  WDZStore
//  点检详情cell
//  Created by 郑来贤 on 14/12/15.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TPKeyboardAvoidingTableView.h"
#import "WDZPointCheckForCheckerTableViewCell.h"
#import "CycleScrollView.h"
#import "WDZPointTaskModel.h"


@class WDZBaseView;

@protocol WDZPointCheckForCheckerCollectionViewCellDelegate;
@interface WDZPointCheckForCheckerCollectionViewCell : UICollectionViewCell
<UITableViewDelegate,UITableViewDataSource,WDZPointCheckForCheckerTableViewCellDelegate>
{
    UIButton *nextBtn;
    
//    WDZEmptyDataView *loadImageErrorView;
}

@property (strong , nonatomic)   CycleScrollView *xlcycleScrollView;

@property (weak , nonatomic) IBOutlet TPKeyboardAvoidingTableView *tableView;

@property (weak , nonatomic) IBOutlet  WDZBaseView *bgView;

@property (strong , nonatomic) NSIndexPath *cellIndexPath;

@property (weak ,  nonatomic) IBOutlet NSLayoutConstraint *top_tableView;

@property (weak , nonatomic) id<WDZPointCheckForCheckerCollectionViewCellDelegate> delegate;

@property (strong , nonatomic) WDZPointTaskModel *pointTaskModel;

@property (assign , nonatomic) int index;

- (void)disCellWithPointTask:(WDZPointTaskModel *)pointTask;


@end

@protocol WDZPointCheckForCheckerCollectionViewCellDelegate <NSObject>

- (void)WDZPointCheckForCheckerCollectionViewCellOnRemarkWithModel:(WDZPointTaskModel *)model andCellIndexPath:(NSIndexPath *)cellIndexPath;

- (void)WDZPointCheckForCheckerCollectionViewCellOnSaveWithCellIndexPath:(NSIndexPath *)cellIndexPath;

- (void)WDZPointCheckForCheckerCollectionViewCellResignFirstResponderDelegate;
- (void)pointCheckRemarkTableViewCellOnDeleteArr:(NSArray *)Arr;

- (void)WDZPointCheckForCheckerCollectionViewCellPointTaskImageClicked:(UIImage *)pointTaskImage andPicID:(NSString *)picID andPointTaskID:(NSString *)pointID andIndex:(int)index;

@end
