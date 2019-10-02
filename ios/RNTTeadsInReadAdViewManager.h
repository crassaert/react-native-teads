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


@interface RCT_EXTERN_MODULE(CalendarManager, NSObject)

RCT_EXTERN_METHOD(pid:(NSInteger *)pid onAdClose:(RCTBubblingEventBlock)event onDidReceiveAd:(RCTBubblingEventBlock)event)

@end
