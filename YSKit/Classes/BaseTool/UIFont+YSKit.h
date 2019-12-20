//
//  UIFont+YSKit.h
//  YSKit
//
//  Created by 任雨生 on 2019/9/27.
//  Copyright © 2019 TeamiOS. All rights reserved.
//

#import <UIKit/UIKit.h>
//便捷创建字体字体
#define YSSystemFont(size) [UIFont systemFontOfSize:size]
//便捷创建系统粗字体
#define YSBoldSystemFont(size) [UIFont boldSystemFontOfSize:size]

NS_ASSUME_NONNULL_BEGIN

@interface UIFont (YSKit)

@end

NS_ASSUME_NONNULL_END
