//
//  NSDictionary+BaseKit.h
//  WDZForAppStore
//
//  Created by 李轩霖 on 2018/10/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDictionary (BaseKit)



/*
 *把服务器返回的<null> 替换为“”
 *json表示获取到的带有NULL对象的json数据
 *NSDictionary *newDict = [NSDictionary changeType:json];
 */
+(id)changeType:(id)myObj;


/**
 字典转 json
 
 @return 转好的字符串
 */
-(NSString *)convertToJsonData;

@end
