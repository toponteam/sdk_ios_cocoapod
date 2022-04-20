//
//  ATAdManager+Interstitial.h
//  AnyThinkInterstitial
//
//  Created by Martin Lau on 21/09/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ATInterstitialDelegate.h"

extern NSString *const kATInterstitialExtraMediationNameKey;
extern NSString *const kATInterstitialExtraUserIDKey;
extern NSString *const kATInterstitialExtraUserFeatureKey;
extern NSString *const kATInterstitialExtraLocationEnabledFlagKey;
extern NSString *const kATInterstitialExtraMuteStartPlayingFlagKey;
extern NSString *const kATInterstitialExtraFallbackFullboardBackgroundColorKey;
extern NSString *const kATInterstitialExtraAdSizeKey;//Supported by TT interstitial, defaults to 600 X 600
extern NSString *const kATInterstitialExtraUsesRewardedVideo;

extern NSString *const kATInterstitialExtraAdSize600_400;
extern NSString *const kATInterstitialExtraAdSize600_600;
extern NSString *const kATInterstitialExtraAdSize600_900;


@interface ATAdManager (Interstitial)

/// Display Splash ads
/// @param placementID - TopOn's ad placement id
/// @param viewController - display ad window
/// @param delegate - delegate object
- (void)showInterstitialWithPlacementID:(NSString *)placementID
                       inViewController:(UIViewController *)viewController
                               delegate:(id<ATInterstitialDelegate>)delegate;


/// Display Splash ads
/// @param placementID - TopOn's ad placement id
/// @param scene - scene id
/// @param viewController - display ad window
/// @param delegate delegate object
- (void)showInterstitialWithPlacementID:(NSString *)placementID
                                  scene:(NSString *)scene
                       inViewController:(UIViewController *)viewController
                               delegate:(id<ATInterstitialDelegate>)delegate;

/// check whether the interstitial ad is ready
/// v5.7.06+
- (BOOL)interstitialReadyForPlacementID:(NSString *)placementID;

///  Get the status object of the current ad slot ATCheckLoadModel
- (ATCheckLoadModel *)checkInterstitialLoadStatusForPlacementID:(NSString *)placementID;

/// Query all cached information of the ad slot
/// v5.7.53+
- (NSArray<NSDictionary *> *)getInterstitialValidAdsForPlacementID:(NSString *)placementID;


/// Enter the current ad slot cache status statistics in the business scenario.
/// @param scene - ad Scenario
/// v5.7.91+
- (void)entryInterstitialScenarioWithPlacementID:(NSString *)placementID
                                           scene:(NSString *)scene;
@end
