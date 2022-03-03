//
//  OFMBaseAdAdapter.h
//  OfmSDK
//
//  Created by Topon on 1/12/21.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OFMAdCustomEvent.h"
#import "OFMAdapterBaseDelegate.h"
#import "OFMNativeAdConfiguration.h"
#import "OFMPlacementModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface OFMBaseAdAdapter : NSObject
@property(nonatomic, readonly) OFMPlacementModel *placementModel;
@property(nonatomic, readonly) NSDictionary *serverInfo;
@property(nonatomic, readonly) NSDictionary *localInfo;
@property(nonatomic, readwrite) OFMAdCustomEvent *customEvent;

-(instancetype) initWithNetworkForPlacementModel:(OFMPlacementModel *) placementModel serverInfo:(NSDictionary *)serverInfo extra:(NSDictionary *)extra;

-(BOOL)adReadyWithPlacementID:(NSString*) ofmPlacementID serverInfo:(NSDictionary*)serverInfo;

-(void) loadADWithPlacementID:(NSString*) ofmPlacementID serverInfo:(NSDictionary *)serverInfo extra:(NSDictionary *)extra customData:(NSDictionary*)customData delegate:(id<OFMAdapterBaseDelegate>)delegate;

- (void)showADWithPlacementID:(NSString*)ofmPlacementID scene:(NSString *)scene inViewController:(UIViewController*)viewController delegate:(id<OFMAdapterBaseDelegate>)delegate;
// for splash
- (void)showSplashWithPlacementID:(NSString*)placementID window:(UIWindow*)window windowScene:(UIWindowScene *)windowScene delegate:(id<OFMAdapterBaseDelegate>)delegate API_AVAILABLE(ios(13.0));

-(nullable UIView*)retrieveBannerViewForPlacementInfo:(NSDictionary*)serverInfo viewController:(UIViewController*)viewController delegate:(id<OFMAdapterBaseDelegate>)delegate;

-(nullable UIView*)retrieveNativeAdViewForPlacementInfo:(NSDictionary*)serverInfo configuration:(OFMNativeAdConfiguration*)configuration  viewController:(UIViewController*)viewController delegate:(id<OFMAdapterBaseDelegate>)delegate;


@end

NS_ASSUME_NONNULL_END
