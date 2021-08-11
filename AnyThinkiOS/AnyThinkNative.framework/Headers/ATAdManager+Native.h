//
//  ATAdManager+Native.h
//  AnyThinkNative
//
//  Created by Martin Lau on 07/07/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#import <AnyThinkSDK/AnyThinkSDK.h>

//Currently only GDT supports these two keys.
extern NSString *const kATExtraInfoNativeAdSizeKey;//the value has to be an NSValue wrapped CGSize object.
extern NSString *const kATExtraInfoNativeAdTypeKey;//The value is requried for GDT native ad and has to be an NSNumber warpped ATGDTNativeAdType(NSInteger); Pass @(ATGDTNativeAdTypeTemplate)(@1) for template ads and @(ATGDTNativeAdTypeSelfRendering)(@2) for self rendering ads.
//Following keys are supported by nend only
extern NSString *const kATExtraInfoNativeAdUserIDKey;
extern NSString *const kATExtraInfoNativeAdMediationNameKey;
extern NSString *const kATExtraInfoNaitveAdUserFeatureKey;
extern NSString *const kATExtraInfoNativeAdLocationEnabledFlagKey;
typedef NS_ENUM(NSInteger, ATGDTNativeAdType) {
    ATGDTNativeAdTypeTemplate = 1,
    ATGDTNativeAdTypeSelfRendering = 2
};
@class ATNativeADView;
@class ATNativeADConfiguration;
@interface ATAdManager (Native)
-(BOOL) nativeAdReadyForPlacementID:(NSString*)placementID;
/**
 * This method uses the renderingViewClass you specify in the configuration to create an instance and:
 1) returns it(for networks Facebook, Inmobi, Mintegral, Admob, Flurry, Applovin) or
 2) adds it to a superView and returns the super view instead(for network Mopub).
 * To retrieve the instance of the class you specify as the rendering view class, cast the returned view to ATNativeADView and call its embededAdView method(the view returned might not be of class ATNativeADView).
 */
- (__kindof UIView*) retriveAdViewWithPlacementID:(NSString*)placementID configuration:(ATNativeADConfiguration*)configuration;
- (__kindof UIView*) retriveAdViewWithPlacementID:(NSString*)placementID configuration:(ATNativeADConfiguration*)configuration scene:(NSString *)scene;

- (ATCheckLoadModel*)checkNativeLoadStatusForPlacementID:(NSString*)placementID;

// v5.7.53+
- (NSArray<NSDictionary *> *)getNativeValidAdsForPlacementID:(NSString *)placementID;
@end
