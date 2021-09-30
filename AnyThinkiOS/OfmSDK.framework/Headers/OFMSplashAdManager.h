//
//  OFMSplashAdManager.h
//  OfmSDK
//
//  Created by Jason on 2021/1/16.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import "OFMAdManager.h"

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kOFMSplashExtraRootViewControllerKey;
extern NSString *const kOFMSplashExtraRIDKey;
extern NSString *const kOFMSplashExtraAppIDKey;
extern NSString *const kOFMSplashExtraMobrainAdnTypeKey;
extern NSString *const kOFMSplashExtraMobrainAppKeyKey;
extern NSString *const kOFMSplashExtraNetworkFirmIDKey;

@protocol OFMSplashDelegate;

@interface OFMSplashAdManager : OFMAdManager

- (void)showSplashWithPlacementID:(NSString*)placementID window:(UIWindow*)window delegate:(id<OFMSplashDelegate>)delegate;
- (void)showSplashWithPlacementID:(NSString*)placementID window:(UIWindow*)window windowScene:(UIWindowScene *)windowScene delegate:(id<OFMSplashDelegate>)delegate API_AVAILABLE(ios(13.0));

@end

NS_ASSUME_NONNULL_END
