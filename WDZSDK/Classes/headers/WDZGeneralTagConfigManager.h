//
//  WDZGeneralTagConfigManager.h
//  AFNetworking
//
//  Created by dingkan on 2019/5/8.
//

#import <Foundation/Foundation.h>
@class WDZGeneralTagView;
NS_ASSUME_NONNULL_BEGIN

@protocol WDZGeneralTagViewDelegate <NSObject>
/**
 点击事件
 */
-(void)WDZGeneralTagViewDidClickTagWithIndex:(NSInteger)index selectIndexs:(NSArray<NSNumber *> *)indexArray view:(WDZGeneralTagView *)view;

@end


@protocol WDZGeneralTagModelDelegate <NSObject>



@optional
/**
 标题
 */
-(NSString *)WDZGeneralTagModelTitle;

/**
 副标题
 */
-(NSString *)WDZGeneralTagModelSubTitle;

/**
 ID
 */
-(NSString *)WDZGeneralTagModelID;

/**
 是否选中
 */
-(BOOL)WDZGeneralTagModelSelect;

/**
 索引
 */
-(NSInteger)WDZGeneralTagModelIndex;


@end



@interface WDZGeneralTagConfigManager : NSObject

/**
 标题字体大小
 */
@property (nonatomic, assign) CGFloat titleFont;
/**
 标题颜色
 */
@property (nonatomic, strong) UIColor *titleNormalColor;

/**
 选中标题色
 */
@property (nonatomic, strong) UIColor *titleSelectColor;


/**
 副标题
 */
@property (nonatomic, assign) BOOL isShowSubTitle;
@property (nonatomic, strong) UIColor *subTitleColor;
@property (nonatomic, strong) UIColor *subTitleBgColor;
@property (nonatomic, assign) CGFloat subTitleFont;

/**
 背景颜色
 */
@property (nonatomic, strong) UIColor *bgNormalColor;
/**
 选中标题色
 */
@property (nonatomic, strong) UIColor *bgSelectColor;

/**
 是否显示边框  NO
 */
@property (nonatomic, assign) BOOL isShowBoardLine;

/**
 边框线颜色
 */
@property (nonatomic, strong) UIColor *boardLineColor;

/**
 上下内边距
 */
@property (nonatomic, assign) CGFloat boardVSpace;

/**
 左右内边距
 */
@property (nonatomic, assign) CGFloat boardHSpace;

/**
 是否单选   YES
 */
@property (nonatomic, assign) BOOL isSingle;

/**
 当前展示个数
 */
@property (nonatomic, assign) NSInteger currentShowNum;

/**
 是否需要滑块   YES
 */
@property (nonatomic, assign) BOOL needMove;
@property (nonatomic, strong) UIColor *moveColor;

/**
 单选是否可以取消选中
 */
@property (nonatomic, assign) BOOL singleCanCancel;

/**
 代理
 */
@property (nonatomic, weak) id<WDZGeneralTagViewDelegate> delegate;

+(instancetype)nromalConfigWithTarget:(id<WDZGeneralTagViewDelegate>)target;

@end

NS_ASSUME_NONNULL_END
