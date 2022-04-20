//
//  ATAPI.h
//  AnyThinkSDK
//
//  Created by Martin Lau on 09/04/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern NSString *const kATADDelegateExtraECPMLevelKey; // the eCPM level of the ad source
extern NSString *const kATADDelegateExtraSegmentIDKey; //segment ID
extern NSString *const kATADDelegateExtraScenarioIDKey; // Advertising Scene ID,Only Rewarded Video and Interstitial support
extern NSString *const kATADDelegateExtraChannelKey; // Channel Information
extern NSString *const kATADDelegateExtraSubChannelKey; // sub-channel information
extern NSString *const kATADDelegateExtraCustomRuleKey; // Json string of the Placement + App dimension custom rule
extern NSString *const kATADDelegateExtraIDKey; // a unique ID generated for each impression
extern NSString *const kATADDelegateExtraAdunitIDKey; // TopOn placement ID
extern NSString *const kATADDelegateExtraPublisherRevenueKey; // impression revenue
extern NSString *const kATADDelegateExtraCurrencyKey; // currency unit, for example: "USD"
extern NSString *const kATADDelegateExtraCountryKey; // country code, for example: "CN"
extern NSString *const kATADDelegateExtraFormatKey; // ad source types
extern NSString *const kATADDelegateExtraPrecisionKey; // eCPM precision
extern NSString *const kATADDelegateExtraNetworkTypeKey; // Network Type
extern NSString *const kATADDelegateExtraNetworkPlacementIDKey; // the ad placement ID of a third-party Ads Network
extern NSString *const kATADDelegateExtraScenarioRewardNameKey; // reward name of the ad Scenario,Only Rewarded Video support
extern NSString *const kATADDelegateExtraScenarioRewardNumberKey; // number of reward for the ad Scenario，Only Rewarded Video support
extern NSString *const kATADDelegateExtraPlacementRewardNameKey;
extern NSString *const kATADDelegateExtraPlacementRewardNumberKey;
extern NSString *const kATADDelegateExtraExtInfoKey; // additional information of Topon Adx & OnlineAPI Offer,output as Json string
extern NSString *const kATADDelegateExtraOfferIDKey;
extern NSString *const kATADDelegateExtraCreativeIDKey;
extern NSString *const kATADDelegateExtraIsDeeplinkKey;
extern NSString *const kATADDelegateExtraRVUserCustomData;
extern NSString *const kATADDelegateExtraTpBidIDKey;

extern NSString *const ATADShowingErrorDomain;

extern NSString *const ATSDKAdLoadingErrorMsg;
extern NSString *const ATSDKAdLoadFailedErrorMsg;

extern NSString *const ATADLoadingErrorDomain;
extern NSInteger const ATADLoadingErrorCodePlacementStrategyInvalidResponse;
extern NSInteger const ATADLoadingErrorCdoePlacementStragetyNetworkError;
extern NSInteger const ATADLoadingErrorCodeADOfferLoadingFailed;
extern NSInteger const ATADLoadingErrorCodePlacementStrategyNotFound;
extern NSInteger const ATADLoadingErrorCodeADOfferNotFound;
extern NSInteger const ATADLoadingErrorCodeShowIntervalWithinPlacementPacing;
extern NSInteger const ATADLoadingErrorCodeShowTimesExceedsHourCap;
extern NSInteger const ATADLoadingErrorCodeShowTimesExceedsDayCap;
extern NSInteger const ATADLoadingErrorCodeAdapterClassNotFound;
extern NSInteger const ATADLoadingErrorCodeADOfferLoadingTimeout;
extern NSInteger const ATADLoadingErrorCodeSDKNotInitalizedProperly;
extern NSInteger const ATADLoadingErrorCodeDataConsentForbidden;
extern NSInteger const ATADLoadingErrorCodeThirdPartySDKNotImportedProperly;
extern NSInteger const ATADLoadingErrorCodeInvalidInputEncountered;
extern NSInteger const ATADLoadingErrorCodePlacementAdDeliverySwitchOff;
extern NSInteger const ATADLoadingErrorCodePreviousLoadNotFinished;
extern NSInteger const ATADLoadingErrorCodeNoUnitGroupsFoundInPlacement;
extern NSInteger const ATADLoadingErrorCodeUnitGroupsFilteredOut;
extern NSInteger const ATADLoadingErrorCodeFailureTooFrequent;
extern NSInteger const ATADLoadingErrorCodeLoadCapsExceeded;
extern NSInteger const ATADLoadingErrorCodeUnitGroupsExpired;

