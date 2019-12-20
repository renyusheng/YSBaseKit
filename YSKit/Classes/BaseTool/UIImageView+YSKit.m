//
//  UIImageView+YSKit.m
//  YSKit
//
//  Created by 任雨生 on 2019/9/27.
//  Copyright © 2019 TeamiOS. All rights reserved.
//

#import "UIImageView+YSKit.h"
#import "UIImage+YSKit.h"

@implementation UIImageView (YSKit)
/**
 设置图片
 
 @param name 图片名
 */
-(void)setImageWithName:(NSString*)name{
    [self setImage:YSNameImage(name)];
}
@end
