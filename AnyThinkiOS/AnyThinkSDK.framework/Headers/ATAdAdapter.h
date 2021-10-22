//
//  ATAdAdapter.h
//  AnyThinkSDK
//
//  Created by Martin Lau on 05/07/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#ifndef ATAdAdapter_h
#define ATAdAdapter_h
extern NSString *const kATADapterCustomInfoStatisticsInfoKey;
extern NSString *const kATAdapterCustomInfoPlacementModelKey;
extern NSString *const kATAdapterCustomInfoUnitGroupModelKey;
extern NSString *const kATAdapterCustomInfoRequestIDKey;
extern NSString *const kATAdapterCustomInfoExtraKey;
extern NSString *const kATAdapterCustomInfoBuyeruIdKey;

extern NSString *const kATHeaderBiddingParametersUnitIdKey;
extern NSString *const kATHeaderBiddingParametersNetworkFirmIdKey;
extern NSString *const kATHeaderBiddingParametersAdFormatKey;
extern NSString *const kATHeaderBiddingParametersAdSourceIdKey;
extern NSString *const kATHeaderBiddingParametersEcpofferKey;
extern NSString *const kATHeaderBiddingParametersGetOfferKey;
extern NSString *const kATHeaderBiddingParametersDisplayManagerVersionKey;
extern NSString *const kATHeaderBiddingParametersTplVersionKey;
extern NSString *const kATHeaderBiddingParametersAppIdKey;
extern NSString *const kATHeaderBiddingParametersAccountIdKey;
extern NSString *const kATHeaderBiddingParametersBuyeruIdKey;
extern NSString *const kATHeaderBiddingParametersBidTokenKey;
extern NSString *const kATHeaderBiddingParametersAdWidthKey;
extern NSString *const kATHeaderBiddingParametersAdHeightKey;

@protocol ATAd;
@class ATPlacementModel;
@class ATUnitGroupModel;
@class ATMyOfferOfferModel;
@class ATBidInfo;
@class ATWaterfall;
@class ATInHouseBidRequest;

@protocol ATAdAdapter<NSObject>
@property (nonatomic,copy) void (^metaDataDidLoadedBlock)(void);
/*
 * Create a rewarded instance for download event and FOR DOWNLOAD EVENT ONLY.
 */
//+(id<ATAd>) placeholderAdWithPlacementModel:(ATPlacementModel*)placementModel requestID:(NSString*)requestID unitGroup:(ATUnitGroupModel*)unitGroup finalWaterfall:(ATWaterfall*)finalWaterfall;
+(id<ATAd>) readyFilledAdWithPlacementModel:(ATPlacementModel*)placementModel requestID:(NSString*)requestID priority:(NSInteger)priority unitGroup:(ATUnitGroupModel*)unitGroup finalWaterfall:(ATWaterfall*)finalWaterfall;
+(ATMyOfferOfferModel*) resourceReadyMyOfferForPlacementModel:(ATPlacementModel*)placementModel unitGroupModel:(ATUnitGroupModel*)unitGroupModel info:(NSDictionary*)info;
+(BOOL) adReadyForInfo:(NSDictionary*)info;
-(instancetype) initWithNetworkCustomInfo:(NSDictionary *)serverInfo localInfo:(NSDictionary *)localInfo;
-(void) loadADWithInfo:(NSDictionary *)serverInfo localInfo:(NSDictionary *)localInfo completion:(void (^)(NSArray<NSDictionary*> *assets, NSError *error))completion;
+(void) bidRequestWithPlacementModel:(ATPlacementModel*)placementModel unitGroupModel:(ATUnitGroupModel*)unitGroupModel info:(NSDictionary*)info completion:(void(^)(ATBidInfo *bidInfo, NSError *error))completion;
@optional
+(void)headerBiddingParametersWithUnitGroupModel:(ATUnitGroupModel*)model extra:(NSDictionary *)extra completion:(void(^)(NSDictionary *headerBiddingParams))completion;
+(ATInHouseBidRequest*)inHouseBiddingRequestWithPlacementModel:(ATPlacementModel*)placementModel unitGroupModel:(ATUnitGroupModel*)unitGroupModel extra:(NSDictionary *)extra;
+(NSString*) adsourceRemoteKeyWithContent:(NSDictionary*)content unitGroupModel:(ATUnitGroupModel *)unitGroupModel;
@end
#endif /* ATAdAdapter_h */
