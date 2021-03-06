//
//  KCCommonDefs.h
//  kancolleViewer
//
//  Created by cuiyzh on 2018/8/27.
//  Copyright © 2018年 yourForum. All rights reserved.
//

#ifndef KCCommonDefs_h
#define KCCommonDefs_h

// 声明一个单例方法
#define DECLARE_SHARED_INSTANCE(className)  \
+ (className *)sharedInstance;

// 实现一个单例方法
#define IMPLEMENT_SHARED_INSTANCE(className)  \
+ (className *)sharedInstance \
{ \
static dispatch_once_t onceToken; \
static className *sharedInstance = nil; \
dispatch_once(&onceToken, ^{ \
sharedInstance = [[self alloc] init]; \
}); \
return sharedInstance; \
}

#define UI_COLOR(r,g,b) [UIColor colorWithRed:r/255.f green:g/255.f blue:b/255.f alpha:1.0]
#define UI_COLORA(r,g,b,a) [UIColor colorWithRed:r/255.f green:g/255.f blue:b/255.f alpha:a]

#define UIColorFromRGB(rgbValue) \
[UIColor colorWithRed:((float)(((rgbValue) & 0xFF0000) >> 16))/255.0 \
green:((float)(((rgbValue) & 0xFF00) >> 8))/255.0 \
blue:((float)((rgbValue) & 0xFF))/255.0 \
alpha:1.0]

#define UIColorFromRGBA(rgbValue, alphaValue) \
[UIColor colorWithRed:((float)(((rgbValue) & 0xFF0000) >> 16))/255.0 \
green:((float)(((rgbValue) & 0xFF00) >> 8))/255.0 \
blue:((float)((rgbValue) & 0xFF))/255.0 \
alpha:(alphaValue)]

#define LOCAL_STRING(key)          NSLocalizedString(key, nil)

#endif /* KCCommonDefs_h */
