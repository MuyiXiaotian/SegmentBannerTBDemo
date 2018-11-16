//
//  UILabel+Tools.m
//  iYuBaHomePageDemo
//
//  Created by boyka on 2018/10/19.
//  Copyright © 2018年 YT. All rights reserved.
//

#import "UILabel+Tools.h"

@implementation UILabel (Tools)
+ (UILabel *)labelWithTitle:(NSString *)title font:(CGFloat)font textColor:(UIColor *)color textAlignment:(NSTextAlignment)textAlignment{
    UILabel *label = [self new];
    label.text = title ? title : @"";
    label.font = [UIFont systemFontOfSize:font];
    label.textAlignment = textAlignment ? textAlignment : NSTextAlignmentLeft;
    
    if ([color isKindOfClass:[UIColor class]]) {
        label.textColor = color;
    }
    return label;
}
@end
