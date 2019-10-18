//
//  UnityNativeModule.h
//  RNUnityView
//
//  Created by xzper on 2018/12/13.
//  Copyright © 2018 xzper. All rights reserved.
//

#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#if __has_include("RNEventEmitter.h")
#import "RNEventEmitter.h"
#else
#import <RNEventEmitter/RNEventEmitter.h>
#endif

#import "UnityUtils.h"

@interface UnityNativeModule : NSObject <RCTBridgeModule, UnityEventListener>
@end
