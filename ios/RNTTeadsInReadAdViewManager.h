#import <React/RCTBridgeModule.h>
#import <React/RCTViewManager.h>

#import <TeadsSDK/TeadsSDK.h>

@interface RNTTeadsInReadAdViewManager : RCTViewManager
@end

#pragma mark - TFAInReadAdView+AssociatedObject

@interface TFAInReadAdView (AssociatedObject)

@property (nonatomic, copy) RCTBubblingEventBlock onAdClose;
@property (nonatomic, copy) RCTBubblingEventBlock onDidReceiveAd;
@property (nonatomic, copy) RCTBubblingEventBlock onAdError;
@property (nonatomic, copy) RCTBubblingEventBlock onAdDidFail;

@end
