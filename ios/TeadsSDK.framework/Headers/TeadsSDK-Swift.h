// Generated by Apple Swift version 5.1 effective-4.2 (swiftlang-1100.0.270.13 clang-1100.0.33.7)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TeadsSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM(NSInteger, AdErrorCode, closed) {
  AdErrorCodeErrorNoSlot = 1,
  AdErrorCodeErrorNetwork = 2,
  AdErrorCodeErrorNotFilled = 3,
  AdErrorCodeErrorBadResponse = 4,
  AdErrorCodeErrorVastError = 5,
  AdErrorCodeErrorUserIdMissing = 6,
  AdErrorCodeErrorInternal = 7,
  AdErrorCodeDisabledApp = 8,
};


SWIFT_CLASS("_TtC8TeadsSDK12AdFailReason")
@interface AdFailReason : NSObject
/// Error code
@property (nonatomic) enum AdErrorCode errorCode;
/// String that describes the error reason
@property (nonatomic, copy) NSString * _Nonnull errorMessage;
- (nonnull instancetype)initWithErrorCode:(enum AdErrorCode)errorCode errorMessage:(NSString * _Nonnull)errorMessage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, CommanderWebViewState, closed) {
  CommanderWebViewStateError = -1,
  CommanderWebViewStateIdle = 0,
  CommanderWebViewStateLoading = 1,
  CommanderWebViewStateLoaded = 2,
  CommanderWebViewStateEngineLoaded = 3,
  CommanderWebViewStateCommanderReady = 4,
};





@class TFAAdView;
enum TeadsAdPlaybackState : NSInteger;

SWIFT_PROTOCOL("_TtP8TeadsSDK13TFAAdDelegate_")
@protocol TFAAdDelegate
/// Called when you get an ad
/// \param ad The teadsAd object
///
/// \param adRatio ratio of the ad
///
- (void)didReceiveAd:(TFAAdView * _Nonnull)ad adRatio:(CGFloat)adRatio;
/// Called when you did not get and ad
/// \param ad The teadsAd object
///
/// \param adFailReason AdFailReason object that contains an error code and an error message
///
- (void)didFailToReceiveAd:(TFAAdView * _Nonnull)ad adFailReason:(AdFailReason * _Nonnull)adFailReason;
/// Called when the ad should be closed
/// \param ad The teadsAd object
///
/// \param userAction is the close an action from the user or an automatic one
///
- (void)adClose:(TFAAdView * _Nonnull)ad userAction:(BOOL)userAction;
/// Called when the teads SDK encounter an error
/// \param ad The teadsAd object
///
/// \param errorMessage error message related to the error
///
- (void)adError:(TFAAdView * _Nonnull)ad errorMessage:(NSString * _Nonnull)errorMessage;
@optional
/// Called when the modal browser is open
/// \param ad The teadsAd object
///
- (void)adBrowserDidOpen:(TFAAdView * _Nonnull)ad;
/// Called when the modal browser is closed
/// \param ad The teadsAd object
///
- (void)adBrowserDidClose:(TFAAdView * _Nonnull)ad;
/// Called when ad is shown in fullscreen
/// \param ad The teadsAd object
///
- (void)adDidOpenFullscreen:(TFAAdView * _Nonnull)ad;
/// Called when ad leaves the fullscreen mode
/// \param ad The teadsAd object
///
- (void)adDidCloseFullscreen:(TFAAdView * _Nonnull)ad;
/// Called when ad start
/// \param ad The teadsAd object
///
- (void)adPlaybackChange:(TFAAdView * _Nonnull)ad state:(enum TeadsAdPlaybackState)state;
/// Called when ad changes volume state
/// @deprecated since 4.1.x please use TFASoundDelegate instead
/// \param ad The teadsAd object
///
/// \param muted true if the sound is off false otherwise
///
- (void)adDidChangeVolume:(TFAAdView * _Nonnull)ad muted:(BOOL)muted;
@end

@protocol TFASoundDelegate;
@class NSCoder;
@class TeadsAdSettings;

