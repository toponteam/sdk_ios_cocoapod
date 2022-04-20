//
//  ATSplashDelegate.h
//  AnyThinkSplash
//
//  Created by Martin Lau on 2018/12/20.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#ifndef ATSplashDelegate_h
#define ATSplashDelegate_h

#import <AnyThinkSDK/AnyThinkSDK.h>

extern NSString *const kATSplashDelegateExtraNetworkIDKey; // Network Firm Id of Splash
extern NSString *const kATSplashDelegateExtraAdSourceIDKey; // ad source ID of Splash
extern NSString *const kATSplashDelegateExtraAdSourceIsHeaderBidding; // Whether the ad source is head bidding,1: yes, 2: no
extern NSString *const kATSplashDelegateExtraPrice; // Get Estimate eCPM
extern NSString *const kATSplashDelegateExtraPriority; // the sort of the current Splash ad source in WaterFall

extern NSString *const kATSplashDelegateExtraIsHeaderBidding DEPRECATED_MSG_ATTRIBUTE("The kATSplashDelegateExtraIsHeaderBidding class will be obsolete, please use kATSplashDelegateExtraAdSourceIsHeaderBidding");

@protocol ATSplashDelegate<ATAdLoadingDelegate>


/// Splash ad displayed successfully
- (void)splashDidShowForPlacementID:(NSString *)placementID
                              extra:(NSDictionary *)extra;

/// Splash ad failed to display
/// currently supports Pangle, Guangdiantong and Baidu
- (void)splashDidShowFailedForPlacementID:(NSString *)placementID
                                    error:(NSError *)error
                                    extra:(NSDictionary *)extra;

/// Splash ad click
- (void)splashDidClickForPlacementID:(NSString *)placementID
                               extra:(NSDictionary *)extra;

/// Splash ad closed
- (void)splashDidCloseForPlacementID:(NSString *)placementID
                               extra:(NSDictionary *)extra;

///  Whether the click jump of Splash ad is in the form of Deeplink
/// note: only suport TopOn Adx ad
- (void)splashDeepLinkOrJumpForPlacementID:(NSString *)placementID
                                     extra:(NSDictionary *)extra
                                    result:(BOOL)success;

///  Splash ad closes details page
- (void)splashDetailDidClosedForPlacementID:(NSString *)placementID
                                      extra:(NSDictionary *)extra;

/// Called when splash zoomout view did click
/// note: only suport Pangle splash zoomout view and the Tencent splash V+ ad
- (void)splashZoomOutViewDidClickForPlacementID:(NSString *)placementID
                                          extra:(NSDictionary *)extra;
/// Called when splash zoomout view did close
/// note: only suport Pangle splash zoomout view and the Tencent splash V+ ad
- (void)splashZoomOutViewDidCloseForPlacementID:(NSString *)placementID
                                          extra:(NSDictionary *)extra;

/// This callback is triggered when the skip button is customized.
/// note: only suport TopOn MyOffer, TopOn Adx and TopOn OnlineApi
/// 5.7.61+
- (void)splashCountdownTime:(NSInteger)countdown
             forPlacementID:(NSString *)placementID
                      extra:(NSDictionary *)extra;;

@end
#endif /* ATSplashDelegate_h */
