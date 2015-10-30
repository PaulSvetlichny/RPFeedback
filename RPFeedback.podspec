Pod::Spec.new do |s|

# 1
s.platform = :ios
s.ios.deployment_target = '8.0'
s.name = "RPFeedback"
s.summary = "RPFeedback lets ReviewPush companies submit feedback at a company level."
s.requires_arc = true

# 2
s.version = "0.1.0"

# 3
s.license = { :type => "MIT", :file => "LICENSE" }

# 4 - Replace with your name and e-mail address
s.author = { "Michael Orcutt" => "michaeltorcutt@gmail.com" }

# For example,
# s.author = { "Joshua Greene" => "jrg.developer@gmail.com" }


# 5 - Replace this URL with your own Github page's URL (from the address bar)
s.homepage = "http://reviewpush.com"

# For example,
# s.homepage = "https://github.com/JRG-Developer/RPFeedback"


# 6 - Replace this URL with your own Git URL from "Quick Setup"
s.source = { :git => "https://github.com/mtorcutt/RPFeedback.git", :tag => "#{s.version}"}

# For example,
# s.source = { :git => "https://github.com/JRG-Developer/RPFeedback.git", :tag => "#{s.version}"}


# 7
s.framework = "UIKit"
s.dependency 'Alamofire', '~> 1.1'
s.dependency 'MBProgressHUD', '~> 0.9.0'

# 8
s.source_files = "RPFeedback/**/*.{swift}"

# 9
s.resources = "RPFeedback/**/*.{png,jpeg,jpg,storyboard,xib}"
end