//
//  ATInterstitialAdapter.h
//  AnyThinkInterstitial
//
//  Created by Martin Lau on 21/09/2018.
//  Copyright © 2018 Martin Lau. All rights reserved.
//

#ifndef ATInterstitialAdapter_h
#define ATInterstitialAdapter_h

#import <AnyThinkSDK/AnyThinkSDK.h>
#import "ATInterstitialDelegate.h"
#import "ATInterstitial.h"
#import <UIKit/UIKit.h>

@protocol ATInterstitialAdapter<ATAdAdapter>

@optional

/// check if network ads is ready
/// @param customObject - custom ad object
/// @param info - dictionary from server
+ (BOOL)adReadyWithCustomObject:(id)customObject
                           info:(NSDictionary *)info;


/// show interstitial ad
/// @param interstitial - interstitial Object
/// @param viewController - current ViewController
/// @param delegate - delegate object
+ (void)showInterstitial:(ATInterstitial *)interstitial
        inViewController:(UIViewController *)viewController
                delegate:(id<ATInterstitialDelegate>)delegate;
@end

#endif /* ATInterstitialAdapter_h */
