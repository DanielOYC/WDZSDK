//
//  WDZRemotePresetPositionCell.h
//  WDZPatrolShop
//
//  Created by Daniel on 2019/5/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZRemotePresetPositionCell : UICollectionViewCell

@property (copy ,nonatomic)UILabel *presetPositionLabel;

- (void)displayWithDic:(NSDictionary *)dic;

- (void)showTapAnimation;

@end

NS_ASSUME_NONNULL_END
