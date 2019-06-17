//
//  WDZNewProblemHandleCell.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZProblem;
@protocol WDZNewProblemHandleCellDelegate <NSObject>

/**
 图片预览
 index:  当前图片索引
 imgs:  数据源
 */
-(void)WDZNewProblemHandleCellThumbImgWithIndex:(NSInteger)index imgs:(NSArray *)imgs;

/**
 播放
 */
-(void)WDZNewProblemHandleCellDidClickPlayBtn:(UIButton *)btn problem:(WDZProblem *)problem;

/**
 详情
 */
-(void)WDZNewProblemHandleCellDidClickDetailBtn:(UIButton *)btn problem:(WDZProblem *)problem;
/**
 评论触发事件
 */
-(void)WDZNewProblemHandleCellDidBeginEditingWithUnit:(WDZProBlemHandleModel *)unit;
/**
 整改不通过
 */
-(void)WDZNewProblemHandleCellDidClickRejectBtn:(UIButton *)btn problem:(WDZProblem *)problem  isOperate:(BOOL)isOperate;
/**
 整改通过
 */
-(void)WDZNewProblemHandleCellDidClickResolveBtn:(UIButton *)btn problem:(WDZProblem *)problem  isOperate:(BOOL)isOperate;
/**
 每次刷新数据
 */
-(void)WDZNewProblemHandleCellDidRequestDataFormServerWithProblem:(WDZProblem *)problem isFinfish:(BOOL)isFinish;

@end

@interface WDZNewProblemHandleCell : UICollectionViewCell

@property (nonatomic, strong) WDZProblem *problem;

@property (nonatomic, weak) id<WDZNewProblemHandleCellDelegate> delegate;
/**
 当前cell 请求最新刷剧
 */
-(void)requestNewDataToRefreshUI;
@end
