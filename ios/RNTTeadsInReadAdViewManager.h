
#if __has_include("RCTBridgeModule.h")
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

#if __has_include("RCTViewManager.h")
#import "RCTViewManager.h"
#else
#import <React/RCTViewManager.h>
#endif

#import <TeadsSDK/TeadsSDK.h>


@interface RNTTeadsInReadAdViewManager : RCTViewManager

@property (nonatomic) TFAInReadAdView* view;
@property (nonatomic) NSString* pageUrl;
@property (nonatomic) Boolean enableDebug;
@property (nonatomic) Boolean enableValidation;
@end

#pragma mark - TFAInReadAdView+AssociatedObject

@interface TFAInReadAdView (AssociatedObject)

@property (nonatomic, copy) RCTBubblingEventBlock onTeadsAdClose;
@property (nonatomic, copy) RCTBubblingEventBlock onTeadsAdLoaded;
@property (nonatomic, copy) RCTBubblingEventBlock onTeadsAdError;
@property (nonatomic, copy) RCTBubblingEventBlock onTeadsAdFailedToLoad;
@property (nonatomic, copy) RCTBubblingEventBlock onTeadsAdDisplayed;

@end
