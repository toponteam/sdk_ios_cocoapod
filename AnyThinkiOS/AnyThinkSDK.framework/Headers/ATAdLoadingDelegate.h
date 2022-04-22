//
//  ATAdLoadingDelegate.h
//  AnyThinkSDK
//
//  Created by Martin Lau on 04/07/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#ifndef ATAdLoadingDelegate_h
#define ATAdLoadingDelegate_h


@protocol ATAdLoadingDelegate<NSObject>

/// Callback when the successful loading of the ad
- (void)didFinishLoadingADWithPlacementID:(NSString *)placementID;

/// Callback of ad loading failure
- (void)didFailToLoadADWithPlacementID:(NSString*)placementID error:(NSError*)error;

/// Callback when the splash ad is loaded successfully
/// @param isTimeout whether timeout
/// v 5.7.73
- (void)didFinishLoadingSplashADWithPlacementID:(NSString *)placementID isTimeout:(BOOL)isTimeout;

/// Splash ad loading timeout callback
/// v 5.7.73
- (void)didTimeoutLoadingSplashADWithPlacementID:(NSString *)placementID;

@optional


/// Ad start load
- (void)didStartLoadingADSourceWithPlacementID:(NSString *)placementID
                                         extra:(NSDictionary*)extra;
/// Ad load success
- (void)didFinishLoadingADSourceWithPlacementID:(NSString *)placementID
                                          extra:(NSDictionary*)extra;
/// Ad load fail
- (void)didFailToLoadADSourceWithPlacementID:(NSString*)placementID
                                       extra:(NSDictionary*)extra
                                       error:(NSError*)error;

/// Ad start bidding
- (void)didStartBiddingADSourceWithPlacementID:(NSString *)placementID
                                         extra:(NSDictionary*)extra;

/// Ad bidding success
- (void)didFinishBiddingADSourceWithPlacementID:(NSString *)placementID
                                          extra:(NSDictionary*)extra;

/// Ad bidding fail
- (void)didFailBiddingADSourceWithPlacementID:(NSString*)placementID
                                        extra:(NSDictionary*)extra
                                        error:(NSError*)error;

@end
#endif /* ATAdLoadingDelegate_h */
