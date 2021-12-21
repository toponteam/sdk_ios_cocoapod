//
//  ATPlacementModel.h
//  AnyThinkSDK
//
//  Created by Martin Lau on 11/04/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#import "ATModel.h"
#import "ATUnitGroupModel.h"
#import "ATMyOfferOfferModel.h"
#import "ATMyOfferSetting.h"
#import "ATADXPlacementSetting.h"
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, ATADShowType) {
    /**
     * priority -> show times -> added time
     */
    ATADShowTypePriority = 0,
    /**
     * show times -> priority -> added time
     */
    ATADShowTypeSerial = 1
};

typedef NS_ENUM(NSInteger, ATAdFormat) {
    ATAdFormatNative = 0,
    ATAdFormatRewardedVideo = 1,
    ATAdFormatBanner = 2,
    ATAdFormatInterstitial = 3,
    ATAdFormatSplash = 4
};

typedef NS_ENUM(NSInteger, ATRevenueToPlatform) {
    ATRevenueToPlatformAdjust = 1,
    ATRevenueToPlatformAppsflyer = 2,
    ATRevenueToPlatformTenjin
};
extern NSString *const kATPlacementModelCacheDateKey;
extern NSString *const kATPlacementModelCustomDataKey;
@interface ATPlacementModelExtra:ATModel
@property(nonatomic, readonly) BOOL cachesPlacementSetting;
@property(nonatomic, readonly) NSTimeInterval defaultAdSourceLoadingDelay;
@property(nonatomic, readonly) NSInteger defaultNetworkFirmID;
@property(nonatomic, readonly) BOOL usesServerSettings;
@property(nonatomic, readonly) NSInteger countdown;
@property(nonatomic, readonly) BOOL allowsSkip;
@property(nonatomic, readonly) BOOL closeAfterCountdownElapsed;
@end

@interface ATPlatfromInfo : NSObject

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@property(nonatomic) ATRevenueToPlatform platform;
@property(nonatomic) NSInteger dataType;
@property(nonatomic, copy) NSString *token;

@end

@interface ATPlacementModel : ATModel
-(instancetype) initWithDictionary:(NSDictionary *)dictionary associatedCustomData:(NSDictionary*)customData placementID:(NSString*)placementID;
-(instancetype) initWithDictionary:(NSDictionary *)dictionary placementID:(NSString*)placementID;
@property(nonatomic, readonly) NSDictionary *associatedCustomData;
@property(nonatomic, readonly) BOOL cachesPlacementSetting;
@property(nonatomic, readonly) NSInteger format;
@property(nonatomic, readonly) NSString *placementID;
@property(nonatomic, readonly) BOOL adDeliverySwitch;
@property(nonatomic, readonly) NSInteger groupID;
@property(nonatomic, readonly) BOOL refresh;
/**
 Auto refresh is for banner.
 */
@property(nonatomic, readonly) BOOL autoRefresh;
@property(nonatomic, readonly) NSTimeInterval autoRefreshInterval;
/**
 * How many unit groups to be loaded concurrently
 */
@property(nonatomic, readonly) NSInteger maxConcurrentRequestCount;
@property(nonatomic, readonly) NSString *psID;
@property(nonatomic, readonly) NSString *sessionID;
@property(nonatomic, readonly) ATADShowType showType;
/**
 Max showing times allowed in a day with -1 meaning no limitation
 */
@property(nonatomic, readonly) NSInteger unitCapsByDay;
/**
 Max showing times allowed in a hour with -1 meaning no limitation
 */
@property(nonatomic, readonly) NSInteger unitCapsByHour;
@property(nonatomic, readonly) NSTimeInterval unitPacing;
@property(nonatomic, readonly) BOOL wifiAutoSwitch;
@property(nonatomic, readonly) BOOL autoloadingEnabled;
@property(nonatomic, readonly) NSArray<ATUnitGroupModel*>* unitGroups;
@property(nonatomic, readonly) NSArray<ATUnitGroupModel*>* headerBiddingUnitGroups;
@property(nonatomic, readonly) NSArray<ATUnitGroupModel*>* S2SHeaderBiddingUnitGroups;
@property(nonatomic, readonly) NSArray<ATUnitGroupModel*>* olApiUnitGroups;
@property(nonatomic, readonly) NSArray<ATUnitGroupModel*>* inhouseUnitGroups;
@property(nonatomic, readonly) NSArray<ATUnitGroupModel*>* bksUnitGroups;
@property(nonatomic, strong) NSArray <ATUnitGroupModel*>* directOfferHeaderBiddingUnitGroups;




