
Pod::Spec.new do |s|


  s.name         = "BFPay"
  s.version      = "0.0.5"
  s.summary      = "BF支付."
  s.requires_arc = true
  s.description  = <<-DESC
  贝付支付真机SDK，模拟器的话跑不了
                   DESC

  s.homepage     = "https://github.com/cyqluowang/BFPay"
  
  s.license      = { :type => "MIT", :file => "LICENSE" }

  s.author             = { "陈玉琪" => "yq.chen@renrunkeji.com" }


  s.source       = { :git => "https://github.com/cyqluowang/BFPay.git", :tag => s.version  }

  s.source_files  = "Core", "Core/**/*.{h,m}"
  s.vendored_libraries = 'Core/*.a'
  s.resources = "Core/BFResource.bundle"
  s.frameworks = 'SystemConfiguration', 'Security', 'CFNetwork'
end
