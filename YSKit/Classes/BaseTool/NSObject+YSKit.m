//
//  NSObject+YSKit.m
//  YSKit
//
//  Created by 任雨生 on 2019/9/27.
//  Copyright © 2019 TeamiOS. All rights reserved.
//

#import "NSObject+YSKit.h"
#import <objc/runtime.h>
static const void *extendObjectKey = @"extentObject";

@implementation NSObject (YSKit)
/**
 runtime 扩展属性
 
 @return <#return value description#>
 */
-(NSMutableDictionary *)extentObject{
    NSMutableDictionary *object = objc_getAssociatedObject(self, &extendObjectKey);
    if (object == nil) {
        object = [NSMutableDictionary dictionary];
        objc_setAssociatedObject(self, &extendObjectKey, object, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return object;
}

-(void)setExtentObject:(NSMutableDictionary *)extentObject{
    objc_setAssociatedObject(self, &extendObjectKey, extentObject, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
@end
