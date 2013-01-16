//
//  csAppDelegate.h
//  comshare
//
//  Created by Mick Tsai on 13/1/16.
//  Copyright (c) 2013年 Mick Tsai. All rights reserved.
//

#import <UIKit/UIKit.h>

@class csViewController;

@interface csAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) csViewController *viewController;

@end
