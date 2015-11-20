
Pod::Spec.new do |s|


  s.name         = "BFPay"
  s.version      = "0.0.3"
  s.summary      = "BF支付."

  s.description  = <<-DESC
  贝付支付SDK
                   DESC

  s.homepage     = "https://github.com/cyqluowang/BFPay"
  
  s.license      = { :type => "MIT", :file => "LICENSE" }

  s.author             = { "陈玉琪" => "yq.chen@renrunkeji.com" }


  s.source       = { :git => "https://github.com/cyqluowang/BFPay.git", :tag => s.version  }

  s.source_files  = "Core", "Core/**/*.{h,m}"
  s.vendored_libraries = 'Core/*.a'
  s.resources = "Core/BFResource.bundle"
end
