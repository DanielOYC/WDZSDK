//
//  WDZCacheManager.h
//  AFNetworking
//
//  Created by dingkan on 2019/3/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZCacheManager : NSObject

+ (NSString *)getNoDeleteDocumentPath;
//获取临时文件路径
+(NSString *)getCanDeleteFilePathWithFileName:(NSString *)fileName;

//获取不可删除文件路径
+(NSString *)getCannotDeleteFilePathWithFileName:(NSString *)fileName;

//清除临时缓存文件
+(void)deleteAllTempCache;

//获取文件大小
+(NSString *)getCanDeleteFileSize;

/////////////////////////// daniel ///////////////////////////////
// 获取可删除目录路径,nil表示创建失败
+ (NSString *)getDeletableDirectory;

// 获取不可删除目录路径,nil表示创建失败
+ (NSString *)getUndeletableDirectory;

// 移动一个路径下的文件到新的路径下，出错则返回原路径,原始路径不存在则返回nil
+ (NSString *)moveItemAtPath:(NSString *)originPath destinationPath:(NSString *)newPath;

// 获取app上传文件的文件夹
+ (NSString *)getAppUploadDirectory;
/////////////////////////// daniel ///////////////////////////////

@end

NS_ASSUME_NONNULL_END
