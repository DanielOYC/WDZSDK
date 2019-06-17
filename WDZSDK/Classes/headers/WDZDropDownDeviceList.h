//
//  WDZDropDownDeviceList.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/12/4.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import "WDZTableRefreshView.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WDZDropDownDeviceListDelegate <NSObject>

//选中了某个视频
- (void)dropDownDeviceListDidSelectedVideoModel:(WDZVideoModel *)videoModel;

@end

@interface WDZDropDownDeviceList : WDZTableRefreshView

@property (nonatomic, getter=isShowStatus) BOOL showStatus;

@property (nonatomic, strong) WDZShopModel *shopModel;

@property (nonatomic, weak) id<WDZDropDownDeviceListDelegate> delegate;

//显示
- (void)show;

//隐藏
- (void)hide;

@end

NS_ASSUME_NONNULL_END
