//
//  WDZProblemRemarkTableViewCell.h
//  WDZLaiYiFen
//
//  Created by 郑来贤 on 15/7/13.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZProblemRemarkTableViewCellDelegate;

@interface WDZProblemRemarkTableViewCell : UITableViewCell
{
    NSDictionary *modelDic;
}
@property (weak, nonatomic) IBOutlet UIImageView *commandimageView;
@property (weak , nonatomic) IBOutlet UILabel *contentLabel;
@property (weak , nonatomic) IBOutlet UIView  *bgView;
@property (weak, nonatomic) IBOutlet UIButton *deleteBtn;

/**
 评论图片的原图
 */
@property (strong , nonatomic)NSMutableArray *cellImageMutableArray;

/**
 评论图片的缩略图
 */
@property (strong , nonatomic)NSMutableArray *cellThumbMutableArray;

@property (weak , nonatomic) id<WDZProblemRemarkTableViewCellDelegate> delegate;


- (IBAction)onDeleteBtnClick:(id)sender;

+ (instancetype)initFromNib;

+ (CGFloat)heightForHeadViewWithDic:(NSDictionary *)d;

- (void)disPlayViewWithDic:(NSDictionary *)d;

@end

@protocol WDZProblemRemarkTableViewCellDelegate <NSObject>

- (void)problemRemarkTableViewCellOnDeleteDic:(NSDictionary *)d;

@end
