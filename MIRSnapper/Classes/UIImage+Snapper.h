//
//  UIImage+Snapper.h
//  MIRSnapper
//
//  Created by Mohammed Mir on 22/12/2019.
//



#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Snapper)

+ (UIImage *)drawCompositImageFromArray:(NSArray *)imagesArray;
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
@end

NS_ASSUME_NONNULL_END
