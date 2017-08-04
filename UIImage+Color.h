//
//  UIImage+Color.h
//  UIImage+Categories
//
//  Created by wyon on 17/6/4.
//  Copyright © 2017年 wyon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Color)

/** 根据颜色生成纯色图片 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/** 取图片某一像素的颜色 */
- (UIColor *)colorAtPixel:(CGPoint)point;

/** 获得灰度图 */
- (UIImage *)convertToGrayImage;

@end
