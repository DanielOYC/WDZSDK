//
//  OnsitePatrolShopTakePhotoViewController.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/30.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBaseViewController.h"
#import "OnsitePatrolShopTakePhotoView.h"
#import "WDZLocationPatrolModel.h"
#import "WDZLocationPatrolSubModel.h"

typedef void(^OnsitePatrolShopTakePhotoViewReturnBlock)(BOOL textChanged, BOOL pictureChanged, NSDictionary *returnInfo);

@interface OnsitePatrolShopTakePhotoViewController : WDZBaseViewController

@property (strong, nonatomic) WDZShopModel *shop;

@property (strong, nonatomic) OnsitePatrolShopTakePhotoView *takePhotoView;

/**
 用来上传数据的参数，上层传入的数据
 */
@property (nonatomic , retain)WDZLocationPatrolModel *mainModel;
/**
 用来上传数据的参数，上层传入的数据
 */
@property (nonatomic , retain)WDZLocationPatrolSubModel *subModel;

@property (nonatomic  , retain)NSString *taskId;



@property (strong,nonatomic)NSString *deviceId;

//修改多图选择新增属性
@property (nonatomic , assign)BOOL isSelectOriginalPhoto;
@property (nonatomic , retain)NSMutableArray *selectedAssets;
//上次选中的图片
@property (strong , nonatomic )NSArray *lastImageArray;


// 传入上一次编辑的文本（可以传空）
@property (copy, nonatomic) NSString *userDescription;
// 传入上一次编辑的图片（可以传空）
@property (strong, nonatomic) NSArray<NSDictionary *> *pictureArray;

// 判断是否是再次编辑（进界面之前是不是已经编辑过文本和图片）
@property (assign, nonatomic) BOOL editAgain;

// 编辑好的文本图片block回调
@property (copy, nonatomic) OnsitePatrolShopTakePhotoViewReturnBlock returnBlock;

@end
