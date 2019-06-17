//
//  WDZPhotographModel.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/1/4.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZPhotographModel : NSObject

// 相簿id
@property (nonatomic, assign) NSInteger ablumId;
// 相册名字
@property (nonatomic, copy) NSString *name;
// 相片总数
@property (nonatomic, assign) NSInteger totalCount;
// 相册封面URLs
@property (nonatomic, strong) NSArray *imageUrls;
// 代表不是一个相簿，而是一个添加按钮
@property (nonatomic, assign) BOOL isAnAddButton;
// 相簿类型,是系统相簿还是个人相簿
@property (nonatomic, assign) BOOL isSysAlbums;

// 是否是水印相簿,默认不是
@property (assign, nonatomic) BOOL isWaterMaskAlbum;


@end
