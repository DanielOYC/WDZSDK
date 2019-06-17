//
//  ChooseClassificationViewController.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/5/31.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import "WDZBaseViewController.h"

#import "ChooseClassificationView.h"
#import "WDZSelectMainModel.h"
#import "WDZTempModel.h"

@class ChooseClassificationViewController;

typedef void(^ChooseClassificationBlock)(NSDictionary *selectedClassificationDic,WDZTempModel *tempModel);

@protocol ChooseClassificationViewControllerDelegate <NSObject>

/**
 点击了模版
 */
- (void)chooseClassification:(ChooseClassificationViewController *)chooseClassification didClickTemplateCallBackBlock:(void (^)(id seleteTemp))callBackBlock;

@end

@interface ChooseClassificationViewController : WDZBaseViewController

@property (nonatomic,weak) id <ChooseClassificationViewControllerDelegate> delegate;

@property (strong, nonatomic) ChooseClassificationView *chooseClassificationView;

// 如果已经选择过某个大项，那么再次进入分类界面时应该传入上次选中的大项对应的信息字典
//@property (strong, nonatomic) WDZLocationPatrolModel *seleteMainModel;
// 组件化时，上面的model替换为下面的
@property (strong, nonatomic) WDZSelectMainModel *seleteMainModel;

//选中的模板选项
@property (nonatomic , retain) WDZTempModel *seleteTempModel;
// 组件化时，上面的model替换为下面的
//@property (nonatomic , retain) WDZChooseCategoryTempModel *seleteTempModel;

@property (strong, nonatomic) NSDictionary *selectedMainItemDic;
// 如果已经选择过某个小项，那么再次进入分类界面时应该传入上次选中的小项对应的信息字典
@property (strong, nonatomic) NSDictionary *selectedSubItemDic;
// 如果已经选择过某些细则，那么再次进入分类界面时应该传入上次选中的细则字典所在的数组
@property (strong, nonatomic) NSArray *selectedDetailedRulesArray;

@property (copy, nonatomic) ChooseClassificationBlock block;

@end
