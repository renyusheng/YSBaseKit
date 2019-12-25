//
//  YSKit.h
//  YSKit
//
//  Created by 任雨生 on 2019/9/27.
//  Copyright © 2019 TeamiOS. All rights reserved.
//

#ifndef YSKit_h
#define YSKit_h

#import "NSData+YSKit.h"
#import "NSString+YSKit.h"
#import "UIView+YSKit.h"
#import "UIColor_YSKit.h"
#import "UIButton+YSKit.h"
#import "UIImageView+YSKit.h"
#import "UIImage+YSKit.h"
#import "UIFont+YSKit.h"
#import "UILabel+YSKit.h"
#import "NSObject+YSKit.h"
#import "UIViewController+YSKit.h"

#import "YSUtils.h"
#import "YSRSA.h"
#import "YSKeyChain.h"




//判断与相应的屏幕比例是否一致
#define SCALE_TO_SCREEN(w,h) [[NSString stringWithFormat:@"%0.5f",UIScreen.mainScreen.bounds.size.width/UIScreen.mainScreen.bounds.size.height] isEqualToString:[NSString stringWithFormat:@"%0.5f",w/h]]
//3.5寸屏比例
#define SCALE_3_5INCH SCALE_TO_SCREEN(640.f,960.f)
//4.7寸屏比例
#define SCALE_4INCH_SCREEN SCALE_TO_SCREEN(640.f,1136.f)
//5寸屏比例
#define SCALE_4_7INCH_SCREEN SCALE_TO_SCREEN(750.f,1334.f)
//5.5寸屏比例
#define SCALE_5_5INCH_SCREEN SCALE_TO_SCREEN(1242.f,2208.f)
//iPhone X屏幕比例
#define SCALE_IPHONE_X_SCREEN SCALE_TO_SCREEN(1125.f,2436.f)
//iPhone XR屏幕比例
#define SCALE_IPHONE_XR_SCREEN SCALE_TO_SCREEN(828.f,1792.f)
//iPhone XS屏幕比例
#define SCALE_IPHONE_XS_SCREEN SCALE_TO_SCREEN(1125.f,2436.f)
//iPhone XS MAX屏幕比例
#define SCALE_IPHONE_XS_MAX_SCREEN SCALE_TO_SCREEN(1242.f,2688.f)

//是否为刘海屏
#define IS_FRINGE_SCREEN ([[UIApplication sharedApplication] statusBarFrame].size.height == 44)


//app框架高度
#define APP_FRAME_HEIGHT [[UIScreen mainScreen] applicationFrame].size.height
//app框架宽度
#define APP_FRAME_WIDTH [[UIScreen mainScreen] applicationFrame].size.width
//屏幕的尺寸
#define SCREEN_SIZE ([[UIScreen mainScreen] bounds]).size
//屏幕高度
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds]).size.height
//屏幕宽度
#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds]).size.width

//沙盒目录
#define DOCUMENT_PATH [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
//应用keyWindow
#define KEY_WINDOW [UIApplication sharedApplication].keyWindow

// 调试
#ifdef DEBUG
#define DLog(fmt, ...) NSLog((@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define DLog(...)
#endif

//文件根目录归档
#define WDArchive(object,name) [WDUtils wd_archiveWithObject:object fileName:name]
//文件根目录解档
#define WDUnArchive(name) [WDUtils wd_unArchiveWithFileName:name]
//删除根目录下的文件
#define WDDeleteArchiveFile(name) [WDUtils wd_deleteArchiveWithFileName:name]


//! Project version number for YSKit.
FOUNDATION_EXPORT double YSKitVersionNumber;

//! Project version string for YSKit.
FOUNDATION_EXPORT const unsigned char YSKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <YSKit/PublicHeader.h>







#endif /* YSKit_h */
