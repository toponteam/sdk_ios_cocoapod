//
//  ATSplashCustomEvent.h
//  AnyThinkSplash
//
//  Created by Martin Lau on 2018/12/20.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#import <AnyThinkSDK/AnyThinkSDK.h>
//#import "ATAdCustomEvent.h"

extern NSString *const kATSplashExtraRequestIDKey;

@class ATSplash;
@protocol ATSplashDelegate;

@interface ATSplashCustomEvent : ATAdCustomEvent

@property (nonatomic,weak) id<ATSplashDelegate> delegate;
@property (nonatomic,strong) ATSplash *splash;
@property (nonatomic,readonly) NSString *unitID;
@property (nonatomic,assign) NSInteger priorityIndex;

- (instancetype)initWithInfo:(NSDictionary *)serverInfo
                   localInfo:(NSDictionary *)localInfo;

- (NSDictionary *)delegateExtra;
- (void)trackShowWithoutWaterfall;
- (void)trackClickWithoutWaterfall;

/// callback to developer when ad is closed
- (void)trackSplashAdClosed;

/// callback to developer when ad is loaded
/// @param splashAd - splash ad object
/// v5.7.05 +
- (void)trackSplashAdLoaded:(id)splashAd;

/// callback to developer when ad is loaded
/// @param splashAd - splash ad object
/// @param adExtra - extra data
/// v5.7.06 +
- (void)trackSplashAdLoaded:(id)splashAd adExtra:(NSDictionary *)adExtra;

/// callback to developer when ad is showed
- (void)trackSplashAdShow;

/// callback to developer when ad is clicked
- (void)trackSplashAdClick;

/// callback to developer when ad is load failed
/// @param error - error message
- (void)trackSplashAdLoadFailed:(NSError*)error;

/// callback to developer when ad ZoomOutView is clicked
- (void)trackSplashAdZoomOutViewClick;

/// callback to developer when ad ZoomOutView is closeed
- (void)trackSplashAdZoomOutViewClosed;

///  Whether the click jump of ad is in the form of Deeplink
/// @param success - success status
- (void)trackSplashAdDeeplinkOrJumpResult:(BOOL)success;

// v5.7.53+
- (void)trackSplashAdDetailClosed;
- (void)trackSplashAdShowFailed:(NSError *)error;

// v5.7.61+

/// callback When the custom skip button and countdown related parameters are passed in
/// @param countdown - current countdown time
- (void)trackSplashAdCountdownTime:(NSInteger)countdown;

- (void)startCountdown:(NSDictionary *)localInfo
        countdownBlock:(void(^)(NSInteger time))block;

@end
