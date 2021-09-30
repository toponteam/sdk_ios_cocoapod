//
//  OFMNativeDelegate.h
//  OfmSDK
//
//  Created by stephen on 12/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#ifndef OFMNativeDelegate_h
#define OFMNativeDelegate_h

#import "OFMAdLoadingDelegate.h"

@protocol OFMNativeAdDelegate<OFMAdLoadingDelegate>


-(void) nativeAdDidShowInAdViewForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra;

//Called when user click the ad
-(void) nativeAdDidClickInAdViewForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra;

-(void) nativeAdDeepLinkOrJumpForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra result:(BOOL)success;

-(void) nativeAdDidStartPlayingVideoInAdViewForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra;

-(void) nativeAdDidEndPlayingVideoInAdViewForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra;

-(void) nativeAdDidEnterFullScreenVideoInAdViewForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra;

-(void) nativeAdDidExitFullScreenVideoInAdViewForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra;

-(void) nativeAdDidTapCloseButtonInAdViewForPlacementID:(NSString*)placementID extra:(NSDictionary *)extra;


@end

#endif /* OFMNativeDelegate_h */
