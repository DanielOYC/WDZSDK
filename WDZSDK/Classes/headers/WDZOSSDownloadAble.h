//
//  WDZOSSDownloadAble.h
//  Pods
//
//  Created by 王振海 on 2018/11/22.
//

#import <UIKit/UIKit.h>

@protocol WDZOSSDownloadAble <NSObject>

//如果实现协议，必须实现
@required
/**下载完后*/
@property (nonatomic, copy) NSString *fileLocalpath;

/**下载的URL*/
@required
- (NSString *)getDownloadURL;

@end
