#
# Be sure to run `pod lib lint AnyThinkPangleGlobalAdapter.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AnyThinkPangleGlobalAdapter'
  s.version          = '5.9.32'
  s.summary          = '#{s.name} used for mediation with the TopOn SDK'

  s.description      = <<-DESC
     TopOn SDK for developer
                       DESC

  s.homepage = 'https://github.com/CocoaPods/Specs/search?o=desc&q=#{s.name}&s=indexed'
  s.author = { 'topon' => 'developer@toponad.com' }
  s.license = { :type => "MIT", :file => "#{s.name}-#{s.version}/LICENSE" }

  s.ios.deployment_target = '9.0'
  s.static_framework = true
  s.requires_arc = true
  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => ['-lObjC'],
    'VALID_ARCHS' => 'x86_64 armv7 armv7s arm64'
  }

  # s.source_files = 'AnyThinkApplovinAdapter/Classes/**/*'
  s.source = {
    :http => "http://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/Temp/v5.9.32/iOS/iOS-mediation/AnyThinkPangleAdapter-#{s.version}.zip",
    :http => "http://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/Temp/v5.9.32/iOS/iOS-mediation/AnyThinkTTAdapter-#{s.version}.zip",
    :type => 'zip'
  }
  s.vendored_frameworks ='AnyThinkPangleAdapter-#{s.version}/AnyThinkPangleAdapter.framework','AnyThinkTTAdapter-#{s.version}/AnyThinkTTAdapter.framework'

  s.dependency 'AnyThinkiOS','5.9.30'
  s.dependency 'Ads-CN-Beta','4.3.0.2'
  s.dependency 'Ads-CN-Beta/International','4.3.0.2'

end
