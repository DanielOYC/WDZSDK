//
//  TZImagePickerHelper.h
//  WDZPublicComponent
//
//  Created by dingkan on 2018/10/11.
//

#import <Foundation/Foundation.h>
@class TZAssetModel,TZImagePickerController,WDZPickerModel;

@interface TZImagePickerHelper : NSObject

+(void)photoPickerHandleModels:(NSMutableArray<TZAssetModel *> *)models photoWidth:(CGFloat)photoWidth complete:(void(^)(NSArray<WDZPickerModel *> *))complete;
+ (void)createCacheFloder;
+ (void)deleteCacheImages;

/**
 处理视屏 合成gif图片
 */
+(void)handlePickerDatas:(NSMutableArray<WDZPickerModel *> *)modelDatas complete:(void(^)(NSMutableArray *datas))complete;


@end
