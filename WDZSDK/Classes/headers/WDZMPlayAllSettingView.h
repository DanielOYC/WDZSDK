//
//  WDZMPlayAllSettingView.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/5/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZMPlayAllSettingView : UIScrollView

@property (nonatomic , strong)WDZVideoModel *videoModel;

@property (nonatomic , strong)WDZShopModel *shopModel;

@property (nonatomic , strong)NSData *imageData;

-(instancetype)initWithFrame:(CGRect)frame andVideoModel:(WDZVideoModel *)videoModel;

@end
