//
//  OFMInterstitialAdManager.h
//  OfmSDK
//
//  Created by Topon on 1/16/21.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import "OFMAdManager.h"
#import "OFMInterstitialDelegate.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kOFMInterstitialExtraAdSizeKey;//Supported by TT interstitial, defaults to ScreenWidth * ScreenHeight

@interface OFMInterstitialAdManager : OFMAdManager
-(void) showInterstitialWithPlacementID:(NSString*)placementID inViewController:(UIViewController*)viewController delegate:(id<OFMInterstitialDelegate>)delegate;
-(void) showInterstitialWithPlacementID:(NSString*)placementID scene:(NSString*)scene inViewController:(UIViewController*)viewController delegate:(id<OFMInterstitialDelegate>)delegate;
@end

NS_ASSUME_NONNULL_END
