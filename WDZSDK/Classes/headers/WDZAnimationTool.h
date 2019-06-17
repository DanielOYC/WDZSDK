//
//  WDZAnimationTool.h
//  AFNetworking
//
//  Created by dingkan on 2019/1/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^JPNoParaBlock)(void);
typedef void(^JPContainIDBlock)(id);

// 显示封面照片的 UIImageView 的 tag.
#define JPCoverImageViewTag 100000
@interface WDZAnimationTool : NSObject

/*!
 * \~chinese
 * @prama indexPath                用户选中的那个UICollectionViewCell的 indexPath.
 * @prama collectionView           用户选中的那个UICollectionViewCell的 UICollectionView.
 * @prama viewController           动画之前窗口上显示的 viewController.
 * @prama presentViewController    动画完成之后要在窗口上显示的 viewController.
 * @prama afterPresentedBlock      动画完成之后要在 presentViewController 做的事情.
 *
 * @return JPContainIDBlock        关闭动画的 block.
 */
-(JPContainIDBlock)begainAnimationWithCollectionViewDidSelectedItemIndexPath:(NSIndexPath *)indexPath collcetionView:(UICollectionView *)collectionView forViewController:(UIViewController *)viewController presentViewController:(UIViewController *)presentViewController afterPresentedBlock:(JPNoParaBlock)afterPresentedBlock;
@end

NS_ASSUME_NONNULL_END
