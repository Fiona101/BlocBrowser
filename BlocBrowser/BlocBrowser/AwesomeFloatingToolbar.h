//
//  AwesomeFloatingToolbar.h
//  BlocBrowser
//
//  Created by Fiona Alpe on 7/26/16.
//  Copyright © 2016 Fiona Alpe. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AwesomeFloatingToolbar;

@protocol AwesomeFloatingToolbarDelegate <NSObject>

@optional

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didSelectButtonWithTitle:(NSString *)title;


// the below delegate method will indicate that AwesomeFloatingToolbar wishes to be moved and the direction it wishes to be moved in. Its delegate (the view controller) can decide whether to actually move the toolbar or not

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPanWithOffset:(CGPoint)offset;

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToPinchWithScale:(CGFloat)scale;

- (void) floatingToolbar:(AwesomeFloatingToolbar *)toolbar didTryToLongPress:(BOOL)ignoreThis;


@end


@interface AwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles;
- (void) rotateColors;
- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end