extern NSInteger const ATADLoadingADXFailedCode;

extern NSString *const ATSDKInitErrorDomain;
extern NSInteger const ATSDKInitErrorCodeDataConsentNotSet;
extern NSInteger const ATSDKInitErrorCodeDataConsentForbidden;

extern NSString *const kATNetworkNameFyber;
extern NSString *const kATNetworkNameStartApp;
extern NSString *const kATNetworkNameFacebook;
extern NSString *const kATNetworkNameInmobi;
extern NSString *const kATNetworkNameAdmob;
extern NSString *const kATNetworkNameFlurry;
extern NSString *const kATNetworkNameMintegral;
extern NSString *const kATNetworkNameApplovin;
extern NSString *const kATNetworkNameGDT;
extern NSString *const kATNetworkNameMopub;
extern NSString *const kATNetworkNameTapjoy;
extern NSString *const kATNetworkNameChartboost;
extern NSString *const kATNetworkNameIronSource;
extern NSString *const kATNetworkNameVungle;
extern NSString *const kATNetworkNameAdColony;
extern NSString *const kATNetworkNameUnityAds;
extern NSString *const kATNetworkNameTT;
extern NSString *const kATNetworkNamePangle;
extern NSString *const kATNetworkNameOneway;
extern NSString *const kATNetworkNameAppnext;
extern NSString *const kATNetworkNameYeahmobi;
extern NSString *const kATNetworkNameBaidu;
extern NSString *const kATNetworkNameMobPower;
extern NSString *const kATNetworkNameNend;
extern NSString *const kATNetworkNameMaio;
extern NSString *const kATNetworkNameSigmob;
extern NSString *const kATNetworkNameMyOffer;
extern NSString *const kATNetworkNameKS;
extern NSString *const kATNetworkNameOgury;
extern NSString *const kATNetworkNameGoogleAdManager;
extern NSString *const kATNetworkNameADX;
extern NSString *const kATNetworkNameHelium;
extern NSString *const kATNetworkNameMintegralOnlineApi;
extern NSString *const kATNetworkNameGDTOnlineApi;
extern NSString *const kATNetworkNameKidoz;
extern NSString *const kATNetworkNameMyTarget;
extern NSString *const kATNetworkNameMobrain;
extern NSString *const kATNetworkNameMax;
extern NSString *const kATNetworkNameklevin;

extern NSString *const kATInmobiGDPRStringKey;
extern NSString *const kATInmobiConsentStringKey;

extern NSString *const kATAdmobConsentStatusKey;
extern NSString *const kATAdmobUnderAgeKey;

extern NSString *const kATApplovinConscentStatusKey;
extern NSString *const kATApplovinUnderAgeKey;

extern NSString *const kATTapjoyConsentValueKey;
extern NSString *const kATTapjoyGDPRSubjectionKey;

extern NSString *const kATFlurryConsentGDPRScopeFlagKey;
extern NSString *const kATFlurryConsentConsentStringKey;

extern NSString *const kATAdColonyGDPRConsiderationFlagKey;
extern NSString *const kATAdColonyGDPRConsentStringKey;

extern NSString *const kATYeahmobiGDPRConsentValueKey;
extern NSString *const kATYeahmobiGDPRConsentTypeKey;

extern NSString *const kATCustomDataUserIDKey;//string
extern NSString *const kATCustomDataAgeKey;//Integer
extern NSString *const kATCustomDataGenderKey;//Integer
extern NSString *const kATCustomDataNumberOfIAPKey;//Integer
extern NSString *const kATCustomDataIAPAmountKey;//Double
extern NSString *const kATCustomDataIAPCurrencyKey;//string
extern NSString *const kATCustomDataChannelKey;//string
extern NSString *const kATCustomDataSubchannelKey;//string
extern NSString *const kATCustomDataSegmentIDKey;//int

