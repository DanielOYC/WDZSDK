//
//  WDZImageShortVideoInfoView.h
//  AFNetworking
//
//  Created by dingkan on 2018/10/31.
//   短视频信息界面

#import <UIKit/UIKit.h>
@class WDZImageShowModel;

@protocol WDZImageShortVideoInfoViewDelegate <NSObject>
-(void)WDZImageShortVideoInfoViewDidClickUserheader:(WDZImageShowModel *)mode;
@end

@interface WDZImageShortVideoInfoView : UIView

@property (nonatomic, weak) id<WDZImageShortVideoInfoViewDelegate> delegate;

@property (nonatomic, strong) WDZImageShowModel *model;
@end
