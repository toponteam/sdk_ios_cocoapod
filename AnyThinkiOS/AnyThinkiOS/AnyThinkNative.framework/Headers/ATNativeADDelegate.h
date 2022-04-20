//
//  ATNativeADDelegate.h
//  AnyThinkSDK
//
//  Created by Martin Lau on 08/05/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#ifndef ATNativeADDelegate_h
#define ATNativeADDelegate_h
#import <AnyThinkSDK/AnyThinkSDK.h>
@class ATNativeADView;
extern NSString *const kATNativeDelegateExtraNetworkIDKey; // Network Firm Id of native
extern NSString *const kATNativeDelegateExtraAdSourceIDKey; // ad source ID of native
extern NSString *const kATNativeDelegateExtraAdSourceIsHeaderBidding; // Whether the ad source is head bidding,1: yes, 2: no
extern NSString *const kATNativeDelegateExtraPrice; // Get Estimate eCPM
extern NSString *const kATNativeDelegateExtraPriority; // the sort of the current native ad source in WaterFall

extern NSString *const kATNativeDelegateExtraIsHeaderBidding DEPRECATED_MSG_ATTRIBUTE("The kATNativeDelegateExtraIsHeaderBidding class will be obsolete, please use kATNativeDelegateExtraAdSourceIsHeaderBidding");

@protocol ATNativeADDelegate<ATAdLoadingDelegate>


/// Native ads displayed successfully
- (void)didShowNativeAdInAdView:(ATNativeADView *)adView
                    placementID:(NSString *)placementID
                          extra:(NSDictionary *)extra;

/// Native ad click
- (void)didClickNativeAdInAdView:(ATNativeADView *)adView
                     placementID:(NSString *)placementID
                           extra:(NSDictionary *)extra;

/// Native video ad starts playing
- (void)didStartPlayingVideoInAdView:(ATNativeADView *)adView
                         placementID:(NSString *)placementID
                               extra:(NSDictionary *)extra;

/// Native video ad ends playing
- (void)didEndPlayingVideoInAdView:(ATNativeADView *)adView
                       placementID:(NSString *)placementID
                             extra:(NSDictionary *)extra;

/// Native enters full screen video ads
- (void)didEnterFullScreenVideoInAdView:(ATNativeADView *)adView
                            placementID:(NSString *)placementID
                                  extra:(NSDictionary *)extra;

/// Native exit full screen video ad
- (void)didExitFullScreenVideoInAdView:(ATNativeADView *)adView
                           placementID:(NSString *)placementID
                                 extra:(NSDictionary *)extra;

/// Native ad close button cliecked
- (void)didTapCloseButtonInAdView:(ATNativeADView *)adView
                      placementID:(NSString *)placementID
                            extra:(NSDictionary *)extra;

/// Native draw ad load successfully
- (void)didLoadSuccessDrawWith:(NSArray*)views
                   placementID:(NSString *)placementID
                         extra:(NSDictionary *)extra;

/// Whether the click jump of Native ads is in the form of Deeplink
/// currently only returns for TopOn Adx ads
- (void)didDeepLinkOrJumpInAdView:(ATNativeADView *)adView
                      placementID:(NSString *)placementID
                            extra:(NSDictionary*)extra
                           result:(BOOL)success;

/// Native ads click to close the details page
/// v5.7.47+
- (void)didCloseDetailInAdView:(ATNativeADView *)adView
                   placementID:(NSString *)placementID
                         extra:(NSDictionary *)extra;

@end
#endif /* ATNativeADDelegate_h */
