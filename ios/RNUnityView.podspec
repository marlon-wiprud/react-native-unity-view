

require "json"

package = JSON.parse(File.read(File.join(__dir__, "..", "..","..", "package.json")))
version = package['version']

source = { :git => 'https://github.com/marlon-wiprud/react-native-unity-view.git' }

Pod::Spec.new do |s|
  s.name                   = "RNUnityView"
  s.version                = version
  s.summary                = "A general interface to interact with both incoming and outgoing app links."
  s.homepage               = "https://github.com/marlon-wiprud/react-native-unity-view"
  s.documentation_url      = "https://github.com/marlon-wiprud/react-native-unity-view"
  s.license                = package["license"]
  s.author                 = "Marlon Wiprud"
  s.platforms              = { :ios => "9.0", :tvos => "9.2" }
  s.source                 = source
  s.source_files           = "*.{m}"
  s.preserve_paths         = "package.json", "LICENSE", "LICENSE-docs"
  s.header_dir             = "RNUnityView"
  s.source_files  = "ios/**/*.{h,m}"

#   s.dependency "React-Core/RCTLinkingHeaders", version
end
