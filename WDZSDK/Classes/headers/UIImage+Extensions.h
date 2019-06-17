
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface UIImage (Extensions)

#pragma mark - compress
- (UIImage *)compressedImage;
- (CGFloat)compressionQuality;
- (NSData *)compressedData;
- (NSData *)compressedData:(CGFloat)compressionQuality;

#pragma mark - fixOrientation
- (UIImage *)fixOrientation;

#pragma mark - rotate & resize
- (UIImage *)imageAtRect:(CGRect)rect;
- (UIImage *)imageByScalingProportionallyToMinimumSize:(CGSize)targetSize;
- (UIImage *)imageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)imageByScalingToSize:(CGSize)targetSize;
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;
- (UIImage *)horizontalFlip;
- (UIImage *)verticalFlip;

- (UIImage *)croppedImageWithFrame:(CGRect)frame angle:(NSInteger)angle;

- (nonnull UIImage *)croppedImageWithFrame:(CGRect)frame angle:(NSInteger)angle circularClip:(BOOL)circular;

/**
 视频截图
 */
+ (UIImage *)imageFromView:(UIView *)theView atFrame:(CGRect)r;

/**
 *  生成一张普通的二维码
 *
 *  @param data    传入你要生成二维码的数据
 *  @param imageViewWidth    图片的宽度
 */
+ (UIImage *)generateWithDefaultQRCodeData:(NSString *)data imageViewWidth:(CGFloat)imageViewWidth;

/** 生成一张带有logo的二维码（logoScaleToSuperView：相对于父视图的缩放比取值范围0-1；0，不显示，1，代表与父视图大小相同）*/
+ (UIImage *)generateWithLogoQRCodeData:(NSString *)data logoImageName:(NSString *)logoImageName logoScaleToSuperView:(CGFloat)logoScaleToSuperView;


/**
 解决拍照上传时照片旋转的问题
 */
- (UIImage *)fixOrientation:(UIImage *)srcImg;
@end
