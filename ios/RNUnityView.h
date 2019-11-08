//
//  RNUnityView.h
//  RNUnityView
//
//  Created by xzper on 2018/2/23.
//  Copyright © 2018年 xzper. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/UIView+React.h>

#if __has_include("UIView+React.h")
#import "UIView+React.h"
#else
#import <React/UIView+React.h>
#endif

#import "UnityAppController.h"
#import "UnityUtils.h"

@interface RNUnityView : UIView

@property(nonatomic, strong) UnityView *uView;

- (void)setUnityView:(UnityView *)view;

@end
