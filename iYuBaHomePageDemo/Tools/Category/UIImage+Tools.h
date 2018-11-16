//
//  UIImage+Tools.h
//  iYuBaHomePageDemo
//
//  Created by boyka on 2018/10/19.
//  Copyright © 2018年 YT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Tools)
/// 根据颜色获取一张图片
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
@end
