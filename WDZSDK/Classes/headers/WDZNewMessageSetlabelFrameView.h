//
//  WDZNewMessageSetlabelFrameView.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 2017/3/30.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZNLabelModel.h"
#import "WDZEmptyDataView.h"
@protocol WDZNewMessageSetLabelFrameViewDelegate;
@interface WDZNewMessageSetlabelFrameView : WDZBaseFrameView
@property (nonatomic , weak)id<WDZNewMessageSetLabelFrameViewDelegate>delegate;


@property (nonatomic , retain)NSMutableArray *dataSourceArray;
//用来传递当前选中的cell的数据
@property (nonatomic , retain)WDZNLabelModel *seleteInfoModel;
@property (nonatomic , retain)NSMutableArray *seleteArray;

@property (nonatomic , retain)WDZEmptyDataView *emptyDataView;


@property (nonatomic , retain)WDZNLabelModel *infoModel;
@end

@protocol WDZNewMessageSetLabelFrameViewDelegate <NSObject>

- (void)frameViewDidBack:(WDZNewMessageSetlabelFrameView *)V;

- (void)frameViewCreatNewMessageLabel:(WDZNewMessageSetlabelFrameView *)V;

- (void)frameViewChangeNewMessageLabel:(WDZNewMessageSetlabelFrameView *)V;
@end
