//
//  WDZCreateIssueViewController.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/7/12.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//  新创建问题

#import <UIKit/UIKit.h>
#import "WDZCreateIssueModel.h"
#import "WDZImageShowModel.h"

@class WDZCreateIssueViewController;
@class ChooseClassificationViewController;

@protocol WDZCreateIssueViewControllerDelegate <NSObject>

@optional
//创建问题成功
- (void)createIssueSuccessed;

@required
///**
// 创建问题里点击了门店选择
//
// @param createIssueVC 创建问题的
// @param originShopModel 当前界面选中的shopModel
// @param callBackBlcok 门店选择完回掉
// */
//- (void)createIssueVC:(WDZCreateIssueViewController *)createIssueVC didClickSelectShopWithOriginShopModel:(WDZShopModel *) originShopModel callBackBlocl:(void (^)(WDZShopModel *shopModel))callBackBlcok;

/**
 创建问题点击了图片分享
 */
- (void)createIssueFrameView:(WDZCreateIssueViewController *)createIssueVC didClickSharePictureWithImageModel:(WDZImageShowModel *)imageModel;

//- (void)chooseClassification:(ChooseClassificationViewController *)chooseClassification didClickTemplateCallBackBlock:(void (^)(id))callBackBlock;

@end

@interface WDZCreateIssueViewController : UIViewController

@property (nonatomic, strong) id<WDZCreateIssueViewControllerDelegate> delegate;
/**
 调用此控制器，如果需要传输相关数据，则通过此模型传递数据
 */
@property (strong, nonatomic) WDZCreateIssueModel *issueModel;

@end
