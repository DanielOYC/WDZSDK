//
//  WDZNewProblemDetailCell.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZNewProblemCommentFrameModel;
@protocol WDZNewProblemDetailCellDelegate <NSObject>
-(void)WDZNewProblemDetailCellDidClickImg:(NSInteger)index imgs:(NSArray *)imgs;
@end

@interface WDZNewProblemDetailCell : UITableViewCell

@property (nonatomic, strong) WDZNewProblemCommentFrameModel *model;

@property (nonatomic, weak) id<WDZNewProblemDetailCellDelegate> delegate;

@end
