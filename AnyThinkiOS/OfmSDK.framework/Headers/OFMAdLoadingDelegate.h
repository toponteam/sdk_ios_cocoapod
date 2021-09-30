//
//  OFMAdLoadingDelegate.h
//  OfmSDK
//
//  Created by stephen on 12/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#ifndef OFMAdLoadingDelegate_h
#define OFMAdLoadingDelegate_h
@protocol OFMAdLoadingDelegate<NSObject>
-(void) didFinishLoadingOFMADWithPlacementID:(NSString *)placementID;
-(void) didFailToLoadOFMADWithPlacementID:(NSString*)placementID error:(NSError*)error;
@end
#endif /* ATAdLoadingDelegate_h */