extern NSString *const kATDeviceDataInfoOSVersionNameKey; //System version name
extern NSString *const kATDeviceDataInfoOSVersionCodeKey; //System version code
extern NSString *const kATDeviceDataInfoPackageNameKey; //Application package name
extern NSString *const kATDeviceDataInfoAppVersionNameKey; //Application version name
extern NSString *const kATDeviceDataInfoAppVersionCodeKey; //Application version code
extern NSString *const kATDeviceDataInfoBrandKey; //Phone brands
extern NSString *const kATDeviceDataInfoModelKey; //Phone model
extern NSString *const kATDeviceDataInfoScreenKey; //Screen Resolution
extern NSString *const kATDeviceDataInfoNetworkTypeKey; //Network Type
extern NSString *const kATDeviceDataInfoMNCKey; //Mobile Network Code
extern NSString *const kATDeviceDataInfoMCCKey; //Mobile Country Code
extern NSString *const kATDeviceDataInfoLanguageKey; //Language
extern NSString *const kATDeviceDataInfoTimeZoneKey; //Time zone
extern NSString *const kATDeviceDataInfoUserAgentKey; //User Agent
extern NSString *const kATDeviceDataInfoOrientKey; //Screen orientation
extern NSString *const kATDeviceDataInfoIDFAKey; //idfa
extern NSString *const kATDeviceDataInfoIDFVKey; //idfv

extern NSString *const kATAdLoadingExtraBUAdLoadTypeKey;


typedef NS_ENUM(NSInteger, ATUserLocation) {
    ATUserLocationUnknown = 0,
    ATUserLocationInEU = 1,
    ATUserLocationOutOfEU = 2
};

typedef NS_ENUM(NSInteger, ATDataConsentSet) {
    //Let it default to forbidden if not set
    ATDataConsentSetUnknown = 0,
    ATDataConsentSetPersonalized = 1,
    ATDataConsentSetNonpersonalized = 2
};

typedef NS_ENUM(NSUInteger, ATNetworkTerritory) {
    ATNetworkTerritory_CN = 1,
    ATNetworkTerritory_NO_CN,
};

typedef NS_ENUM(NSUInteger, ATAreaCode) {
    ATAreaCodeGlobal = 1,
    ATAreaCodeChinese_mainland,
};

typedef NS_ENUM(NSInteger, ATBUAdLoadType) {
    ATBUAdLoadTypeUnknown                    = -1,//Unknown
    ATBUAdLoadTypePreload                    = 1,//Preload resources
    ATBUAdLoadTypeLoad                       = 3,//Load resources in real time
};

typedef NS_ENUM(NSInteger, ATPersonalizedAdState) {
    ATPersonalizedAdStateType = 1,
    ATNonpersonalizedAdStateType = 2
};

typedef NS_OPTIONS(NSInteger, ATLogType) {
    ATLogTypeNone = 0,
    ATLogTypeInternal = 1 << 0,
    ATLogTypeExternal = 1 << 1,
    ATLogTypeTemporary = 1 << 2
};

@interface ATAPI : NSObject


/// singleton object
+ (instancetype)sharedInstance;

/// Initialize SDK
/// @param appID - appid string
/// @param appKey appkey string
/// @param error - see what's the matter.
- (BOOL)startWithAppID:(NSString *)appID
                appKey:(NSString *)appKey
                 error:(NSError**)error;


/// map network firm id list
+ (NSDictionary<NSNumber*, NSString*>*)networkNameMap;

/// Whether the network platform integration integrity information is normal
+ (void)integrationChecking;

// get MoPub init status
+ (BOOL)getMPisInit;

/// Set MoPub init status
/// @param MPisInit - init status
+ (void)setMPisInit:(BOOL)MPisInit;

/// set location longitude
- (void)setLocationLongitude:(double)longitude dimension:(double)dimension;

/// set whether WX is installed
/// @param isInstallWX - install status
- (void)setWXStatus:(BOOL)isInstallWX;

+ (void)setInitializationType:(int)type;

/// only for adx，onlineApi，MyOffer  banner&splash adLogo，NO by default
+ (void)setAdLogoVisible:(BOOL)adLogoVisible;

/// only for pangle，Territory_CN by default
+ (void)setNetworkTerritory:(ATNetworkTerritory)territory;

/// consentString might be nil.
/// This method is thread-safe.
- (void)setDataConsentSet:(ATDataConsentSet)dataConsentSet
            consentString:(NSDictionary<NSString*, NSString*>*)consentString;

