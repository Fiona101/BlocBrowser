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

@end

@interface AwesomeFloatingToolbar : UIView

- (instancetype) initWithFourTitles:(NSArray *)titles;

- (void) setEnabled:(BOOL)enabled forButtonWithTitle:(NSString *)title;

@property (nonatomic, weak) id <AwesomeFloatingToolbarDelegate> delegate;

@end