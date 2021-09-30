//
//  OFMNativeADView.h
//  OfmSDK
//
//  Created by Topon on 1/16/21.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AnyThinkNative/AnyThinkNative.h>
#import "OFMNativeAdConfiguration.h"
#import "OFMNativeADRenderer.h"
#import "OFMNativeAdDelegate.h"
#import "OFMPlacementModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface OFMNativeADView : ATNativeADView

@property(nonatomic, readonly) OFMNativeAdConfiguration *configuration;
@property(nonatomic, readonly) OFMNativeADRenderer *renderer;
@property(nonatomic, readonly) NSString *placementID;
- (instancetype)initWithOFMConfiguration:(OFMNativeAdConfiguration *)configuration placementModel:(OFMPlacementModel *)placementModel renderer:(OFMNativeADRenderer *) renderer;

@end

NS_ASSUME_NONNULL_END