/// Whether the device is located in data protected area.
- (BOOL)inDataProtectionArea;

/// get user location
/// @param callback - location type
- (void)getUserLocationWithCallback:(void(^)(ATUserLocation location))callback;

/// get Area
/// @param success - arear string
/// @param failure - error message
- (void)getAreaSuccess:(void(^)(NSString *areaCodeStr))success
               failure: (void(^)(NSError *error))failure;

/// set the user data area type,before initializing the SDK
/// @param areaCode - area type
- (void)setUserDataArea:(ATAreaCode)areaCode;

/// get ps id
- (NSString *)psID;

/// Log enabled
/// @param logEnabled - log status
+ (void)setLogEnabled:(BOOL)logEnabled;

/// print test info log
/// include idfa,idfv
+ (void)testModeInfo;
    
/**
 * Show the data consent dialog using the specified constroller as the presenting view controller.
 * viewController might be nil, for which the root view controller of the window will be used instead.
 */
- (void)presentDataConsentDialogInViewController:(UIViewController *)viewController
                               dismissalCallback:(void(^)(void))dismissCallback;

- (void)presentDataConsentDialogInViewController:(UIViewController *)viewController
                          loadingFailureCallback:(void(^)(NSError *error))loadingFailureCallback
                               dismissalCallback:(void(^)(void))dismissCallback;
/**
 * Defaults to forbidden;
 * Thread-safe.
 */

/**
 * Set network consent info individually; according to the network specifications, types for the info you should provide for the networks should be as follows:
 * Mintegral: dictionary, in which you can either set @YES/@NO for key @0 to allow/prevent all three types of data collection(example, @{@0:@YES}), or you can set @YES/@NO each for @1, @2, @3 keys respectively(example, @{@1:@YES, @2:@NO, @3:@YES});for more detailed infomation, please refer to its official website.
 * Inmobi: A dictionary containing the follow keys and values:
    1) An string, @"0" means user not being in GDPR area, @"1" otherwise, with key kATInmobiGDPRStringKey
    2) An string, @"true" means user having granted consent, @"false" otherwise with key kATInmobiConsentStringKey
 * Mopub: BOOL wrapped as an NSNumber
 * Admob: A dictionary containing the follow keys and values:
 *       1) An NSInteger wrapped as an NSNumber specifying the consent status(0=unknown, 1=non personalized or 2=personalized), under the key kATAdmobConsentStatusKey
 *       2) A BOOL wrapped as an NSNumber indicating whether you as a developer are aware that the user is under the age of conscent, under the key kATAdmobUnderAgeKey
 * Applovin: A dictionary containing the following keys and values:
 *       1) A BOOL wrapped as an NSNumber indicating if user has provided consent for information sharing with AppLovin, under the key
 *       2) A BOOL wrapped as an NSNumber indicating if the user is age restricted
 * Flurry: An NSDictionary containing the following value:
        1) A BOOL wrapped as an NSNumber indicating if the user is whihin GDPR scrope,
        2) An NSDictionary
    Please refer to Flurry's develper website for more detailed info: https://developer.yahoo.com/flurry/docs/integrateflurry/ios/.
 * Tapjoy: A dictionary containing the following key-value pairs (refer to Tapjoy developer website for more details):
 *       1) An string value, "0" (User has not provided consent), "1" (User has provided consent) or a daisybit string as suggested in IAB's Transparency and Consent Framework
 *       2) An BOOL wrapped as an NSNumber, the value should be set to YES when User (Subject) is applicable to GDPR regulations
 *          and NO when User is not applicable to GDPR regulations. In the absence of this call, Tapjoy server makes the
 *          determination of GDPR applicability.
 * Chartboost: A BOOL wrapped as an NSNumber to restrict Chartboost's ability to collect personal data from the device. When this is set to YES. IDFA               and ip address will not
 *   be collected by the SDK or the server. Use this to communicate an EEU Data Subject's preference regarding data collection.
 * Vungle: A NSInteger wrapped as an NSNumber, symentics as follows:
 *         1 (recommended): Publisher controls the GDPR consent process at the user level, then communicates the user’s choice to Vungle. To do this,   developers can collect the user’s consent using their own mechanism, and then use Vungle APIs to update or query the user’s consent status.
 *         2: Allow Vungle to handle the requirements. Vungle will display a consent dialog before playing an ad for a European user, and will remember the user’s consent or rejection for subsequent ads.
 * IronSource: A BOOL wrapped as an NSNumber, refer to IronSource's offical website for its symentics:https://developers.ironsrc.com/ironsource-mobile/ios/advanced-settings/#step-1.
 * AdColony: A dictionary containing the following entries:
 *        1) A BOOL warpped as NSNumber, which is to inform the AdColony service if GDPR should be considered for the user based on if they are they EU citizens or from EU territories. Default is FALSE. This is for GDPR compliance, see https://www.adcolony.com/gdpr/
 *        2) A NSString, which defines end user's consent for information collected from the user. The IAB Europe Transparency and Consent framework defines standard APIs and formats for communicating between Consent Management Platforms (CMPs) collecting consents from end users and vendors embedded on a website or in a mobile application. It provides a unified interface for a seamless integration where CMPs and vendors do not have to integrate manually with hundreds of partners. This is for GDPR compliance through IAB, see https://github.com/InteractiveAdvertisingBureau/GDPR-Transparency-and-Consent-Framework/blob/master/v1.1%20Implementation%20Guidelines.md#vendors
 * UnityAds: A BOOL wrapped as an NSNumber.

 * Example: {
            kATNetworkNameMintegral:@{@1:@YES, @2:@YES, @3:@NO},
            kATNetworkNameInmobi:@YES,
            kATNetworkNameMopub:@NO,
            kATNetworkNameAdmob:@{kATAdmobConsentStatusKey:@1, kATAdmobUnderAgeKey:@NO},
            kATNetworkNameApplovin:@{kATApplovinConscentStatusKey:@YES, kATApplovinUnderAgeKey:@NO},
            kATNetworkNameTapjoy:@{kATTapjoyConsentValueKey:@"0",kATTapjoyGDPRSubjectionKey:@NO},
            kATNetworkNameChartboost:@NO,
            kATNetworkNameVungle:@1,
            kATNetworkNameIronSource:NO,
            kATNetworkNameAdColony:@{kATAdColonyGDPRConsentStringKey:@"0",kATAdColonyGDPRConsiderationFlagKey:@NO},
            kATNetworkNameUnityAds:@YES
 *          }
 */
