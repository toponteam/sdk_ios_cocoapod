//
//  OFMBannerDelegate.h
//  OfmSDK
//
//  Created by stephen on 12/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#ifndef OFMBannerDelegate_h
#define OFMBannerDelegate_h

#import "OFMAdLoadingDelegate.h"

@protocol OFMBannerDelegate<OFMAdLoadingDelegate>

-(void) bannerDidShowForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
-(void) bannerDidCloseForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
-(void) bannerDidClickForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra;
-(void) bannerDeepLinkOrJumpForPlacementID:(NSString*)placementID extra:(NSDictionary*)extra result:(BOOL)success;

@end
#endif /* OFMBannerDelegate_h */
