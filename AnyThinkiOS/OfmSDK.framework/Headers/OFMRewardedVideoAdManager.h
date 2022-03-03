//
//  OFMRewardedVideoAdManager.h
//  OfmSDK
//
//  Created by Jason on 2021/1/16.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import "OFMAdManager.h"
#import "OFMRewardedVideoDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface OFMRewardedVideoAdManager : OFMAdManager

- (void)showRewardedVideoWithPlacementID:(NSString *)placementID inViewController:(UIViewController *)viewController delegate:(id<OFMRewardedVideoDelegate>)delegate;
- (void)showRewardedVideoWithPlacementID:(NSString *)placementID scene:(NSString * _Nullable)scene inViewController:(UIViewController *)viewController delegate:(id<OFMRewardedVideoDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
