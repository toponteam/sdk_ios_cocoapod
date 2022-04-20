#
# Be sure to run `pod lib lint AnyThinkSigmobAdapter.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'AnyThinkSigmobAdapter'
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

  # s.source_files = 'AnyThinkSigmobAdapter/Classes/**/*'
  s.source = {
    :http => "https://topon-sdk-release.oss-cn-hangzhou.aliyuncs.com/Temp/v5.9.32/iOS/iOS-mediation/#{s.name}-#{s.version}.zip",
    :type => 'zip'
  }
  s.vendored_frameworks = "#{s.name}-#{s.version}/#{s.name}.framework"

  s.dependency 'AnyThinkiOS','5.9.30'
  s.dependency 'SigmobAd-iOS','3.5.3'

end
