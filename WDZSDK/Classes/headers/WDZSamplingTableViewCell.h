//
//  WDZSamplingTableViewCell.h
//  WDZStore
//
//  Created by 郑来贤 on 15/4/21.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZProblem.h"

@protocol WDZSamplingTableViewCellDelegate;

@interface WDZSamplingTableViewCell : UITableViewCell
{
    WDZProblem *problem;
}

@property (weak , nonatomic) IBOutlet UIImageView *coverImageV;
@property (weak , nonatomic) IBOutlet UILabel     *nameLabel;
@property (weak , nonatomic) IBOutlet UILabel     *statusLab;


@property (weak , nonatomic) id<WDZSamplingTableViewCellDelegate> delegate;

+ (id)initFromNib;

- (IBAction)onPlay:(id)sender;
- (IBAction)onDownload:(id)sender;
- (IBAction)onShare:(id)sender;

- (void)displayCellWithModel:(WDZProblem *)pro;

@end

@protocol WDZSamplingTableViewCellDelegate <NSObject>

- (void)samplingTableViewDidSelectPlay:(WDZProblem *)pro;
- (void)samplingTableViewDidSelectDownload:(WDZProblem *)pro;
- (void)samplingTableViewDidSelectShare:(WDZProblem *)pro;

@end
