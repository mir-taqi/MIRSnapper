//
//  UIView+Snapper.h
//  MIRSnapper
//
//  Created by Mohammed Mir on 22/12/2019.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Snapper)

- (UIImage *)screenshot;
- (UIImage *)screenshotForCroppedRect:(CGRect)rect;
@end

NS_ASSUME_NONNULL_END
