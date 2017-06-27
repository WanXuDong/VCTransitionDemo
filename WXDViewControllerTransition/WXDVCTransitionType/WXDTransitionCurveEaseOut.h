//
//  WXDDismissTransition.h
//  62-ViewController转场动画
//
//  Created by 万旭东 on 17/6/23.
//  Copyright © 2017年 zonsim. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;
#import "TransitionType.h"

@interface WXDTransitionCurveEaseOut : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) TransitionType transitionType;

@end
