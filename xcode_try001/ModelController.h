//
//  ModelController.h
//  xcode_try001
//
//  Created by liulinqiang on 15/6/3.
//  Copyright (c) 2015年 liulinqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

