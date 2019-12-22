//
//  UIView+Snapper.m
//  MIRSnapper
//
//  Created by Mohammed Mir on 22/12/2019.
//

#import "UIView+Snapper.h"



@implementation UIView (Snapper)
- (UIImage *)screenshot
{
    return [self screenshotForCroppedRect:self.bounds];
}

- (UIImage *)screenshotForCroppedRect:(CGRect)croppingRect
{
    UIGraphicsBeginImageContextWithOptions(croppingRect.size, NO, [UIScreen mainScreen].scale);
    // Create a graphics context and translate it the view we want to crop so
    // that even in grabbing (0,0), that origin point now represents the actual
    // cropping origin desired:
    CGContextRef context = UIGraphicsGetCurrentContext();
    if (context == NULL) return nil;
    CGContextTranslateCTM(context, -croppingRect.origin.x, -croppingRect.origin.y);
    
    [self layoutIfNeeded];
    [self.layer renderInContext:context];
    
    UIImage *screenshotImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return screenshotImage;
    
}
@end
