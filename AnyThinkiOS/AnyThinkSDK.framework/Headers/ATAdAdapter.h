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
extern NSString *const kATAdapterCustomInfoBidInfoKey;
extern NSString *const kATAdapterCustomInfoBidResultKey;
extern NSString *const kATAdapterCustomInfoBidPlacementIDKey;

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

extern NSString *const kATHeaderBiddingParametersDirectOfferKey;

extern NSString *const kATHeaderBiddingParametersDirectOfferSizeKey;


extern NSString *const kATHeaderBiddingParametersBidFormatKey;
extern NSString *const kATHeaderBiddingParametersBidderTypeKey;
extern NSString *const kATHeaderBiddingParametersUnitGroupKey;

extern NSString *const kATHeaderBiddingParametersSDKInfoKey;

@protocol ATAd;
@class ATPlacementModel;
@class ATUnitGroupModel;
@class ATMyOfferOfferModel;
@class ATBidInfo;
@class ATWaterfall;
@class ATInHouseBidRequest;

typedef NS_ENUM(NSInteger, ATBiddingLossType) {
    ATBiddingLossWithLowPriceInNormal = 103,
    ATBiddingLossWithLowPriceInHB = 102,
    ATBiddingLossWithBiddingTimeOut = 2,
    ATBiddingLossWithExpire = 5
};

@protocol ATAdAdapter<NSObject>

@property (nonatomic,copy) void (^metaDataDidLoadedBlock)(void);
/*
 * Create a rewarded instance for download event and FOR DOWNLOAD EVENT ONLY.
 */
//+(id<ATAd>) placeholderAdWithPlacementModel:(ATPlacementModel*)placementModel requestID:(NSString*)requestID unitGroup:(ATUnitGroupModel*)unitGroup finalWaterfall:(ATWaterfall*)finalWaterfall;
+ (id<ATAd>)readyFilledAdWithPlacementModel:(ATPlacementModel *)placementModel
                                  requestID:(NSString *)requestID
                                   priority:(NSInteger)priority
                                  unitGroup:(ATUnitGroupModel *)unitGroup
                             finalWaterfall:(ATWaterfall *)finalWaterfall
                                  localInfo:(NSDictionary *)localInfo;

+ (ATMyOfferOfferModel *)resourceReadyMyOfferForPlacementModel:(ATPlacementModel *)placementModel
                                               unitGroupModel:(ATUnitGroupModel *)unitGroupModel
                                                         info:(NSDictionary *)info;
+ (BOOL)adReadyForInfo:(NSDictionary *)info;


/// Initializing adapter
/// @param serverInfo - dictionary from server
/// @param localInfo - dictionary from local custom data
- (instancetype)initWithNetworkCustomInfo:(NSDictionary *)serverInfo
                                localInfo:(NSDictionary *)localInfo;


/// implement the function to load ad
/// @param serverInfo - dictionary from server
/// @param localInfo - dictionary from local custom data
- (void)loadADWithInfo:(NSDictionary *)serverInfo
             localInfo:(NSDictionary *)localInfo
            completion:(void (^)(NSArray<NSDictionary*> *assets, NSError *error))completion;


/// implement custom header binding,must implement this class methods
/// @param completion - When header bidding is completed, this callback needs to be executed, and the data or errors obtained by bidding need to be passed to Topon SDK
+ (void)bidRequestWithPlacementModel:(ATPlacementModel *)placementModel
                      unitGroupModel:(ATUnitGroupModel *)unitGroupModel
                                info:(NSDictionary *)info
                          completion:(void(^)(ATBidInfo *bidInfo, NSError *error))completion;

@optional

//+(void) inhouseRequestInfoWithCompletion:(void(^)(NSDictionary *bidResult))completion;

+ (void)headerBiddingParametersWithUnitGroupModel:(ATUnitGroupModel *)model
                                           extra:(NSDictionary *)extra
                                      completion:(void(^)(NSDictionary *headerBiddingParams))completion;

//+(ATInHouseBidRequest*)inHouseBiddingRequestWithPlacementModel:(ATPlacementModel*)placementModel unitGroupModel:(ATUnitGroupModel*)unitGroupModel extra:(NSDictionary *)extra;



+(void) sendWinnerNotifyWithCustomObject:(id)customObject secondPrice:(NSString*)price;
+ (void)sendLossNotifyWithCustomObject:(nonnull id)customObject lossType:(ATBiddingLossType)lossType winPrice:(nonnull NSString *)price;

@end
#endif /* ATAdAdapter_h */
