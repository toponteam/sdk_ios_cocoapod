//
//  OFMAdManager.h
//  OfmSDK
//
//  Created by stephen on 12/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


extern NSString *const kOFMCustomDataUserIDKey;

@protocol OFMAdLoadingDelegate;
@class OFMPlacementModel;
@interface OFMAdManager : NSObject
+(instancetype) sharedManager;
@property(nonatomic, strong) NSDictionary *extra;

-(void) loadOFMADWithPlacementID:(NSString*)placementID extra:(NSDictionary*)extra customData:(NSDictionary*) customData delegate:(id<OFMAdLoadingDelegate>)delegate;

-(OFMPlacementModel *) placementModelForPlacementID:(NSString *)placementID;

-(BOOL) adReadyForPlacementID:(NSString*)placementID;

-(id)getShowDelegateForPlacementID:(NSString*)placementID;
-(void)saveShowDelegateForPlacementID:(NSString*)placementID delegate:(id)delegate;
@end
