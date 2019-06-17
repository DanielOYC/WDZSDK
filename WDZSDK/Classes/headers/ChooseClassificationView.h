//
//  issificationView.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/5/31.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChooseClassificationView : UIView

@property (strong, nonatomic) UILabel *titleLabel;
@property (strong, nonatomic) UIButton *cancelButton;
@property (strong, nonatomic) UIButton *confirmButton;
@property (strong, nonatomic) UILabel *tempLabel;

// 考评大项
@property (strong, nonatomic) UITableView *mainItemsTableView;

// 考评细则
@property (strong, nonatomic) UITableView *detailedRulesTableView;

@property (strong, nonatomic) UIView *chooseTempView;


@end
