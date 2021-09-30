//
//  OFMPlacementModel.h
//  OfmSDK
//
//  Created by stephen on 13/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OFMPlacementModel: NSObject

@property(nonatomic, readwrite) NSInteger mediationSystem;
@property(nonatomic, readwrite) NSInteger mediationTrafficId;
@property(nonatomic, readwrite) NSInteger format;
@property(nonatomic, readwrite) NSString *ofmPlacementID;
@property(nonatomic, readwrite) NSDictionary *mediationPlacementInfo;
@property(nonatomic) NSString *adapterClass;

-(instancetype) initWithDictionary:(NSDictionary *)dictionary mediationSystem:(NSInteger)mediationSystem mediationTrafficId:(NSInteger) mediationTrafficId placementID:(NSString*)placementID;
- (NSDictionary *)tkDatas;

- (BOOL)trackingEnable;
//- (BOOL)agentEventEnable;
@end
