#import "RNTTeadsInReadAdViewManager.h"

@interface RNTTeadsInReadAdViewManager() <TFAAdDelegate>

@end

@implementation RNTTeadsInReadAdViewManager

@synthesize view;
@synthesize pageUrl;
@synthesize enableDebug;
@synthesize enableValidation;

RCT_EXPORT_MODULE(RNTTeadsInReadAdViewManager)

RCT_EXPORT_VIEW_PROPERTY(onTeadsAdClose, RCTBubblingEventBlock);
RCT_EXPORT_VIEW_PROPERTY(onTeadsAdError, RCTBubblingEventBlock);
RCT_EXPORT_VIEW_PROPERTY(onTeadsAdLoaded, RCTBubblingEventBlock);
RCT_EXPORT_VIEW_PROPERTY(onTeadsAdFailedToLoad, RCTBubblingEventBlock);
RCT_EXPORT_VIEW_PROPERTY(onTeadsAdDisplayed, RCTBubblingEventBlock);

RCT_CUSTOM_VIEW_PROPERTY(enableDebug, BOOL, TFAInReadAdView) {
  self.enableDebug = enableDebug;
  NSLog(@"Setting enable debug");
};

RCT_CUSTOM_VIEW_PROPERTY(enableValidation, BOOL, TFAInReadAdView) {
  self.enableValidation = enableValidation;
  NSLog(@"Setting enable validation");
};
RCT_CUSTOM_VIEW_PROPERTY(pageUrl, NSString, TFAInReadAdView) {
  self.pageUrl = pageUrl;
  NSLog(@"Setting pageUrl");
};
RCT_CUSTOM_VIEW_PROPERTY(pid, NSInteger, TFAInReadAdView) {
    [view setPid:[RCTConvert NSInteger:json]];

  TeadsAdSettings *teadsSettings = [[TeadsAdSettings alloc] initWithBuild:^(TeadsAdSettings * _Nonnull settings) {
      [settings enableDebug];
      //[settings enableValidationMode];
    NSString *page = @"https://actu17.fr";
        [settings pageUrl:(NSString * _Nonnull)page];
    //  [settings pageUrl:(NSString * _Nonnull)pageUrl];

    NSString *subjectToGDPR = @"0";
    NSString *consent = @"Test";

    [settings userConsentWithSubjectToGDPR:subjectToGDPR consent:consent];
  }];
  [view loadWithTeadsAdSettings:teadsSettings];
}

- (TFAInReadAdView *)view {
    TFAInReadAdView *view = [[TFAInReadAdView alloc] initWithPid:0
                                                     andDelegate:self];
    return view;
}

- (void)viewDidLoad
{
  NSLog(@"Teads did load");
  NSLog(@"%ld", (long)view.pid);
  NSLog(@"%hhu", self.enableValidation);
  NSLog(@"%@", self.pageUrl);
    TeadsAdSettings *teadsSettings = [[TeadsAdSettings alloc] initWithBuild:^(TeadsAdSettings * _Nonnull settings) {
      if (enableDebug) {
        [settings enableDebug];
      }
      if (enableValidation) {
        [settings enableValidationMode];
      }
      //if (pageUrl) {
      //  [settings pageUrl:(NSString * _Nonnull)pageUrl];
      //}

      NSString *subjectToGDPR = @"Sujet RGPD";
      NSString *consent = @"Test";

      [settings userConsentWithSubjectToGDPR:subjectToGDPR consent:consent];
    }];
    [view loadWithTeadsAdSettings:teadsSettings];
}

#pragma mark - TFAAdDelegate

- (void)adClose:(TFAInReadAdView * _Nonnull)ad userAction:(BOOL)userAction {
    if (!ad.onTeadsAdClose) {
        return;
    }

    ad.onTeadsAdClose(nil);
}

- (void)adError:(TFAInReadAdView * _Nonnull)ad errorMessage:(NSString * _Nonnull)errorMessage {
    if (!ad.onTeadsAdError) {
        return;
    }

    ad.onTeadsAdError(@{@"errorMessage" : errorMessage});
}

- (void)didFailToReceiveAd:(TFAInReadAdView * _Nonnull)ad adFailReason:(AdFailReason * _Nonnull)adFailReason {
    if (!ad.onTeadsAdFailedToLoad) {
        return;
    }

    ad.onTeadsAdFailedToLoad(@{@"errorCode" : @(adFailReason.errorCode),
                     @"errorMessage" : adFailReason.errorMessage});
}

- (void)didReceiveAd:(TFAInReadAdView * _Nonnull)ad adRatio:(CGFloat)adRatio {
    if (!ad.onTeadsAdLoaded) {
        return;
    }

    ad.onTeadsAdLoaded(@{@"adRatio" : @(adRatio)});
}

@end

#pragma mark - TFAInReadAdView+AssociatedObject

#import <objc/runtime.h>

@implementation TFAInReadAdView (AssociatedObject)
@dynamic onTeadsAdClose;

#pragma mark OnTeadsAdClose

- (void)setOnTeadsAdClose:(RCTBubblingEventBlock)object {
    objc_setAssociatedObject(self, @selector(onTeadsAdClose), object, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (RCTBubblingEventBlock)onTeadsAdClose {
    return objc_getAssociatedObject(self, @selector(onTeadsAdClose));
}

#pragma mark OnTeadsAdLoaded

- (void)setOnTeadsAdLoaded:(RCTBubblingEventBlock)object {
    objc_setAssociatedObject(self, @selector(onTeadsAdLoaded), object, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (RCTBubblingEventBlock)onTeadsAdLoaded {
    return objc_getAssociatedObject(self, @selector(onTeadsAdLoaded));
}

#pragma mark OnTeadsAdError

- (void)setOnAdError:(RCTBubblingEventBlock)object {
    objc_setAssociatedObject(self, @selector(onTeadsAdError), object, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (RCTBubblingEventBlock)onTeadsAdError {
    return objc_getAssociatedObject(self, @selector(onTeadsAdError));
}

#pragma mark OnTeadsAdFailedToLoad

- (void)setOnTeadsAdFailedToLoad:(RCTBubblingEventBlock)object {
    objc_setAssociatedObject(self, @selector(onTeadsAdFailedToLoad), object, OBJC_ASSOCIATION_COPY_NONATOMIC);
}

- (RCTBubblingEventBlock)onTeadsAdFailedToLoad {
    return objc_getAssociatedObject(self, @selector(onTeadsAdFailedToLoad));
}

@end
