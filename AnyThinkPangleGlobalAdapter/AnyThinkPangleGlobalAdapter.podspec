#
# Be sure to run `pod lib lint AnyThinkPangleGlobalAdapter.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AnyThinkPangleGlobalAdapter'
  s.version          = '0.1.0'
  s.summary          = 'A short description of AnyThinkPangleGlobalAdapter.'

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/bo/AnyThinkPangleGlobalAdapter'
  s.author = { 'topon' => 'developer@toponad.com' }
  s.license = { :type => "MIT", :file => "AnyThinkiOS/LICENSE" }

  s.ios.deployment_target = '9.0'
  s.static_framework = true
  s.requires_arc = true
  s.pod_target_xcconfig = {
    'OTHER_LDFLAGS' => ['-lObjC'],
    'VALID_ARCHS' => 'x86_64 armv7 armv7s arm64'
  }

  # s.source_files = 'AnyThinkApplovinAdapter/Classes/**/*'
  s.source = {
    # :http => "https://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/SDK_Release/iOS_test/v5.9.32/iOS/iOS-mediation/#{s.name}-#{s.version}.zip",
    # :http => "https://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/SDK_Release/iOS_test/#{s.version}/iOS/iOS-mediation/#{s.name}-#{s.version}.zip",
    :http => "http://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/SDK_Release/iOS_test/v5.9.32/iOS/iOS-mediation/AnyThinkPangleAdapter-5.9.32.zip",
    :http => "http://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/SDK_Release/iOS_test/v5.9.32/iOS/iOS-mediation/AnyThinkTTAdapter-5.9.32.zip",
    :type => 'zip'
  }
  s.vendored_frameworks ='AnyThinkPangleAdapter-5.9.32/AnyThinkPangleAdapter.framework','AnyThinkTTAdapter-5.9.32/AnyThinkTTAdapter.framework'
  # s.vendored_frameworks = "#{s.name}-5.9.32/#{s.name}.framework"
  # s.vendored_frameworks = "#{s.name}-#{s.version}/#{s.name}.framework"

  s.dependency 'AnyThinkiOS','5.9.30'
  s.dependency 'Ads-CN-Beta','4.3.0.2'
  s.dependency 'Ads-CN-Beta/International','4.3.0.2'

end
