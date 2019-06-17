//
//  WDZCommentHandleModel.h
//  AFNetworking
//
//  Created by dingkan on 2018/12/10.
//

#import <Foundation/Foundation.h>

@interface WDZCommentHandleModel : NSObject

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) UIImage *icon;

@property (nonatomic, strong) void(^actionBlock)(void);

+(instancetype)modelWithIcon:(UIImage *)icon title:(NSString *)title action:(void(^)(void))action;

@end
