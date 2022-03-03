//
//  OFMAPI.h
//  OfmSDK
//
//  Created by stephen on 12/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OFMMediationConfig.h"

extern NSInteger const OFMMediationSystemTopOn;
extern NSInteger const OFMMediationSystemMobrain;
extern NSString *const kOFMMediationNameTopOn;
extern NSString *const kOFMMediationNameMobrain;

extern NSString *const OFMADLoadingErrorDomain;
extern NSString *const kOFMADSDKFailedToLoadADMsg;
extern NSString *const kOFMSDKImportIssueErrorReason;
extern NSInteger const OFMADLoadingErrorCodeADOfferLoadingFailed;
extern NSInteger const OFMADLoadingErrorCodeAdapterClassNotFound;
extern NSInteger const OFMADLoadingErrorCodeSDKNotInitalizedProperly;
extern NSInteger const OFMADLoadingErrorCodeThirdPartySDKNotImportedProperly;



@interface OFMAPI : NSObject

+(instancetype)sharedInstance;

@property(nonatomic, readonly) NSString *appID;
@property(nonatomic, readonly) NSString *appKey;
@property(nonatomic, readonly) NSString *version;

-(void) setLogDebug:(BOOL)debug;
/**
 * appId: TopOn appId
 * appKey: TopOn appkey
 * defaultSetting: defaultSetting for default ad load
 * completion: block to check the ofm result or error reason
 */
-(void) initWithAppId:(NSString*)appID appKey:(NSString*)appKey defaultConfig:(NSString *)defaultConfig completion:(void (^)(OFMMediationConfig * mediationConfig, NSError * error)) completion;

-(void) setCustomData:(NSDictionary*) customData;

-(OFMMediationConfig *) currentMediationConfig;

@end