@property (nonatomic) NSDictionary *networkConsentInfo;
@property (nonatomic,readonly) ATDataConsentSet dataConsentSet;
@property (nonatomic,readonly) NSDictionary<NSString*, NSString*>* consentStrings;
@property (nonatomic,readonly) NSString *appID;
@property (nonatomic,readonly) NSString *appKey;

/*
 channel & customData has to be set before init
 */
@property (nonatomic) NSString *channel;
@property (nonatomic) NSString *subchannel;
@property (nonatomic) NSDictionary *customData;

@property (nonatomic,readonly,class) NSDate *firstLaunchDate;


/// set custom data for the ad placement
/// @param customData - custom data
/// @param placementID - placement id
- (void)setCustomData:(NSDictionary *)customData
       forPlacementID:(NSString *)placementID;

/// get custom data
- (NSDictionary *)customDataForPlacementID:(NSString *)placementID;

/// get SDK version
- (NSString *)version;

/// set exlude appleid list for sdk to filter offers
- (void)setExludeAppleIdArray:(NSArray *)appleIdArray;

/// get exlude appleid list
- (NSArray *)exludeAppleIdArray;

/// set denied Upload Info list for sdk to Control report
- (void)setDeniedUploadInfoArray:(NSArray *)uploadInfoArray;

/// get denied Upload Info list
- (NSArray *)deniedUploadInfoArray;

/// Determine whether the Denied key is included
/// @param key - key string
- (BOOL)isContainsForDeniedUploadInfoArray:(NSString *)key;

/// set header bidding test mode,only support incoming device idfa.
/// setLogEnabled must be turned on before use
+ (void)setHeaderBiddingTestModeWithDeviceID:(NSString *)idfa;

/// set personalized recommendation state
/// @param state - 1 is to close personalized recommendation, other values or not set to open
- (void)setPersonalizedAdState:(ATPersonalizedAdState)state;

/// get personalized recommendation state
- (ATPersonalizedAdState)getPersonalizedAdState;


@end


