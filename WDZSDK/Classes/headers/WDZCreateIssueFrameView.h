//
//  WDZCreateIssueFrameView.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/7/12.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZImageShowModel.h"
#import "WDZCreateIssueModel.h"

@class ChooseClassificationViewController;
@class WDZCreateIssueFrameView;

//#import "WDZShopModel.h"
//#import "WDZImageShowModel.h"
//#import "ChooseClassificationViewController.h"

@protocol WDZCreateIssueFrameViewDelegate <NSObject>

@optional
- (void)createIssueFrameViewSuccessed;

@required
///**
// 创建问题里点击了门店选择
//
// @param createIssueFrameView 创建问题的View
// @param originShopModel 当前界面选中的shopModel
// @param callBackBlcok 门店选择完回掉
// */
//- (void)createIssueFrameView:(WDZCreateIssueFrameView *)createIssueFrameView didClickSelectShopWithOriginShopModel:(WDZShopModel *) originShopModel callBackBlocl:(void (^)(WDZShopModel *shopModel))callBackBlcok;

/**
 创建问题点击了图片分享
 */
- (void)createIssueFrameView:(WDZCreateIssueFrameView *)createIssueFrameView didClickSharePictureWithImageModel:(WDZImageShowModel *)imageModel;

//- (void)chooseClassification:(ChooseClassificationViewController *)chooseClassification didClickTemplateCallBackBlock:(void (^)(id))callBackBlock;
@end

@interface WDZCreateIssueFrameView : WDZBaseFrameView

@property (nonatomic, weak) id<WDZCreateIssueFrameViewDelegate> delegate;
/**
 调用此控制器，如果需要传输相关数据，则通过此模型传递数据
 */
@property (strong, nonatomic) WDZCreateIssueModel *issueModel;

@end
