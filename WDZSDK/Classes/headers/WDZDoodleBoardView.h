//
//  WDZDoodleBoardView.h
//  AFNetworking
//
//  Created by dingkan on 2019/2/22.
//  仿微信 图片涂鸦

#import <UIKit/UIKit.h>
#import "WDZDoodleBoardConfig.h"
#import "WDZDrawingModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    WDZDoodleBoardViewNormal,
    WDZDoodleBoardViewEdit,
} WDZDoodleBoardViewType;

@interface WDZDoodleBoardView : UIView

@property (nonatomic, assign) WDZDoodleBoardViewType boardType;

/**
 混合模式
 */
@property (nonatomic, assign) BOOL isHybrid;

@property (nonatomic, strong) void(^stateChangeBlock)(BOOL isNoraml);

/**
 涂鸦板
 img ：数据源
 type：
         WDZDoodleBoardHandleEidt                                                         = 1 << 0,//编辑
         WDZDoodleBoardHandleSignature                                                    = 1 << 1,//会签
         WDZDoodleBoardHandleTailoring                                                  = 1 << 2,//裁剪
         WDZDoodleBoardHandleCode                                                       = 1 << 3,//马塞克
 cancelBlock：  取消
 complete ： 完成
 */
+(void)showDoodleBoardViewWithNeedEditImg:(UIImage *)img type:(WDZDoodleBoardHandleType)type cancelBlock:(void(^)(void))cancelBlock complete:(void(^)(UIImage *img))complete;
+(void)showDoodleBoardViewWithNeedEditImg:(UIImage *)img type:(WDZDoodleBoardHandleType)type inView:(UIView *)superView cancelBlock:(void(^)(void))cancelBlock complete:(void(^)(UIImage *img))complete;


@end



@protocol WDZDoodleBoardViewCellDelegate <NSObject>

-(void)WDZDoodleBoardViewCellDidChangeState:(BOOL)isNormal;

@end


@interface WDZDoodleBoardViewCell :UICollectionViewCell

@property (nonatomic, strong) WDZDrawingModel *model;

@property (nonatomic, assign) WDZDoodleBoardHandleType type;

@property (nonatomic, assign) WDZDoodleBoardViewType boardType;

@property (nonatomic, weak) id<WDZDoodleBoardViewCellDelegate> delegate;
/**
 混合模式
 */
@property (nonatomic, assign) BOOL isHybrid;

@end

NS_ASSUME_NONNULL_END
