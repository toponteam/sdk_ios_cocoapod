Pod::Spec.new do |spec|
  spec.name         = "AnyThinkiOS"
  spec.version      = "5.8.13"
  spec.summary      = "A short description of AnyThink SDK for iOS."
  spec.description  = <<-DESC
            TopOn SDK for developer
                   DESC
  spec.homepage     = "https://github.com/anythinkteam/sdk_ios_cocoapod"
  spec.license      = { :type => "MIT", :file => "AnyThinkiOS/LICENSE" }
  spec.author             = { "topon" => "developer@toponad.com" }
  spec.source       = { :http => "https://sdk-release.toponad.com/SDK_Release/v#{spec.version}/iOS/AnyThinkiOS.zip" }
  spec.ios.deployment_target = '9.0'
  spec.static_framework = true
  spec.requires_arc = true
  spec.frameworks = 'SystemConfiguration', 'CoreGraphics','Foundation','UIKit'
  
  spec.pod_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.libraries = 'c++', 'z', 'sqlite3', 'xml2', 'resolv'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 armv7s arm64' }
  spec.resource = 'AnyThinkiOS/LICENSE'
  spec.default_subspecs = 'AnyThinkSDK'


  spec.subspec 'AnyThinkSDK' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThink{Banner,Splash,SDK,RewardedVideo,Interstitial,Native}.framework'
    ss.resource = 'AnyThinkiOS/AnyThinkSDK.bundle'
  end
  
    spec.subspec 'AnyThinkApplovinAdapter' do |ss|
    ss.dependency 'AppLovinSDK','10.3.7'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkApplovinAdapter.framework'
  end
  
    spec.subspec 'AnyThinkGDTAdapter' do |ss|
    ss.dependency 'GDTMobSDK','4.13.50'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkGDTAdapter.framework'
  end
  
    spec.subspec 'AnyThinkPangleAdapter' do |ss|
    ss.dependency 'Ads-Global-Beta','4.3.0.2'
    # ss.dependency 'Ads-Global','4.1.0.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkPangleAdapter.framework'
  end

    spec.subspec 'AnyThinkTTAdapter' do |ss|
    ss.dependency 'Ads-CN-Beta','4.3.0.2'
    # ss.dependency 'Ads-CN','4.1.0.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkTTAdapter.framework'
  end

    spec.subspec 'AnyThinkUnityAdsAdapter' do |ss|
    ss.dependency 'UnityAds','4.0.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkUnityAdsAdapter.framework'
  end
  
    spec.subspec 'AnyThinkSigmobAdapter' do |ss|
    ss.dependency 'SigmobAd-iOS','3.5.3'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkSigmobAdapter.framework'
  end
  
    spec.subspec 'AnyThinkKSAdapter' do |ss|
    ss.dependency 'KSAdSDK','3.3.21'
    ss.dependency 'SDWebImage'
    ss.dependency 'MJExtension'
    ss.dependency 'AFNetworking'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkKuaiShouAdapter.framework'
  end
  
    spec.subspec 'AnyThinkAdColonyAdapter' do |ss|
    ss.dependency 'AdColony','4.7.2'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkAdColonyAdapter.framework'
  end

    spec.subspec 'AnyThinkTapjoyAdapter' do |ss|
    ss.dependency 'TapjoySDK','12.9.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkTapjoyAdapter.framework'
  end
  
    spec.subspec 'AnyThinkBaiduAdapter' do |ss|
    ss.dependency 'BaiduMobAdSDK','4.85'
    # ss.dependency 'AnyThinkBaiduSDK','4.82'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkBaiduAdapter.framework'
  end
  
    spec.subspec 'AnyThinkNendAdapter' do |ss|
    ss.dependency 'NendSDK_iOS','7.0.6'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkNendAdapter.framework'
  end
  
    spec.subspec 'AnyThinkMaioAdapter' do |ss|
    ss.dependency 'MaioSDK','1.5.8'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkMaioAdapter.framework'
  end
  
    spec.subspec 'AnyThinkMyTargetAdapter' do |ss|
    ss.dependency 'myTargetSDK','5.13.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkMyTargetAdapter.framework'
  end
  
    spec.subspec 'AnyThinkFyberAdapter' do |ss|
    ss.dependency 'Fyber_Marketplace_SDK','8.1.1'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkFyberAdapter.framework'
  end

    spec.subspec 'AnyThinkChartboostAdapter' do |ss|
    ss.dependency 'ChartboostSDK','8.4.2'
    ss.dependency 'ChartboostHelium','2.3.1'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkChartboostAdapter.framework'
  end
  
    spec.subspec 'AnyThinkStartAppAdapter' do |ss|
    ss.dependency 'StartAppSDK','4.7.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkStartAppAdapter.framework'
  end

    spec.subspec 'AnyThinkIronSourceAdapter' do |ss|
    ss.dependency 'IronSourceSDK','7.2.0.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkIronSourceAdapter.framework'
  end

    spec.subspec 'AnyThinkInmobiAdapter' do |ss|
    ss.dependency 'InMobiSDK/Core','10.0.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkInmobiAdapter.framework'
  end
  
    spec.subspec 'AnyThinkMintegralAdapter' do |ss|
    ss.dependency 'MintegralAdSDK/All','7.1.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkMintegralAdapter.framework'
  end
  
    spec.subspec 'AnyThinkAdmobAdapter' do |ss|
    ss.dependency 'Google-Mobile-Ads-SDK','9.0.0'
    ss.dependency 'PersonalizedAdConsent'
    ss.ios.deployment_target = '10.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkAdmobAdapter.framework'
  end
  
    spec.subspec 'AnyThinkFacebookAdapter' do |ss|
    ss.dependency 'FBAudienceNetwork','6.9.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkFacebookAdapter.framework'
  end
  
    spec.subspec 'AnyThinkMopubAdapter' do |ss|
    ss.dependency 'mopub-ios-sdk','5.18.0'
    ss.ios.deployment_target = '10.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkMopubAdapter.framework'
  end
  
    spec.subspec 'AnyThinkKidozAdapter' do |ss|
    ss.dependency 'AnyThinkKidozSDK','1.3.6'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkKidozAdapter.framework'
  end

    spec.subspec 'AnyThinkOguryAdapter' do |ss|
    ss.dependency 'OguryAds','2.4.1'
    ss.ios.deployment_target = '10.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkOguryAdapter.framework'
  end

    spec.subspec 'AnyThinkVungleAdapter' do |ss|
    ss.dependency 'VungleSDK-iOS','6.10.6'
    ss.ios.deployment_target = '10.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkVungleAdapter.framework'
  end
 
    spec.subspec 'AnyThinkKlevinAdapter' do |ss|
    ss.dependency 'AnyThinkKlevinSDK','2.4.1'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkKlevinAdapter.framework'
  end

    spec.subspec 'AnyThinkPangleGlobalAdapter' do |ss|
    ss.dependency 'Ads-CN-Beta','4.3.0.2'
    ss.dependency 'Ads-CN-Beta/International','4.3.0.2'
    # ss.dependency 'Ads-CN','3.9.0.4'
    # ss.dependency 'Ads-CN/International','3.9.0.4'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'AnyThinkiOS/AnyThinkSDK'
    ss.vendored_frameworks = 'AnyThinkiOS/AnyThinkPangleAdapter.framework','AnyThinkiOS/AnyThinkTTAdapter.framework'
  end

end
