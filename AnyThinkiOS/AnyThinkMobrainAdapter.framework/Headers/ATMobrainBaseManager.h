//
//  ATMobrainBaseManager.h
//  AnyThinkMobrainAdapter
//
//  Created by Topon on 2/1/21.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import <AnyThinkSDK/AnyThinkSDK.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Mobrain
// kATSplashExtraMobrainAdnTypeKey Obsolete, please use kATSplashExtraMobrainAdnNameKey to pass in, the name of adn, please use the following values'pangle','baidu','gdt','ks', other values may cause the advertisement to fail to load
extern NSString *const kATSplashExtraMobrainAdnNameKey;
extern NSString *const kATSplashExtraMobrainAppKeyKey;
extern NSString *const kATSplashExtraMobrainAppIDKey;
extern NSString *const kATSplashExtraMobrainRIDKey;

/**
 optional
 Set whether to mute the video，YES = mute，NO = unMute
 PS:
 1、RV：only  GDT，Klevin，MTG support setting mute
 2、IV：only  GDT support setting mute
 3、Native video：only  GDT，Admob，Baidu，MTG support setting mute
 */
extern NSString *const kATExtraMobrainMutedKey;

typedef NS_ENUM(NSUInteger, ATBUAdSDKTerritory) {
    BUAdSDKTerritory_CN = 1,
    BUAdSDKTerritory_NO_CN,
};

@interface ATMobrainBaseManager : ATNetworkBaseManager

@end

@protocol ATABUPanglePersonaliseConfigAdapter <NSObject>
+ (void)configAdapterWithBlock:(void(^)(void))block;
@end

@protocol ATBUAdSDKConfiguration <NSObject>
+ (instancetype)configuration;
@property (nonatomic, assign) ATBUAdSDKTerritory territory;
@property (nonatomic, strong) NSNumber *debugLog;

@end

NS_ASSUME_NONNULL_END
