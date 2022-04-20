//
//  ATAdManager+Splash.h
//  AnyThinkSplash
//
//  Created by Martin Lau on 2018/12/20.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#import <AnyThinkSDK/AnyThinkSDK.h>

extern NSString *const kATSplashExtraCountdownKey;
extern NSString *const kATSplashExtraTolerateTimeoutKey; //Timeout duration
extern NSString *const kATSplashExtraHideSkipButtonFlagKey;
extern NSString *const kATSplashExtraBackgroundImageKey;
extern NSString *const kATSplashExtraBackgroundColorKey;
extern NSString *const kATSplashExtraSkipButtonCenterKey;
extern NSString *const kATSplashExtraCustomSkipButtonKey;
extern NSString *const kATSplashExtraCanClickFlagKey;
extern NSString *const kATSplashExtraShowDirectionKey;//Supported by KS Splash, defaults to Vertical, 1 to Horizontal
// 5.7.61+
extern NSString *const kATSplashExtraCountdownIntervalKey;

extern NSString *const kATSplashExtraPlacementIDKey;
extern NSString *const kATSplashExtraNetworkFirmID; //Ad platform FirmID
extern NSString *const kATSplashExtraAdSourceIDKey; //Ad source ID
 
@protocol ATSplashDelegate;

@interface ATAdManager (Splash)

/// Called when load ad
/// @param placementID - the placementId string of the Ad that display.
/// @param extra - local configuration parameter
/// @param delegate - delegate object
/// @param containerView - Bottom view
- (void)loadADWithPlacementID:(NSString *)placementID
                        extra:(NSDictionary *)extra
                     delegate:(id<ATSplashDelegate>)delegate
                containerView:(UIView *)containerView;

/// Called when load ad
/// @param defaultAdSourceConfig - default ad sourceConfig string, only used to solve the first screen loading timeout
/// Note: The default ad load timeout is 5s
- (void)loadADWithPlacementID:(NSString *)placementID
                        extra:(NSDictionary *)extra
                     delegate:(id<ATSplashDelegate>)delegate
                containerView:(UIView *)containerView
        defaultAdSourceConfig:(NSString *)defaultAdSourceConfig;

/// Called when Display Splash ads
/// @param window window where ads are displayed
- (void)showSplashWithPlacementID:(NSString *)placementID
                           window:(UIWindow *)window
                         delegate:(id<ATSplashDelegate>)delegate;
/// v5.7.61+
- (void)showSplashWithPlacementID:(NSString *)placementID
                           window:(UIWindow *)window
                            extra:(NSDictionary *)extra
                         delegate:(id<ATSplashDelegate>)delegate;
/// available ios 13.0
- (void)showSplashWithPlacementID:(NSString *)placementID
                           window:(UIWindow *)window
                      windowScene:(UIWindowScene *)windowScene
                         delegate:(id<ATSplashDelegate>)delegate API_AVAILABLE(ios(13.0));

/// check whether the splash ad is ready
/// v5.7.06+
- (BOOL)splashReadyForPlacementID:(NSString *)placementID;

/// check whether the splash ad is ready
/// @param send - whether send tk
- (BOOL)splashReadyForPlacementID:(NSString *)placementID
                           sendTK:(BOOL)send;

/// Get the status object of the current ad slot ATCheckLoadModel
- (ATCheckLoadModel *)checkSplashLoadStatusForPlacementID:(NSString *)placementID;

/// Query all cached information of the ad slot
- (NSArray<NSDictionary *> *)getSplashValidAdsForPlacementID:(NSString *)placementID;

/// Get various parameters of the advertising platform
- (void)checkAdSourceList:(NSString*)placementID;


/// Enter the current ad slot cache status statistics in the business scenario.
/// @param scene - ad Scenario
/// v5.7.91+
- (void)entrySplashScenarioWithPlacementID:(NSString *)placementID
                                     scene:(NSString *)scene;

@end
