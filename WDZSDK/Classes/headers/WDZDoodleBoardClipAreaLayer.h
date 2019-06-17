//
//  WDZDoodleBoardClipAreaLayer.h
//  AFNetworking
//
//  Created by dingkan on 2019/4/12.
//

#import <QuartzCore/QuartzCore.h>
#import "WDZDoodleBoardClipConfigModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WDZDoodleBoardClipAreaLayer : CAShapeLayer
@property(assign, nonatomic) NSInteger cropAreaLeft;
@property(assign, nonatomic) NSInteger cropAreaTop;
@property(assign, nonatomic) NSInteger cropAreaRight;
@property(assign, nonatomic) NSInteger cropAreaBottom;
@property (nonatomic, strong) WDZDoodleBoardClipConfigModel *configModel;

- (void)setCropAreaLeft:(NSInteger)cropAreaLeft CropAreaTop:(NSInteger)cropAreaTop CropAreaRight:(NSInteger)cropAreaRight CropAreaBottom:(NSInteger)cropAreaBottom configModel:(WDZDoodleBoardClipConfigModel *)configModel;

@end

NS_ASSUME_NONNULL_END
