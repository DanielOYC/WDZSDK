//
//  WDZWelComeModel.h
//  AFNetworking
//
//  Created by dingkan on 2019/1/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZWelComeModel : NSObject

@property (nonatomic, strong) id data;

@property (nonatomic, strong) NSString *url;

+(instancetype)modelWithData:(id)data webUrl:(NSString *)url;

@end

NS_ASSUME_NONNULL_END
