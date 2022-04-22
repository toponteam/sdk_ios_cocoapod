//
//  ATRewardedVideoDelegate.h
//  AnyThinkSDK
//
//  Created by Martin Lau on 05/07/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#ifndef ATRewardedVideoDelegate_h
#define ATRewardedVideoDelegate_h
#import <AnyThinkSDK/AnyThinkSDK.h>

extern NSString *const kATRewardedVideoCallbackExtraAdsourceIDKey; // ad source ID of RewardedVideo
extern NSString *const kATRewardedVideoCallbackExtraNetworkIDKey; // Network Firm Id of RewardedVideo
extern NSString *const kATRewardedVideoCallbackExtraPrice; // Get Estimate eCPM
extern NSString *const kATRewardedVideoCallbackExtraPriority;
extern NSString *const kATRewardedVideoAgainFlag;
extern NSString *const kATRewardedVideoDelegateExtraAdSourceIsHeaderBidding; // Whether the ad source is head bidding,1: yes, 2: no

extern NSString *const kATRewardedVideoCallbackExtraIsHeaderBidding DEPRECATED_MSG_ATTRIBUTE("The kATRewardedVideoCallbackExtraIsHeaderBidding class will be obsolete, please use kATRewardedVideoDelegateExtraAdSourceIsHeaderBidding");

@protocol ATRewardedVideoDelegate<ATAdLoadingDelegate>


/// Rewarded video ad play starts
- (void)rewardedVideoDidStartPlayingForPlacementID:(NSString *)placementID
                                             extra:(NSDictionary *)extra;

/// Rewarded video ad play ends
- (void)rewardedVideoDidEndPlayingForPlacementID:(NSString *)placementID
                                           extra:(NSDictionary *)extra;

/// Rewarded video ad play failed
- (void)rewardedVideoDidFailToPlayForPlacementID:(NSString *)placementID
                                           error:(NSError *)error
                                           extra:(NSDictionary *)extra;

/// Rewarded video ad closed
- (void)rewardedVideoDidCloseForPlacementID:(NSString *)placementID
                                   rewarded:(BOOL)rewarded
                                      extra:(NSDictionary *)extra;

/// Rewarded video ad clicks
- (void)rewardedVideoDidClickForPlacementID:(NSString *)placementID
                                      extra:(NSDictionary *)extra;

/// Rewarded video ad reward distribution
- (void)rewardedVideoDidRewardSuccessForPlacemenID:(NSString *)placementID
                                             extra:(NSDictionary *)extra;
/// Whether the click jump of rewarded video ad is in the form of Deeplink
/// note: only suport TopOn Adx ad
- (void)rewardedVideoDidDeepLinkOrJumpForPlacementID:(NSString *)placementID
                                               extra:(NSDictionary *)extra
                                              result:(BOOL)success;
#pragma mark - rewarded video again

/// Rewarded video ad rewatch ad playback starts
- (void)rewardedVideoAgainDidStartPlayingForPlacementID:(NSString *)placementID
                                                  extra:(NSDictionary *)extra;

/// Rewarded video ad rewatch ad playback end
- (void)rewardedVideoAgainDidEndPlayingForPlacementID:(NSString *)placementID
                                                extra:(NSDictionary *)extra;

/// Rewarded video ad rewatch ad playback fail
- (void)rewardedVideoAgainDidFailToPlayForPlacementID:(NSString *)placementID
                                                error:(NSError *)error
                                                extra:(NSDictionary *)extra;

/// Rewarded video ad rewatch ad playback clicked
- (void)rewardedVideoAgainDidClickForPlacementID:(NSString *)placementID
                                           extra:(NSDictionary *)extra;

/// Rewarded video ad rewatch ad rewarded distribution
- (void)rewardedVideoAgainDidRewardSuccessForPlacemenID:(NSString *)placementID
                                                  extra:(NSDictionary *)extra;
@end
#endif /* ATRewardedVideoDelegate_h */
