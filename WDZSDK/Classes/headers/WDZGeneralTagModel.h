//
//  WDZGeneralTagModel.h
//  AFNetworking
//
//  Created by dingkan on 2019/5/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZGeneralTagModel : NSObject
/**
 标题
 */
@property (nonatomic, strong) NSString *titleName;

/**
 副标题
 */
@property (nonatomic, strong) NSString *subTitleName;

/**
 ID
 */
@property (nonatomic, strong) NSString *ID;

/**
 图片
 */
@property (nonatomic, strong) UIImage *icon;

@property (nonatomic, strong) UIImage *selectIocn;

@property (nonatomic, assign) NSInteger index;

@property (nonatomic, assign) BOOL isSelect;

+(instancetype)modelWithID:(NSString *)ID index:(NSInteger)index isSelect:(BOOL)isSelect titleName:(NSString *)titleName subTitleName:(NSString *)subTitleName;

@end

NS_ASSUME_NONNULL_END
