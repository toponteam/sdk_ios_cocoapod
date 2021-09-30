//
//  OFMAdManager+Banner.h
//  OfmSDK
//
//  Created by stephen on 12/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import "OFMAdManager.h"
#import "OFMBannerDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface OFMBannerAdManager: OFMAdManager

/*
 nil will be returned if you try to show banner ad for the placementID if it's not ready.
 */
-(nullable UIView*)retrieveBannerViewForPlacementID:(NSString*)placementID viewController:(UIViewController*)viewController delegate:(id<OFMBannerDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END

