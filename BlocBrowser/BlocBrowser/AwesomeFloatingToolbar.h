//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Ryan Rizzo on 6/22/16.
//  Copyright © 2016 Ryan Rizzo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AwesomeFloatingToolbar;

@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPanWithOffset:(CGPoint)offset;

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPinchWithScale:(CGFloat)scale;

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPressWithColors:(NSArray *)colors;

@end

@interface AwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles andFourColors:(NSArray *)colors;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end

