//
//  WDZWebControllerConfig.h
//  AFNetworking
//
//  Created by dingkan on 2019/5/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZWebControllerConfig : NSObject

@property (nonatomic, strong) NSString *url;

//基础路劲
@property (nonatomic, strong) NSString *baseUrl;

@property (nonatomic, strong) NSString *footerString;

@property (nonatomic, strong) NSDictionary *params;


+(instancetype)webControllerConfigWithUrl:(NSString *)url;

+(instancetype)webControllerConfigWithBaseUrl:(NSString *)baseUrl footerString:(NSString *)footerString params:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
