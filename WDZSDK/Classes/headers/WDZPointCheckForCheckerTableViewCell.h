//
//  WDZPointCheckForCheckerTableViewCell.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/15.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZShapeLabel.h"
#import "WDZCheckUnitModel.h"
#import "WDZPointTaskModel.h"

@protocol WDZPointCheckForCheckerTableViewCellDelegate ;
@interface WDZPointCheckForCheckerTableViewCell : UITableViewCell

@property (weak , nonatomic) id<WDZPointCheckForCheckerTableViewCellDelegate> delegate;

@property (weak , nonatomic) IBOutlet UITextField *avoidKeyboard;

@property (weak, nonatomic) IBOutlet UIButton *editBtn;
@property (weak , nonatomic) IBOutlet UIButton *okBtn;
@property (weak , nonatomic) IBOutlet UIButton *failBtn;
- (IBAction)onNotApply:(id)sender;
@property (weak , nonatomic) IBOutlet WDZShapeLabel *remarkLabel;
@property (weak, nonatomic) IBOutlet UIButton *notApply;
@property (weak , nonatomic) IBOutlet UILabel *titleLabel;
@property (weak , nonatomic) IBOutlet UILabel *statusLabel;
- (IBAction)onDelete:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *deleteBtn;

- (IBAction)onEditClick:(id)sender;

@property (assign ,nonatomic) TaskStateType pointTaskType;

@property (strong , nonatomic) WDZCheckUnitModel *checkUnitModel;

@property (strong , nonatomic) WDZPointTaskModel *pointTaskModel;

@property (strong , nonatomic) NSIndexPath *cellIndexPath;

+(float)heightForCellWithModel:(WDZCheckUnitModel *)model;

- (void)displayWithModel:(WDZCheckUnitModel *)model;

#pragma mark -- 增加一个userModel,用来判断用户的类型(店面经理，还是点检员)
@property (strong , nonatomic)WDZUserModel *userModel;

+ (id)initFromNib;


- (IBAction)OnOKBtnClicked:(id)sender;
- (IBAction)OnFailBtnClicked:(id)sender;

@end

@protocol WDZPointCheckForCheckerTableViewCellDelegate <NSObject>

- (void)WDZPointCheckForCheckerTableViewCellOnRemarkBtnClickedWithModel:(WDZCheckUnitModel *)model andCellIndex:(NSIndexPath *)indexPath;

- (void)WDZPointCheckForCheckerTableViewCellResignFirstResponderDelegate;

- (void)pointCheckRemarkTableViewCellOnDeleteArr:(NSArray *)Arr;

@end

