
#if __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import <React/RCTBridgeModule.h>
#endif

#import "./Frameworks/DTBiOSSDK.framework/Headers/DTBiOSSDK.h"
#import "./Frameworks/DTBiOSSDK.framework/Headers/DTBAdCallback.h"

@interface RNAmazonTAMInterstitial : NSObject <RCTBridgeModule, DTBAdCallback>

@end
  
