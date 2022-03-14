//
//  OFMNativeAdConfiguration.h
//  OfmSDK
//
//  Created by stephen on 16/1/2021.
//  Copyright © 2021 AnyThink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OFMNativeAdDelegate.h"

extern NSString *const kOFMNativeAdConfigurationContextAdOptionsViewFrameKey;//CGRect wrapped as NSValue, supported by facebook
extern NSString *const kOFMNativeAdConfigurationContextAdLogoViewFrameKey;//CGRect wrapped as NSValue, supported by gdt&baidu, defaults to top-left corner
extern NSString *const kOFMNativeAdConfigurationContextNetworkLogoViewFrameKey;//CGRect wrapped as NSValue, support by baidu, defaults to bottom-right corner
@protocol OFMNativeAdDelegate;
@interface OFMNativeAdConfiguration : NSObject
/**
 You can store some extra network specific context info in this dictionary.
 */
@property(nonatomic) NSDictionary *context;
@property(nonatomic) Class renderingViewClass;
@property(nonatomic) CGRect ADFrame;
@property(nonatomic) CGRect mediaViewFrame;
@property(nonatomic, weak) UIViewController *rootViewController;
@property(nonatomic, weak) id delegate;
@end
