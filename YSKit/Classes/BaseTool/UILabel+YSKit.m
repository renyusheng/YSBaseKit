//
//  UILabel+YSKit.m
//  YSKit
//
//  Created by 任雨生 on 2019/9/27.
//  Copyright © 2019 TeamiOS. All rights reserved.
//

#import "UILabel+YSKit.h"
#import "UIView+YSKit.h"
#import "YSUtils.h"

@implementation UILabel (YSKit)

/**
 固定宽度计算文字高度
 
 @return <#return value description#>
 */
-(CGFloat)textHeight{
    return [YSUtils textHeight:self.text font:self.font width:self.width];
}

/**
 固定高度计算文字宽度
 
 @return <#return value description#>
 */
-(CGFloat)textWidth{
    return [YSUtils textWidth:self.text font:self.font height:self.height];
}

@end

