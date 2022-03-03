//
//  OFMAdManager+Native.h
//  OfmSDK
//
//  Created by stephen on 12/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import "OFMAdManager.h"
#import "OFMNativeAdDelegate.h"
#import "OFMNativeAdConfiguration.h"

#ifndef OFMAdManager_Native_h
#define OFMAdManager_Native_h


@interface OFMNativeAdManager: OFMAdManager

/*
 nil will be returned if you try to show banner ad for the placementID if it's not ready.
 */
-(nullable UIView*)retrieveNativeAdViewForPlacementID:(NSString*)placementID configuration:(OFMNativeAdConfiguration*)configuration  viewController:(UIViewController*)viewController delegate:(id<OFMNativeAdDelegate>)delegate;

@end

#endif /* OFMAdManager_Native_h */
