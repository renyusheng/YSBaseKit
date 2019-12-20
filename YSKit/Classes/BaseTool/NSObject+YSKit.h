//
//  NSObject+YSKit.h
//  YSKit
//
//  Created by 任雨生 on 2019/9/27.
//  Copyright © 2019 TeamiOS. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (YSKit)
/**
 runtime 扩展属性
 */
@property (nonatomic,strong) NSMutableDictionary *extentObject;
@end

NS_ASSUME_NONNULL_END
