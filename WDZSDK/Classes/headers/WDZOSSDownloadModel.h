//
//  WDZOSSDownloadModel.h
//  AFNetworking
//
//  Created by 王振海 on 2018/12/18.
//

#import <Foundation/Foundation.h>

@interface WDZOSSDownloadModel : NSObject
/**
 需要下载的url
 */
@property (nonatomic, copy) NSString *fileURL;

/**下载完后*/
@property (nonatomic, copy) NSString *fileLocalpath;

@end

