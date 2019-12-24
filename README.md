# MIRSnapper

[![CI Status](https://img.shields.io/travis/iosengineer1/MIRSnapper.svg?style=flat)](https://travis-ci.org/iosengineer1/MIRSnapper)
[![Version](https://img.shields.io/cocoapods/v/MIRSnapper.svg?style=flat)](https://cocoapods.org/pods/MIRSnapper)
[![License](https://img.shields.io/cocoapods/l/MIRSnapper.svg?style=flat)](https://cocoapods.org/pods/MIRSnapper)
[![Platform](https://img.shields.io/cocoapods/p/MIRSnapper.svg?style=flat)](https://cocoapods.org/pods/MIRSnapper)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

## Installation

A convenience Cocoapod for taking snapshot of any type of extended UIView class.

You can just call methods as below.

UIImage *sshot = [tableView  screenshot];

Also, you can take screenshot of individual cell as below.

  UIImage *sshot = [self.tableView screenshotOfCellAtIndexPath:indexPath];
  
  Please see the library for many more similar methods.



MIRSnapper is available through [CocoaPods](https://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'MIRSnapper'
```



## Author

Taqi

## License

MIRSnapper is available under the MIT license. See the LICENSE file for more info.