SWIFT_CLASS("_TtC8TeadsSDK9TFAAdView")
@interface TFAAdView : UIView
/// Ad loading state
@property (nonatomic, readonly) BOOL isLoading;
/// Ad loaded state
@property (nonatomic, readonly) BOOL isLoaded;
/// Ad playing state
@property (nonatomic, readonly) BOOL isPlaying;
/// Ad sound enabled state
@property (nonatomic, readonly) BOOL isSoundActive;
@property (nonatomic, weak) id <TFAAdDelegate> _Nullable delegate;
@property (nonatomic, weak) id <TFASoundDelegate> _Nullable soundDelegate;
@property (nonatomic) NSInteger pid;
@property (nonatomic) CGRect bounds;
@property (nonatomic) CGRect frame;
- (void)awakeFromNib;
- (void)willMoveToSuperview:(UIView * _Nullable)newSuperview;
- (void)didMoveToSuperview;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithPid:(NSString * _Nonnull)pid delegate:(id <TFAAdDelegate> _Nullable)delegate SWIFT_DEPRECATED_MSG("use init(withPid: andDelegate:)");
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Request an ad from Teads ad server
/// \param teadsAdSettings Optionnal <code>TeadsAdSettings</code> to define custom settings
///
- (void)loadWithTeadsAdSettings:(TeadsAdSettings * _Nullable)teadsAdSettings;
/// Enables debug for TFAAdView instance
/// Will provide logs about what is going on
- (void)enableDebug;
/// Set the ad container, allow you to monitor your inventory
/// \param container the container which will contain the adView
///
- (void)setAdContainerViewWithContainer:(UIView * _Nonnull)container;
/// Add Context info
- (void)addContextInfoWithInfoKey:(NSString * _Nonnull)infoKey infoValue:(NSString * _Nonnull)infoValue;
/// dismiss ad fullscreen
- (void)dismissFullscreen;
/// Reset ad loading
- (void)reset;
/// Call that method when you did not add the TFAAdView to your to your view hierarchy or if Teads view has width/height of 0 and the container view reached the spot where the ad was supposed to be
- (void)slotReached SWIFT_DEPRECATED_MSG("Use setAdContainerView instead");
@end

typedef SWIFT_ENUM(NSInteger, TeadsAdPlaybackState, closed) {
  TeadsAdPlaybackStatePlaybackStateCompleted = 0,
  TeadsAdPlaybackStatePlaybackStateStarted = 1,
  TeadsAdPlaybackStatePlaybackStatePaused = 2,
};


SWIFT_CLASS("_TtC8TeadsSDK15TFACustomAdView")
@interface TFACustomAdView : TFAAdView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/// Init TFACustomAdView by prodiving the pId and optional parameters
/// \param pid The Placement ID
///
/// \param delegate The TeadsAdDelegate object
///
///
/// returns:
/// TeadsAd instance
- (nonnull instancetype)initWithPid:(NSInteger)pid andDelegate:(id <TFAAdDelegate> _Nullable)delegate OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8TeadsSDK15TFAInReadAdView")
@interface TFAInReadAdView : TFAAdView
/// Init TFACustomAdView by prodiving the pId and optional parameters
/// \param pid The Placement ID
///
/// \param delegate The TeadsAdDelegate object
///
///
/// returns:
/// TeadsAd instance
- (nonnull instancetype)initWithPid:(NSInteger)pid andDelegate:(id <TFAAdDelegate> _Nullable)delegate OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol TFAInterstitialAdDelegate;

SWIFT_CLASS("_TtC8TeadsSDK17TFAInterstitialAd")
@interface TFAInterstitialAd : NSObject <TFAAdDelegate>
@property (nonatomic, weak) id <TFAInterstitialAdDelegate> _Nullable delegate;
@property (nonatomic) BOOL isShown;
@property (nonatomic, readonly) BOOL isLoaded;
@property (nonatomic, readonly) BOOL isLoading;
- (nonnull instancetype)initWithPid:(NSInteger)pid andDelegate:(id <TFAInterstitialAdDelegate> _Nullable)delegate OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithPid:(NSString * _Nonnull)pid delegate:(id <TFAInterstitialAdDelegate> _Nullable)delegate SWIFT_DEPRECATED_MSG("use init(withPid: andDelegate:)");
- (void)loadWithSettings:(TeadsAdSettings * _Nullable)settings;
- (void)show;
/// Add Context info
- (void)addContextInfoWithInfoKey:(NSString * _Nonnull)infoKey infoValue:(NSString * _Nonnull)infoValue;
- (void)didReceiveAd:(TFAAdView * _Nonnull)ad adRatio:(CGFloat)adRatio;
- (void)didFailToReceiveAd:(TFAAdView * _Nonnull)ad adFailReason:(AdFailReason * _Nonnull)adFailReason;
- (void)adClose:(TFAAdView * _Nonnull)ad userAction:(BOOL)userAction;
- (void)adError:(TFAAdView * _Nonnull)ad errorMessage:(NSString * _Nonnull)errorMessage;
- (void)adBrowserDidOpen:(TFAAdView * _Nonnull)ad;
- (void)adBrowserDidClose:(TFAAdView * _Nonnull)ad;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP8TeadsSDK25TFAInterstitialAdDelegate_")
@protocol TFAInterstitialAdDelegate
- (void)interstitialDidReceiveAd:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitial:(TFAInterstitialAd * _Nonnull)ad didFailToReceiveAdWithError:(NSString * _Nonnull)error;
@optional
- (void)interstitialWillOpen:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialWillClose:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialDidOpen:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialDidClose:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialBrowserDidOpen:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialBrowserDidClose:(TFAInterstitialAd * _Nonnull)ad;
- (void)interstitialWillLeaveApplication:(TFAInterstitialAd * _Nonnull)ad;
@end


