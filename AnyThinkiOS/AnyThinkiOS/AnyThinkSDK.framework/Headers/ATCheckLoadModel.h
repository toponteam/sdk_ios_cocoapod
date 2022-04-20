//
//  ATCheckLoadModel.h
//  AnyThinkSDK
//
//  Created by Topon on 9/29/20.
//  Copyright © 2020 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ATCheckLoadModel : NSObject

/// whether the current ad slot is loading an ad
@property(nonatomic) BOOL isLoading;

/// whether there is an ad that can be displayed
@property(nonatomic) BOOL isReady;

/// Get the ad cache information with the highest priority of the current ad slot
@property (nonatomic,readwrite) NSDictionary *adOfferInfo;

@end

NS_ASSUME_NONNULL_END
