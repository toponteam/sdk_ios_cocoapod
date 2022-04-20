//
//  ATBannerDelegate.h
//  AnyThinkSDK
//
//  Created by Martin Lau on 18/09/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#ifndef ATBannerDelegate_h
#define ATBannerDelegate_h

#import <AnyThinkSDK/AnyThinkSDK.h>

@class ATBannerView;

extern NSString *const kATBannerDelegateExtraNetworkIDKey; // Network Firm Id of Banner
extern NSString *const kATBannerDelegateExtraAdSourceIDKey; // ad source ID of Banner
extern NSString *const kATBannerDelegateExtraAdSourceIsHeaderBidding; // Whether the ad source is head bidding,1: yes, 2: no
extern NSString *const kATBannerDelegateExtraPrice; // Get Estimate eCPM
extern NSString *const kATBannerDelegateExtraPriority; // the sort of the current Banner ad source in WaterFall

extern NSString *const kATBannerDelegateExtraIsHeaderBidding DEPRECATED_MSG_ATTRIBUTE("The kATBannerDelegateExtraIsHeaderBidding class will be obsolete, please use kATBannerDelegateExtraAdSourceIsHeaderBidding");

@protocol ATBannerDelegate<ATAdLoadingDelegate>

/// BannerView auto refresh failed
- (void)bannerView:(ATBannerView *)bannerView failedToAutoRefreshWithPlacementID:(NSString *)placementID error:(NSError *)error;

/// BannerView display results
- (void)bannerView:(ATBannerView *)bannerView didShowAdWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

/// bannerView click
- (void)bannerView:(ATBannerView *)bannerView didClickWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

/// bannerView close
- (void)bannerView:(ATBannerView *)bannerView didCloseWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra DEPRECATED_ATTRIBUTE;

/// bannerView auto refresh
- (void)bannerView:(ATBannerView *)bannerView didAutoRefreshWithPlacement:(NSString *)placementID extra:(NSDictionary *)extra;

/// bannerView click the close button
- (void)bannerView:(ATBannerView *)bannerView didTapCloseButtonWithPlacementID:(NSString *)placementID extra:(NSDictionary *)extra;

/// Whether the bannerView click jump is in the form of Deeplink
/// currently only returns for TopOn Adx advertisements
- (void)bannerView:(ATBannerView *)bannerView didDeepLinkOrJumpForPlacementID:(NSString *)placementID extra:(NSDictionary *)extra result:(BOOL)success;

@end

#endif /* ATBannerDelegate_h */
