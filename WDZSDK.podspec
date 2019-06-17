#
# Be sure to run `pod lib lint WDZSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = 'WDZSDK'
    s.version          = '0.1.0'
    s.summary          = '万店掌开发工具包'
    
    # This description is used to generate tags and improve search results.
    #   * Think: What does it do? Why did you write it? What is the focus?
    #   * Try to keep it short, snappy and to the point.
    #   * Write the description between the DESC delimiters below.
    #   * Finally, don't worry about the indent, CocoaPods strips it!
    
    s.description      = <<-DESC
    TODO: Add long description of the pod here.
    DESC
    
    s.homepage         = 'https://github.com/DanielOYC/'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { 'DanielOYC' => '775350532@qq.com' }
    s.source           = { :git => 'https://github.com/DanielOYC/WDZSDK.git', :tag => s.version.to_s }
    #s.source           = { :http => 'http://danieloyc.oss-cn-beijing.aliyuncs.com/WDZSDKZip.zip'}
    
    s.ios.deployment_target = '8.0'
    
    s.source_files = 'WDZSDK/Classes/MobileSDK.h','WDZSDK/Classes/headers/*'
    s.resources = 'WDZSDK/Assets/*'
    s.ios.vendored_libraries = 'WDZSDK/Classes/libWDZVideoSDK.a','WDZSDK/Classes/libWDZDevelopSDK.a'
    
    #s.source_files = 'WDZSDKZip/headers/*'
    #s.resources = 'WDZSDKZip/bundles/*'
    #s.ios.vendored_libraries = 'WDZSDKZip/libWDZVideoSDK.a','WDZSDKZip/libWDZDevelopSDK.a'
    
    s.frameworks = 'ExternalAccessory','GLKit','Security','CoreTelephony','SystemConfiguration','CoreLocation','WebKit','AddressBook','UserNotifications','MessageUI','CoreGraphics','UIKit','Foundation','QuartzCore','CoreData','AudioToolbox','OpenGLES'
    
    s.libraries = 'c++','z','sqlite3','bz2','iconv'
    
    s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
    s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
    
    s.dependency 'AFNetworking'
    s.dependency 'AliyunOSSiOS'
    s.dependency 'FMDB'
    s.dependency 'FSCalendar'
    s.dependency 'HPGrowingTextView'
    s.dependency 'IQKeyboardManager'
    s.dependency 'KVOController'
    s.dependency 'MBProgressHUD'
    s.dependency 'MJExtension'
    s.dependency 'PLPlayerKit'
    s.dependency 'SDWebImage'
    s.dependency 'TPKeyboardAvoiding'
    s.dependency 'TZImagePickerController'
    s.dependency 'UIActivityIndicator-for-SDWebImage'
    s.dependency 'YYCategories'
    s.dependency 'YYImage'
    s.dependency 'YYModel'
    s.dependency 'libPhoneNumber-iOS'
    s.dependency 'WDZMapManager'
    
end
