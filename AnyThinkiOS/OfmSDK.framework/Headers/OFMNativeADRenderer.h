//
//  OFMNativeADRenderer.h
//  OfmSDK
//
//  Created by stephen on 18/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AnyThinkNative/AnyThinkNative.h>
#import "OFMPlacementModel.h"
#import "OFMNativeAdConfiguration.h"

NS_ASSUME_NONNULL_BEGIN

@interface OFMNativeADRenderer : NSObject

@property(nonatomic, readwrite) OFMNativeAdConfiguration *configuration;
@property(nonatomic, readwrite) ATNativeADView *nativeAdView;
@property(nonatomic, readonly) NSDictionary *assets;

- (instancetype)initWithOFMConfiguration:(OFMNativeAdConfiguration *)configuration placementModel:(OFMPlacementModel *)placementModel assets:(NSDictionary*)assets;
/**
 Might return nil.
 */
-(__kindof UIView*)createMediaView;

/**
 Render the assets onto the the associated AD view. Adopter implements this method in a network-specific way.
 */
-(void) renderOfferWithNativeAdView:(ATNativeADView*) nativeAdView;

@end

NS_ASSUME_NONNULL_END
