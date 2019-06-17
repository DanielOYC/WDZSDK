//
//  WDZpicOfDeviceCollectionViewCell.h
//  WDZLaiYiFen
//
//  Created by 郑来贤 on 15/5/8.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZDownloadRecord;
@interface WDZPicOfDeviceCollectionViewCell : UICollectionViewCell
{
    NSString *picID;
}

@property (weak , nonatomic) IBOutlet UIImageView *imageView;

/**
 视频播放按钮
 */
@property (weak, nonatomic) IBOutlet UIButton *recordVideoPlayBtn;

- (void)disPlayWithDic:(NSDictionary *)d;

/**
 展示下载的录像
 */
- (void)disPlayWithRecord:(WDZDownloadRecord *)record;

@end
