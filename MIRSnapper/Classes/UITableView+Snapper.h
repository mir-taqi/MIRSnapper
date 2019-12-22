//
//  UITableView+Snapper.h
//  MIRSnapper
//
//  Created by Mohammed Mir on 22/12/2019.
//



#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITableView (Snapper)

- (UIImage *)screenshot;

- (UIImage *)screenshotOfCellAtIndexPath:(NSIndexPath *)indexPath;

- (UIImage *)screenshotOfHeaderViewAtSection:(NSUInteger)section;

- (UIImage *)screenshotOfFooterViewAtSection:(NSUInteger)section;

- (UIImage *)screenshotExcludingAllHeaders:(BOOL)withoutHeaders
                       excludingAllFooters:(BOOL)withoutFooters
                          excludingAllRows:(BOOL)withoutRows;

- (UIImage *)screenshotExcludingHeadersAtSections:(nullable NSSet *)headerSections
                       excludingFootersAtSections:(nullable NSSet *)footerSections
                        excludingRowsAtIndexPaths:(nullable NSSet *)indexPaths;

- (UIImage *)screenshotOfHeadersAtSections:(nullable NSSet *)headerSections
                         footersAtSections:(nullable NSSet *)footerSections
                          rowsAtIndexPaths:(nullable NSSet *)indexPaths;
@end

NS_ASSUME_NONNULL_END