@property(nonatomic, readonly) NSTimeInterval headerBiddingRequestTimeout;
@property(nonatomic, readonly) NSTimeInterval headerBiddingRequestTolerateInterval;
@property(nonatomic, readonly) NSString *S2SBidRequestAddress;
@property(nonatomic, readonly) NSString *waterFallBidRequestAddress;



@property(nonatomic, readonly) NSTimeInterval loadCapDuration;
@property(nonatomic, readonly) NSInteger loadCap;

@property(nonatomic, readonly) NSInteger expectedNumberOfOffers;

@property(nonatomic, readonly) NSTimeInterval loadFailureInterval;
@property(nonatomic, readonly) NSTimeInterval offerLoadingTimeout;
@property(nonatomic, readonly) NSTimeInterval statusValidDuration;//Upstatus
@property(nonatomic, readonly) NSString *asid;//generated by server side
@property(nonatomic, readonly) NSString *trafficGroupID;

@property(nonatomic, readonly) ATPlacementModelExtra *extra;

@property(nonatomic, readonly) NSInteger defaultNetworkFirmID;
@property(nonatomic, readonly) NSTimeInterval defaultAdSourceLoadingDelay;

/*
 */
@property(nonatomic, readonly) NSTimeInterval updateTolerateInterval;
@property(nonatomic, readonly) NSTimeInterval cacheValidDuration;
@property(nonatomic, readonly) NSDate *cacheDate;

@property(nonatomic, readonly) NSArray<ATMyOfferOfferModel*>* offers;
@property(nonatomic, readonly) ATMyOfferSetting *myOfferSetting;
@property(nonatomic, readonly) NSInteger usesDefaultMyOffer;
@property(nonatomic, readonly) BOOL preloadMyOffer;
//extra
@property(nonatomic, readonly) NSDictionary *callback;

@property(nonatomic, readonly) NSInteger FBHBTimeOut;

@property(nonatomic, readonly) NSDictionary* adxSettingDict;
@property(nonatomic, readonly) NSArray<ATUnitGroupModel*>* adxUnitGroups;

@property(nonatomic, readonly) NSDictionary* olApiSettingDict;



@property(nonatomic, readonly) NSString *currency;
@property(nonatomic, readonly) NSString *exchangeRate;

@property(nonatomic, readonly) NSArray *bURLNotificationFirms;


// v5.7.10
@property(nonatomic, readonly) NSString *campaign;

-(Class) adManagerClass;

- (NSDictionary *)revenueToPlatforms;

/**
 In order to solve the problem of inconsistency in legal tender. If the current ecpm currency is USD, this method returns NO.
 */
//- (BOOL)needConvertPrice;

/**
 If the current legal currency of ecpm is not USD, this method will calculate the corresponding price according to the latest exchange rate.
 */
//- (NSString *)convertedPrice:(NSString *)price;

//todo: just for in-house list. It's not a good solution.
@property(nonatomic, copy) NSArray<ATUnitGroupModel*>* waterfallA;


@property(nonatomic, copy) NSArray *directOfferUnitIDArray;


// v5.7.56+
@property(nonatomic, readonly) NSInteger encryptFlag;
@property(nonatomic, readonly, copy) NSString *encryptPublicKey;

/**
 Maximum waiting time for s2s HB adSource to get buyeruid
 */
@property(nonatomic, readonly) NSInteger getBuyeruIdWaitTime;

@property(nonatomic, readonly, copy) NSString *inhouseUrl;
@property(nonatomic, readonly, copy) NSString *thirdInhouseUrl; // bks url of third plantforms

@property(nonatomic, readonly) NSString *exchRateC2U;

@end
