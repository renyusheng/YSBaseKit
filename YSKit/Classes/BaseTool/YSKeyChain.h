//
//  YSKeyChain.h
//  YSKit
//
//  Created by 任雨生 on 2019/9/27.
//  Copyright © 2019 TeamiOS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSKeyChain : NSObject
/**
 <#Description#>
 
 @param key 保存东西到钥匙串
 @param data <#data description#>
 */
+ (void)saveWithKey:(NSString *)key data:(id)data;


/**
 加载钥匙串里的内容
 
 @param key <#key description#>
 @return <#return value description#>
 */
+ (id)loadWithKey:(NSString *)key;


/**
 删除钥匙串内容
 
 @param key <#key description#>
 */
+ (void)deleteWithKey:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
