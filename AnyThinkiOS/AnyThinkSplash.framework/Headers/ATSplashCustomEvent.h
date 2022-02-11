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

typedef NS_OPTIONS(NSInteger, ATSplashCloseType) {
    ATSplashCloseNuknow = 1,            // splash close type unknow
    ATSplashCloseSkip = 2,              // splash skip to close
    ATSplashCloseCountdown = 3,         // splash countdown to close
    ATSplashCloseClickcontent = 4,      // splash clickcontent to close
    ATSplashCloseShowfail = 99          // splash showfail to close
};

@interface ATSplashCustomEvent : ATAdCustomEvent
-(instancetype) initWithInfo:(NSDictionary*)serverInfo localInfo:(NSDictionary*)localInfo;
@property(nonatomic, weak) id<ATSplashDelegate> delegate;
@property(nonatomic, readonly) NSString *unitID;
@property(nonatomic, assign) NSInteger priorityIndex;

-(NSDictionary*)delegateExtra;
-(void) trackShowWithoutWaterfall;
-(void) trackClickWithoutWaterfall;
-(void) trackSplashAdClosed __attribute__((deprecated("Deprecated, please Use `trackSplashAdClosed:`")));
-(void) trackSplashAdLoaded:(id)splashAd;
-(void) trackSplashAdLoaded:(id)splashAd adExtra:(NSDictionary *)adExtra;
-(void) trackSplashAdShow;
-(void) trackSplashAdClick;
-(void) trackSplashAdLoadFailed:(NSError*)error;
-(void) trackSplashAdZoomOutViewClick;
-(void) trackSplashAdZoomOutViewClosed;
-(void) trackSplashAdDeeplinkOrJumpResult:(BOOL)success;

// v5.7.53+
-(void) trackSplashAdDetailClosed;
-(void) trackSplashAdShowFailed:(NSError *)error;

// v5.7.61+
-(void) trackSplashAdCountdownTime:(NSInteger)countdown;

- (void)startCountdown:(NSDictionary *)localInfo countdownBlock:(void(^)(NSInteger time))block;

// v5.7.99
-(void) trackSplashAdClosed:(NSDictionary *)extra;

@end
