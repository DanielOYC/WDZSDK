//
//  WDZShortVideoView.h
//  WDZPublicComponent
//
//  Created by dingkan on 2018/10/31.
//

#import <UIKit/UIKit.h>
#import "WDZImageShowConfigManager.h"
#import "WDZImageShowDeitalView.h"

@interface WDZShortVideoView : UIView
/**
 短视频操作事件
 WDZShowShortVideoMangerTypeLike                                  = 1 << 1,//关注
 WDZShowShortVideoMangerTypeComment                                  = 1 << 2,//评论
 WDZShowShortVideoMangerTypeShare                                                = 1 << 3,//分享
 WDZShowShortVideoMangerTypeDownLoad                                               = 1 << 4,//下载
 如果配置配有，则block无
 */
#pragma 短视频播放
+(void)showShortVideoWithModelDatas:(NSMutableArray<WDZImageShowModel *> *)datas handleType:(WDZShowShortVideoMangerType)type scrollDirection:(UICollectionViewScrollDirection)scrollDirection inView:(UIView *)view toIndexPath:(NSInteger)index currentBlock:(void(^)(NSInteger index, WDZImageShowModel *model))currentBlock delegate:(id<WDZShortVideoViewDelegate>)delegate;

+(void)showShortVideoWithDatas:(NSMutableArray<id<WDZImageShowViewDelegate>> *)datas handleType:(WDZShowShortVideoMangerType)type scrollDirection:(UICollectionViewScrollDirection)scrollDirection inView:(UIView *)view toIndexPath:(NSInteger)index currentBlock:(void(^)(NSInteger index, WDZImageShowModel *model))currentBlock delegate:(id<WDZShortVideoViewDelegate>)delegate;

+(void)showShortVideoWithModelDatas:(NSMutableArray<WDZImageShowModel *> *)datas toIndexPath:(NSInteger)index currentBlock:(void(^)(NSInteger index, WDZImageShowModel *model))currentBlock delegate:(id<WDZShortVideoViewDelegate>)delegate;

+(void)showShortVideoWithDatas:(NSMutableArray<id<WDZImageShowViewDelegate>> *)datas toIndexPath:(NSInteger)index currentBlock:(void(^)(NSInteger index, WDZImageShowModel *model))currentBlock delegate:(id<WDZShortVideoViewDelegate>)delegate;

@end
