//
//  WDZAddNewLabelFrameView.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 2017/2/10.
//  Copyright © 2017年 zhenglaixian. All rights reserved.

#import "WDZBaseFrameView.h"
#import "WDZTextView.h"

@protocol WDZAddNewLabelFrameViewDelegate;
@interface WDZAddNewLabelFrameView : WDZBaseFrameView
@property (nonatomic , weak)id <WDZAddNewLabelFrameViewDelegate> delegate;
@property (nonatomic , retain)NSString *titleString;
@property (nonatomic , retain)NSString *placeString;
@property (nonatomic , retain)NSArray  *userArray;
@property (nonatomic , retain)NSString *labelIdString;
@property (nonatomic , retain)NSMutableArray *sectionArray;
@property (nonatomic , assign)BOOL isNewLabel;
@property (nonatomic , retain)WDZTextView *nameText;//标签名称;

@end
@protocol WDZAddNewLabelFrameViewDelegate <NSObject>

- (void)frameViewDidBack:(WDZAddNewLabelFrameView *)v;

- (void)frameViewAddUser:(WDZAddNewLabelFrameView *)v;

- (void)frameViewOk:(WDZAddNewLabelFrameView *)v;

@end
