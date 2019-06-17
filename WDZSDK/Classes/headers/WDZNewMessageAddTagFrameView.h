//
//  WDZNewMessageAddTagFrameView.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 2017/3/29.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZTextView.h"
#import "WDZNLabelModel.h"
@protocol WDZNewMessageAddTagFrameViewDelegate;
@interface WDZNewMessageAddTagFrameView : WDZBaseFrameView

@property (nonatomic , weak)id<WDZNewMessageAddTagFrameViewDelegate> delegate;
//导航条名字
@property (nonatomic , retain)NSString *titleString;
//标签名称占位
@property (nonatomic , retain)NSString *placeString;
//已经存在的门店
@property (nonatomic , retain)NSArray  *userArray;

@property (nonatomic , retain)NSString *labelIdString;
@property (nonatomic , retain)NSMutableArray *dataSourceArray;
@property (nonatomic , assign)BOOL isNewLabel;
@property (nonatomic , retain)WDZTextView *nameText;//标签名称;

@property (nonatomic , retain)WDZNLabelModel *seleteInfoModel;

@end

@protocol  WDZNewMessageAddTagFrameViewDelegate <NSObject>
//返回
- (void)frameViewDidBack:(WDZNewMessageAddTagFrameView  *)V;
//确定
- (void)frameViewOKbutton:(WDZNewMessageAddTagFrameView *)V;
//添加门店
- (void)frameViewAddNewShop:(WDZNewMessageAddTagFrameView *)V;


@end