SWIFT_CLASS("_TtC8TeadsSDK9TFAReward")
@interface TFAReward : NSObject
@property (nonatomic, copy) NSString * _Nullable type;
@property (nonatomic) double amount;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@protocol TFARewardedAdDelegate;

SWIFT_CLASS("_TtC8TeadsSDK13TFARewardedAd")
@interface TFARewardedAd : NSObject <TFAAdDelegate>
@property (nonatomic, weak) id <TFARewardedAdDelegate> _Nullable delegate;
@property (nonatomic) BOOL isShown;
@property (nonatomic, readonly) BOOL isLoaded;
@property (nonatomic, readonly) BOOL isLoading;
- (nonnull instancetype)initWithPid:(NSInteger)pid andDelegate:(id <TFARewardedAdDelegate> _Nullable)delegate OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithPid:(NSString * _Nonnull)pid delegate:(id <TFARewardedAdDelegate> _Nullable)delegate SWIFT_DEPRECATED_MSG("use init(withPid: andDelegate:)");
- (void)loadWithSettings:(TeadsAdSettings * _Nullable)settings;
- (void)show;
/// Add Context info
- (void)addContextInfoWithInfoKey:(NSString * _Nonnull)infoKey infoValue:(NSString * _Nonnull)infoValue;
- (void)didReceiveAd:(TFAAdView * _Nonnull)ad adRatio:(CGFloat)adRatio;
- (void)didFailToReceiveAd:(TFAAdView * _Nonnull)ad adFailReason:(AdFailReason * _Nonnull)adFailReason;
- (void)adClose:(TFAAdView * _Nonnull)ad userAction:(BOOL)userAction;
- (void)adError:(TFAAdView * _Nonnull)ad errorMessage:(NSString * _Nonnull)errorMessage;
- (void)adPlaybackChange:(TFAAdView * _Nonnull)ad state:(enum TeadsAdPlaybackState)state;
- (void)adBrowserDidOpen:(TFAAdView * _Nonnull)ad;
- (void)adBrowserDidClose:(TFAAdView * _Nonnull)ad;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP8TeadsSDK21TFARewardedAdDelegate_")
@protocol TFARewardedAdDelegate
- (void)rewarded:(TFARewardedAd * _Nonnull)rewardedAd didRewardUserWith:(TFAReward * _Nullable)reward;
- (void)rewarded:(TFARewardedAd * _Nonnull)rewardedAd didFailToReceiveAdWithError:(NSString * _Nonnull)didFailToReceiveAdWithError;
- (void)rewardedAdDidReceive:(TFARewardedAd * _Nonnull)rewardedAd;
@optional
- (void)rewardedAdDidOpen:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdDidStartPlaying:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdDidCompletePlaying:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdDidClose:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdBrowserDidOpen:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdBrowserDidClose:(TFARewardedAd * _Nonnull)rewardedAd;
- (void)rewardedAdWillLeaveApplication:(TFARewardedAd * _Nonnull)rewardedAd;
@end


SWIFT_PROTOCOL("_TtP8TeadsSDK16TFASoundDelegate_")
@protocol TFASoundDelegate
/// Called when the ad will start playing audio
- (void)adWillStartPlayingAudio:(TFAAdView * _Nonnull)ad;
/// Called when the ad will stop playing audio
- (void)adDidStopPlayingAudio:(TFAAdView * _Nonnull)ad;
@end


SWIFT_CLASS("_TtC8TeadsSDK15TeadsAdSettings")
@interface TeadsAdSettings : NSObject
- (void)enableValidationMode;
- (void)disableTeadsAudioSessionManagement;
- (void)enableDebug;
- (void)disableLocation;
- (void)enableLigtEndScreen;
- (void)disableMediaPreload;
- (void)pageUrl:(NSString * _Nonnull)urlString;
- (void)userConsentWithSubjectToGDPR:(NSString * _Nonnull)subjectToGDPR consent:(NSString * _Nonnull)consent;
- (void)disableBatteryMonitoring;
- (nonnull instancetype)initWithBuild:(SWIFT_NOESCAPE void (^ _Nonnull)(TeadsAdSettings * _Nonnull))build OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end









#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
