//
//  WDZMBaseFuncView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/5/30.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZVideoModel.h"
#import "WDZMPlayer.h"
#import "ImageAndTitleButton.h"

@interface WDZMBaseFuncView : UIView

@property (nonatomic, strong) WDZMPlayer *currentPlayer;

@property (nonatomic, strong) ImageAndTitleButton *videoListBtn;
/**
 加载图片
 */
- (void)loadCameraShotoPicturesWithVideoModel:(WDZVideoModel *)videomodel;

/**
 刷新抓拍图片的界面
 */
- (void)refreshSnapView:(NSDictionary *)mindic;

@end
