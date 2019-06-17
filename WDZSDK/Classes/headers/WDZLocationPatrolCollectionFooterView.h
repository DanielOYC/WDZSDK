//
//  WDZLocationPatrolCollectionFooterView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/20.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZLocationPatrolSubModel.h"
@protocol WDZLocationPatrolCollectionFooterViewDelegate;

@interface WDZLocationPatrolCollectionFooterView : UICollectionReusableView

@property (nonatomic , assign)id<WDZLocationPatrolCollectionFooterViewDelegate>delegate;


@property (nonatomic , retain)UIButton *cameraButton;//拍照
@property (nonatomic , retain)UIButton *deleteAllButton;
@property (nonatomic , retain)UIButton *notApplicableButton;//不支持
@property (nonatomic , retain)UIButton *notPassButton;//不通过
@property (nonatomic , retain)UIButton *passButton;//通过按钮
@property (nonatomic , retain)UILabel *scoreLabel;//得分
@property (nonatomic , retain)UIButton *changeScore;//修改得分

-(void)disPlayWithModel:(WDZLocationPatrolSubModel *)model;

@end


@protocol WDZLocationPatrolCollectionFooterViewDelegate <NSObject>

/**
 拍照
 */
-(void)footerViewDidTakePhoto:(WDZLocationPatrolCollectionFooterView *)footerView;

/**
 点击删除全部按钮
 */
-(void)didClickDeleteButtonWithFooterView:(WDZLocationPatrolCollectionFooterView *)footerView;

/**
 修改分数
 */
-(void)footerViewDidChangeScore:(WDZLocationPatrolCollectionFooterView *)footerView;

/**
 不通过
 */
-(void)footerViewDidClickNotPassButton:(WDZLocationPatrolCollectionFooterView *)footerView;

/**
 通过
 */
-(void)footerViewDidPassButton:(WDZLocationPatrolCollectionFooterView *)footerView;

/**
 不适用
 */
-(void)footerViewDidNoSupButton:(WDZLocationPatrolCollectionFooterView *)footerView;

@end
