#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class StoreBookkeeperCompanion, StoreConverterBuilder<Network, Output, Local>, StoreFetcherCompanion, StoreFetcherResult<__covariant Network>, StoreFetcherResultData<Network>, StoreKotlinNothing, StoreFetcherResultError, StoreKotlinThrowable, StoreFetcherResultErrorException, StoreFetcherResultErrorMessage, StoreMemoryPolicyCompanion, StoreMemoryPolicyMemoryPolicyBuilder<Key, Value>, StoreMemoryPolicy<__contravariant Key, __contravariant Value>, StoreStoreReadRequest<Key>, StoreStoreWriteResponse, StoreOnFetcherCompletion<Network>, StoreUpdaterResultSuccess, StoreUpdaterResultError, StoreOnUpdaterCompletion<Response>, StoreSourceOfTruthCompanion, StoreKotlinArray<T>, StoreKotlinException, StoreKotlinRuntimeException, StoreStoreBuilderCompanion, StoreStoreReadRequestCompanion, StoreStoreReadResponseOrigin, StoreStoreReadResponse<__covariant Output>, StoreStoreReadResponseData<Output>, StoreStoreReadResponseError, StoreStoreReadResponseErrorException, StoreStoreReadResponseErrorMessage, StoreStoreReadResponseLoading, StoreStoreReadResponseNoNewData, StoreKotlinEnumCompanion, StoreKotlinEnum<E>, StoreOnStoreWriteCompletion, StoreStoreWriteRequestCompanion, StoreStoreWriteResponseError, StoreStoreWriteResponseErrorException, StoreStoreWriteResponseErrorMessage, StoreStoreWriteResponseSuccess, StoreStoreWriteResponseSuccessTyped<Response>, StoreStoreWriteResponseSuccessUntyped, StoreUpdaterResult, StoreUpdaterCompanion, StoreUpdaterResultErrorException, StoreUpdaterResultErrorMessage, StoreUpdaterResultSuccessTyped<Response>, StoreUpdaterResultSuccessUntyped, StoreValidatorCompanion, StoreRealStoreWriteRequest<Key, Output, Response>, StoreEagerConflictResolutionResult<__covariant Response>, StoreEagerConflictResolutionResultError, StoreEagerConflictResolutionResultErrorException, StoreEagerConflictResolutionResultErrorMessage, StoreEagerConflictResolutionResultSuccess<Response>, StoreEagerConflictResolutionResultSuccessConflictsResolved<Response>, StoreEagerConflictResolutionResultSuccessNoConflicts, StoreStoreDelegateWriteResult, StoreStoreDelegateWriteResultError, StoreStoreDelegateWriteResultErrorException, StoreStoreDelegateWriteResultErrorMessage, StoreStoreDelegateWriteResultSuccess, StoreKotlinIllegalStateException;

@protocol StoreBookkeeper, StoreKotlinSuspendFunction1, StoreKotlinSuspendFunction2, StoreKotlinSuspendFunction0, StoreConverter, StoreKotlinx_coroutines_coreFlow, StoreFetcher, StoreWeigher, StoreReadStreamWithConflictResolution, StoreStoreWriteRequest, StoreWrite, StoreWriteStream, StoreClearKey, StoreClear, StoreSourceOfTruth, StoreReadStream, StoreClearAll, StoreStore, StoreMutableStore, StoreUpdater, StoreStoreBuilder, StoreKotlinx_coroutines_coreCoroutineScope, StoreValidator, StoreKotlinComparable, StoreKotlinFunction, StoreKotlinx_coroutines_coreFlowCollector, StoreKotlinIterator, StoreKotlinCoroutineContext, StoreKotlinCoroutineContextElement, StoreKotlinCoroutineContextKey;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface StoreBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface StoreBase (StoreBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface StoreMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface StoreMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorStoreKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface StoreNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface StoreByte : StoreNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface StoreUByte : StoreNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface StoreShort : StoreNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface StoreUShort : StoreNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface StoreInt : StoreNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface StoreUInt : StoreNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface StoreLong : StoreNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface StoreULong : StoreNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface StoreFloat : StoreNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface StoreDouble : StoreNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface StoreBoolean : StoreNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("Bookkeeper")))
@protocol StoreBookkeeper
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearKey:(id)key completionHandler:(void (^)(StoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clear(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllWithCompletionHandler:(void (^)(StoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clearAll(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLastFailedSyncKey:(id)key completionHandler:(void (^)(StoreLong * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getLastFailedSync(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)setLastFailedSyncKey:(id)key timestamp:(int64_t)timestamp completionHandler:(void (^)(StoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("setLastFailedSync(key:timestamp:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BookkeeperCompanion")))
@interface StoreBookkeeperCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreBookkeeperCompanion *shared __attribute__((swift_name("shared")));
- (id<StoreBookkeeper>)byGetLastFailedSync:(id<StoreKotlinSuspendFunction1>)getLastFailedSync setLastFailedSync:(id<StoreKotlinSuspendFunction2>)setLastFailedSync clear:(id<StoreKotlinSuspendFunction1>)clear clearAll:(id<StoreKotlinSuspendFunction0>)clearAll __attribute__((swift_name("by(getLastFailedSync:setLastFailedSync:clear:clearAll:)")));
@end

__attribute__((swift_name("Clear")))
@protocol StoreClear
@required
@end

__attribute__((swift_name("ClearAll")))
@protocol StoreClearAll
@required

/**
 * @note annotations
 *   org.mobilenativefoundation.store.store5.ExperimentalStoreApi
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));
@end

__attribute__((swift_name("ClearKey")))
@protocol StoreClearKey
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearKey:(id)key completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(key:completionHandler_:)")));
@end

__attribute__((swift_name("Converter")))
@protocol StoreConverter
@required
- (id _Nullable)fromLocalToOutputLocal:(id)local __attribute__((swift_name("fromLocalToOutput(local:)")));
- (id _Nullable)fromNetworkToOutputNetwork:(id)network __attribute__((swift_name("fromNetworkToOutput(network:)")));
- (id _Nullable)fromOutputToLocalOutput:(id)output __attribute__((swift_name("fromOutputToLocal(output:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConverterBuilder")))
@interface StoreConverterBuilder<Network, Output, Local> : StoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<StoreConverter>)build __attribute__((swift_name("build()")));
- (StoreConverterBuilder<Network, Output, Local> *)fromLocalToOutputConverter:(Output (^)(Local))converter __attribute__((swift_name("fromLocalToOutput(converter:)")));
- (StoreConverterBuilder<Network, Output, Local> *)fromNetworkToOutputConverter:(Output (^)(Network))converter __attribute__((swift_name("fromNetworkToOutput(converter:)")));
- (StoreConverterBuilder<Network, Output, Local> *)fromOutputToLocalConverter:(Local (^)(Output))converter __attribute__((swift_name("fromOutputToLocal(converter:)")));
@end

__attribute__((swift_name("Fetcher")))
@protocol StoreFetcher
@required
- (id<StoreKotlinx_coroutines_coreFlow>)invokeKey:(id)key __attribute__((swift_name("invoke(key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetcherCompanion")))
@interface StoreFetcherCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreFetcherCompanion *shared __attribute__((swift_name("shared")));
- (id<StoreFetcher>)ofFetch:(id<StoreKotlinSuspendFunction1>)fetch __attribute__((swift_name("of(fetch:)")));
- (id<StoreFetcher>)ofFlowFlowFactory:(id<StoreKotlinx_coroutines_coreFlow> (^)(id))flowFactory __attribute__((swift_name("ofFlow(flowFactory:)")));
- (id<StoreFetcher>)ofResultFetch:(id<StoreKotlinSuspendFunction1>)fetch __attribute__((swift_name("ofResult(fetch:)")));
- (id<StoreFetcher>)ofResultFlowFlowFactory:(id<StoreKotlinx_coroutines_coreFlow> (^)(id))flowFactory __attribute__((swift_name("ofResultFlow(flowFactory:)")));
@end

__attribute__((swift_name("FetcherResult")))
@interface StoreFetcherResult<__covariant Network> : StoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetcherResultData")))
@interface StoreFetcherResultData<Network> : StoreFetcherResult<Network>
- (instancetype)initWithValue:(Network)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (Network)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreFetcherResultData<Network> *)doCopyValue:(Network)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Network value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("FetcherResultError")))
@interface StoreFetcherResultError : StoreFetcherResult<StoreKotlinNothing *>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetcherResultError.Exception")))
@interface StoreFetcherResultErrorException : StoreFetcherResultError
- (instancetype)initWithError:(StoreKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (StoreKotlinThrowable *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreFetcherResultErrorException *)doCopyError:(StoreKotlinThrowable *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreKotlinThrowable *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FetcherResultError.Message")))
@interface StoreFetcherResultErrorMessage : StoreFetcherResultError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreFetcherResultErrorMessage *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoryPolicy")))
@interface StoreMemoryPolicy<__contravariant Key, __contravariant Value> : StoreBase
@property (class, readonly, getter=companion) StoreMemoryPolicyCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int64_t expireAfterAccess __attribute__((swift_name("expireAfterAccess")));
@property (readonly) int64_t expireAfterWrite __attribute__((swift_name("expireAfterWrite")));
@property (readonly) BOOL hasAccessPolicy __attribute__((swift_name("hasAccessPolicy")));
@property (readonly) BOOL hasMaxSize __attribute__((swift_name("hasMaxSize")));
@property (readonly) BOOL hasMaxWeight __attribute__((swift_name("hasMaxWeight")));
@property (readonly) BOOL hasWritePolicy __attribute__((swift_name("hasWritePolicy")));
@property (readonly) BOOL isDefaultWritePolicy __attribute__((swift_name("isDefaultWritePolicy")));
@property (readonly) int64_t maxSize __attribute__((swift_name("maxSize")));
@property (readonly) int64_t maxWeight __attribute__((swift_name("maxWeight")));
@property (readonly) id<StoreWeigher> weigher __attribute__((swift_name("weigher")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoryPolicyCompanion")))
@interface StoreMemoryPolicyCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreMemoryPolicyCompanion *shared __attribute__((swift_name("shared")));
- (StoreMemoryPolicyMemoryPolicyBuilder<id, id> *)builder __attribute__((swift_name("builder()")));
@property (readonly) int64_t DEFAULT_DURATION_POLICY __attribute__((swift_name("DEFAULT_DURATION_POLICY")));
@property (readonly) int64_t DEFAULT_SIZE_POLICY __attribute__((swift_name("DEFAULT_SIZE_POLICY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MemoryPolicyMemoryPolicyBuilder")))
@interface StoreMemoryPolicyMemoryPolicyBuilder<Key, Value> : StoreBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (StoreMemoryPolicy<Key, Value> *)build __attribute__((swift_name("build()")));
- (StoreMemoryPolicyMemoryPolicyBuilder<Key, Value> *)setExpireAfterAccessExpireAfterAccess:(int64_t)expireAfterAccess __attribute__((swift_name("setExpireAfterAccess(expireAfterAccess:)")));
- (StoreMemoryPolicyMemoryPolicyBuilder<Key, Value> *)setExpireAfterWriteExpireAfterWrite:(int64_t)expireAfterWrite __attribute__((swift_name("setExpireAfterWrite(expireAfterWrite:)")));
- (StoreMemoryPolicyMemoryPolicyBuilder<Key, Value> *)setMaxSizeMaxSize:(int64_t)maxSize __attribute__((swift_name("setMaxSize(maxSize:)")));
- (StoreMemoryPolicyMemoryPolicyBuilder<Key, Value> *)setWeigherAndMaxWeightWeigher:(id<StoreWeigher>)weigher maxWeight:(int64_t)maxWeight __attribute__((swift_name("setWeigherAndMaxWeight(weigher:maxWeight:)")));
@end

__attribute__((swift_name("ReadStreamWithConflictResolution")))
@protocol StoreReadStreamWithConflictResolution
@required
- (id<StoreKotlinx_coroutines_coreFlow>)streamRequest:(StoreStoreReadRequest<id> *)request __attribute__((swift_name("stream(request:)")));
@end

__attribute__((swift_name("Write")))
@protocol StoreWrite
@required

/**
 * @note annotations
 *   org.mobilenativefoundation.store.store5.ExperimentalStoreApi
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeRequest:(id<StoreStoreWriteRequest>)request completionHandler:(void (^)(StoreStoreWriteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("write(request:completionHandler:)")));
@end

__attribute__((swift_name("WriteStream")))
@protocol StoreWriteStream
@required

/**
 * @note annotations
 *   org.mobilenativefoundation.store.store5.ExperimentalStoreApi
*/
- (id<StoreKotlinx_coroutines_coreFlow>)streamRequestStream:(id<StoreKotlinx_coroutines_coreFlow>)requestStream __attribute__((swift_name("stream(requestStream:)")));
@end

__attribute__((swift_name("MutableStore")))
@protocol StoreMutableStore <StoreReadStreamWithConflictResolution, StoreWrite, StoreWriteStream, StoreClearKey, StoreClear>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnFetcherCompletion")))
@interface StoreOnFetcherCompletion<Network> : StoreBase
- (instancetype)initWithOnSuccess:(void (^)(StoreFetcherResultData<Network> *))onSuccess onFailure:(void (^)(StoreFetcherResultError *))onFailure __attribute__((swift_name("init(onSuccess:onFailure:)"))) __attribute__((objc_designated_initializer));
- (void (^)(StoreFetcherResultData<Network> *))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(StoreFetcherResultError *))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreOnFetcherCompletion<Network> *)doCopyOnSuccess:(void (^)(StoreFetcherResultData<Network> *))onSuccess onFailure:(void (^)(StoreFetcherResultError *))onFailure __attribute__((swift_name("doCopy(onSuccess:onFailure:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^onFailure)(StoreFetcherResultError *) __attribute__((swift_name("onFailure")));
@property (readonly) void (^onSuccess)(StoreFetcherResultData<Network> *) __attribute__((swift_name("onSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnUpdaterCompletion")))
@interface StoreOnUpdaterCompletion<Response> : StoreBase
- (instancetype)initWithOnSuccess:(void (^)(StoreUpdaterResultSuccess *))onSuccess onFailure:(void (^)(StoreUpdaterResultError *))onFailure __attribute__((swift_name("init(onSuccess:onFailure:)"))) __attribute__((objc_designated_initializer));
- (void (^)(StoreUpdaterResultSuccess *))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(StoreUpdaterResultError *))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreOnUpdaterCompletion<Response> *)doCopyOnSuccess:(void (^)(StoreUpdaterResultSuccess *))onSuccess onFailure:(void (^)(StoreUpdaterResultError *))onFailure __attribute__((swift_name("doCopy(onSuccess:onFailure:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^onFailure)(StoreUpdaterResultError *) __attribute__((swift_name("onFailure")));
@property (readonly) void (^onSuccess)(StoreUpdaterResultSuccess *) __attribute__((swift_name("onSuccess")));
@end

__attribute__((swift_name("Read")))
@protocol StoreRead
@required
@end

__attribute__((swift_name("ReadStream")))
@protocol StoreReadStream
@required
- (id<StoreKotlinx_coroutines_coreFlow>)streamRequest_:(StoreStoreReadRequest<id> *)request __attribute__((swift_name("stream(request_:)")));
@end

__attribute__((swift_name("SourceOfTruth")))
@protocol StoreSourceOfTruth
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteKey:(id)key completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delete(key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteAllWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAll(completionHandler:)")));
- (id<StoreKotlinx_coroutines_coreFlow>)readerKey:(id)key __attribute__((swift_name("reader(key:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeKey:(id)key value:(id)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("write(key:value:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfTruthCompanion")))
@interface StoreSourceOfTruthCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreSourceOfTruthCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="ofFlow")
*/
- (id<StoreSourceOfTruth>)ofReader:(id<StoreKotlinx_coroutines_coreFlow> (^)(id))reader writer:(id<StoreKotlinSuspendFunction2>)writer delete:(id<StoreKotlinSuspendFunction1> _Nullable)delete_ deleteAll:(id<StoreKotlinSuspendFunction0> _Nullable)deleteAll __attribute__((swift_name("of(reader:writer:delete:deleteAll:)")));
- (id<StoreSourceOfTruth>)ofNonFlowReader:(id<StoreKotlinSuspendFunction1>)nonFlowReader writer:(id<StoreKotlinSuspendFunction2>)writer delete:(id<StoreKotlinSuspendFunction1> _Nullable)delete_ deleteAll:(id<StoreKotlinSuspendFunction0> _Nullable)deleteAll __attribute__((swift_name("of(nonFlowReader:writer:delete:deleteAll:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface StoreKotlinThrowable : StoreBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (StoreKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface StoreKotlinException : StoreKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface StoreKotlinRuntimeException : StoreKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfTruthReadException")))
@interface StoreSourceOfTruthReadException : StoreKotlinRuntimeException
- (instancetype)initWithKey:(id _Nullable)key cause:(StoreKotlinThrowable *)cause __attribute__((swift_name("init(key:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SourceOfTruthWriteException")))
@interface StoreSourceOfTruthWriteException : StoreKotlinRuntimeException
- (instancetype)initWithKey:(id _Nullable)key value:(id _Nullable)value cause:(StoreKotlinThrowable *)cause __attribute__((swift_name("init(key:value:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Store")))
@protocol StoreStore <StoreReadStream, StoreClearKey, StoreClearAll>
@required
@end

__attribute__((swift_name("StoreBuilder")))
@protocol StoreStoreBuilder
@required
- (id<StoreStore>)build __attribute__((swift_name("build()")));
- (id<StoreMutableStore>)buildUpdater:(id<StoreUpdater>)updater bookkeeper:(id<StoreBookkeeper> _Nullable)bookkeeper __attribute__((swift_name("build(updater:bookkeeper:)")));
- (id<StoreStoreBuilder>)cachePolicyMemoryPolicy:(StoreMemoryPolicy<id, id> * _Nullable)memoryPolicy __attribute__((swift_name("cachePolicy(memoryPolicy:)")));
- (id<StoreStoreBuilder>)converterConverter:(id<StoreConverter>)converter __attribute__((swift_name("converter(converter:)")));
- (id<StoreStoreBuilder>)disableCache __attribute__((swift_name("disableCache()")));
- (id<StoreStoreBuilder>)scopeScope:(id<StoreKotlinx_coroutines_coreCoroutineScope>)scope __attribute__((swift_name("scope(scope:)")));
- (id<StoreStoreBuilder>)validatorValidator:(id<StoreValidator>)validator __attribute__((swift_name("validator(validator:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreBuilderCompanion")))
@interface StoreStoreBuilderCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreStoreBuilderCompanion *shared __attribute__((swift_name("shared")));
- (id<StoreStoreBuilder>)fromFetcher:(id<StoreFetcher>)fetcher __attribute__((swift_name("from(fetcher:)")));
- (id<StoreStoreBuilder>)fromFetcher:(id<StoreFetcher>)fetcher sourceOfTruth:(id<StoreSourceOfTruth>)sourceOfTruth __attribute__((swift_name("from(fetcher:sourceOfTruth:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreReadRequest")))
@interface StoreStoreReadRequest<Key> : StoreBase
@property (class, readonly, getter=companion) StoreStoreReadRequestCompanion *companion __attribute__((swift_name("companion")));
- (Key _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreReadRequest<Key> *)doCopyKey:(Key _Nullable)key skippedCaches:(int32_t)skippedCaches refresh:(BOOL)refresh __attribute__((swift_name("doCopy(key:skippedCaches:refresh:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Key _Nullable key __attribute__((swift_name("key")));
@property (readonly) BOOL refresh __attribute__((swift_name("refresh")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreReadRequestCompanion")))
@interface StoreStoreReadRequestCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreStoreReadRequestCompanion *shared __attribute__((swift_name("shared")));
- (StoreStoreReadRequest<id> *)cachedKey:(id _Nullable)key refresh:(BOOL)refresh __attribute__((swift_name("cached(key:refresh:)")));
- (StoreStoreReadRequest<id> *)freshKey:(id _Nullable)key __attribute__((swift_name("fresh(key:)")));
- (StoreStoreReadRequest<id> *)skipMemoryKey:(id _Nullable)key refresh:(BOOL)refresh __attribute__((swift_name("skipMemory(key:refresh:)")));
@end

__attribute__((swift_name("StoreReadResponse")))
@interface StoreStoreReadResponse<__covariant Output> : StoreBase
- (Output _Nullable)dataOrNull __attribute__((swift_name("dataOrNull()")));
- (NSString * _Nullable)errorMessageOrNull __attribute__((swift_name("errorMessageOrNull()")));
- (Output _Nullable)requireData __attribute__((swift_name("requireData()")));
- (void)throwIfError __attribute__((swift_name("throwIfError()")));
@property (readonly) StoreStoreReadResponseOrigin *origin __attribute__((swift_name("origin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreReadResponseData")))
@interface StoreStoreReadResponseData<Output> : StoreStoreReadResponse<Output>
- (instancetype)initWithValue:(Output _Nullable)value origin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("init(value:origin:)"))) __attribute__((objc_designated_initializer));
- (Output _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreReadResponseOrigin *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreReadResponseData<Output> *)doCopyValue:(Output _Nullable)value origin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("doCopy(value:origin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreStoreReadResponseOrigin *origin __attribute__((swift_name("origin")));
@property (readonly) Output _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("StoreReadResponseError")))
@interface StoreStoreReadResponseError : StoreStoreReadResponse<StoreKotlinNothing *>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreReadResponseError.Exception")))
@interface StoreStoreReadResponseErrorException : StoreStoreReadResponseError
- (instancetype)initWithError:(StoreKotlinThrowable *)error origin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("init(error:origin:)"))) __attribute__((objc_designated_initializer));
- (StoreKotlinThrowable *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreReadResponseOrigin *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreReadResponseErrorException *)doCopyError:(StoreKotlinThrowable *)error origin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("doCopy(error:origin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreKotlinThrowable *error __attribute__((swift_name("error")));
@property (readonly) StoreStoreReadResponseOrigin *origin __attribute__((swift_name("origin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreReadResponseError.Message")))
@interface StoreStoreReadResponseErrorMessage : StoreStoreReadResponseError
- (instancetype)initWithMessage:(NSString *)message origin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("init(message:origin:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreReadResponseOrigin *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreReadResponseErrorMessage *)doCopyMessage:(NSString *)message origin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("doCopy(message:origin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) StoreStoreReadResponseOrigin *origin __attribute__((swift_name("origin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreReadResponseLoading")))
@interface StoreStoreReadResponseLoading : StoreStoreReadResponse<StoreKotlinNothing *>
- (instancetype)initWithOrigin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));
- (StoreStoreReadResponseOrigin *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreReadResponseLoading *)doCopyOrigin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("doCopy(origin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreStoreReadResponseOrigin *origin __attribute__((swift_name("origin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreReadResponseNoNewData")))
@interface StoreStoreReadResponseNoNewData : StoreStoreReadResponse<StoreKotlinNothing *>
- (instancetype)initWithOrigin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));
- (StoreStoreReadResponseOrigin *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreReadResponseNoNewData *)doCopyOrigin:(StoreStoreReadResponseOrigin *)origin __attribute__((swift_name("doCopy(origin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreStoreReadResponseOrigin *origin __attribute__((swift_name("origin")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol StoreKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface StoreKotlinEnum<E> : StoreBase <StoreKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) StoreKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreReadResponseOrigin")))
@interface StoreStoreReadResponseOrigin : StoreKotlinEnum<StoreStoreReadResponseOrigin *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) StoreStoreReadResponseOrigin *cache __attribute__((swift_name("cache")));
@property (class, readonly) StoreStoreReadResponseOrigin *sourceoftruth __attribute__((swift_name("sourceoftruth")));
@property (class, readonly) StoreStoreReadResponseOrigin *fetcher __attribute__((swift_name("fetcher")));
+ (StoreKotlinArray<StoreStoreReadResponseOrigin *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("StoreWriteRequest")))
@protocol StoreStoreWriteRequest
@required
@property (readonly) int64_t created __attribute__((swift_name("created")));
@property (readonly) id key __attribute__((swift_name("key")));
@property (readonly) NSArray<StoreOnStoreWriteCompletion *> * _Nullable onCompletions __attribute__((swift_name("onCompletions")));
@property (readonly) id value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreWriteRequestCompanion")))
@interface StoreStoreWriteRequestCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreStoreWriteRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<StoreStoreWriteRequest>)ofKey:(id)key value:(id)value onCompletions:(NSArray<StoreOnStoreWriteCompletion *> * _Nullable)onCompletions created:(int64_t)created __attribute__((swift_name("of(key:value:onCompletions:created:)")));
@end

__attribute__((swift_name("StoreWriteResponse")))
@interface StoreStoreWriteResponse : StoreBase
@end

__attribute__((swift_name("StoreWriteResponse.Error")))
@interface StoreStoreWriteResponseError : StoreStoreWriteResponse
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreWriteResponse.ErrorException")))
@interface StoreStoreWriteResponseErrorException : StoreStoreWriteResponseError
- (instancetype)initWithError:(StoreKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (StoreKotlinThrowable *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreWriteResponseErrorException *)doCopyError:(StoreKotlinThrowable *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreKotlinThrowable *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreWriteResponse.ErrorMessage")))
@interface StoreStoreWriteResponseErrorMessage : StoreStoreWriteResponseError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreWriteResponseErrorMessage *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("StoreWriteResponse.Success")))
@interface StoreStoreWriteResponseSuccess : StoreStoreWriteResponse
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreWriteResponseSuccessTyped")))
@interface StoreStoreWriteResponseSuccessTyped<Response> : StoreStoreWriteResponseSuccess
- (instancetype)initWithValue:(Response)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (Response)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreWriteResponseSuccessTyped<Response> *)doCopyValue:(Response)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Response value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreWriteResponse.SuccessUntyped")))
@interface StoreStoreWriteResponseSuccessUntyped : StoreStoreWriteResponseSuccess
- (instancetype)initWithValue:(id)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (id)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreWriteResponseSuccessUntyped *)doCopyValue:(id)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Updater")))
@protocol StoreUpdater
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postKey:(id)key value:(id)value completionHandler:(void (^)(StoreUpdaterResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(key:value:completionHandler:)")));
@property (readonly) StoreOnUpdaterCompletion<id> * _Nullable onCompletion __attribute__((swift_name("onCompletion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdaterCompanion")))
@interface StoreUpdaterCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreUpdaterCompanion *shared __attribute__((swift_name("shared")));
- (id<StoreUpdater>)byPost:(id<StoreKotlinSuspendFunction2>)post onCompletion:(StoreOnUpdaterCompletion<id> * _Nullable)onCompletion __attribute__((swift_name("by(post:onCompletion:)")));
@end

__attribute__((swift_name("UpdaterResult")))
@interface StoreUpdaterResult : StoreBase
@end

__attribute__((swift_name("UpdaterResult.Error")))
@interface StoreUpdaterResultError : StoreUpdaterResult
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdaterResult.ErrorException")))
@interface StoreUpdaterResultErrorException : StoreUpdaterResultError
- (instancetype)initWithError:(StoreKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (StoreKotlinThrowable *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreUpdaterResultErrorException *)doCopyError:(StoreKotlinThrowable *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreKotlinThrowable *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdaterResult.ErrorMessage")))
@interface StoreUpdaterResultErrorMessage : StoreUpdaterResultError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreUpdaterResultErrorMessage *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("UpdaterResult.Success")))
@interface StoreUpdaterResultSuccess : StoreUpdaterResult
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdaterResultSuccessTyped")))
@interface StoreUpdaterResultSuccessTyped<Response> : StoreUpdaterResultSuccess
- (instancetype)initWithValue:(Response)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (Response)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreUpdaterResultSuccessTyped<Response> *)doCopyValue:(Response)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) Response value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdaterResult.SuccessUntyped")))
@interface StoreUpdaterResultSuccessUntyped : StoreUpdaterResultSuccess
- (instancetype)initWithValue:(id)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (id)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreUpdaterResultSuccessUntyped *)doCopyValue:(id)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Validator")))
@protocol StoreValidator
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)isValidItem:(id)item completionHandler:(void (^)(StoreBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isValid(item:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidatorCompanion")))
@interface StoreValidatorCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreValidatorCompanion *shared __attribute__((swift_name("shared")));
- (id<StoreValidator>)byValidator:(id<StoreKotlinSuspendFunction1>)validator __attribute__((swift_name("by(validator:)")));
@end

__attribute__((swift_name("Weigher")))
@protocol StoreWeigher
@required
- (int32_t)weighKey:(id)key value:(id)value __attribute__((swift_name("weigh(key:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnStoreWriteCompletion")))
@interface StoreOnStoreWriteCompletion : StoreBase
- (instancetype)initWithOnSuccess:(void (^)(StoreStoreWriteResponseSuccess *))onSuccess onFailure:(void (^)(StoreStoreWriteResponseError *))onFailure __attribute__((swift_name("init(onSuccess:onFailure:)"))) __attribute__((objc_designated_initializer));
- (void (^)(StoreStoreWriteResponseSuccess *))component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(StoreStoreWriteResponseError *))component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreOnStoreWriteCompletion *)doCopyOnSuccess:(void (^)(StoreStoreWriteResponseSuccess *))onSuccess onFailure:(void (^)(StoreStoreWriteResponseError *))onFailure __attribute__((swift_name("doCopy(onSuccess:onFailure:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^onFailure)(StoreStoreWriteResponseError *) __attribute__((swift_name("onFailure")));
@property (readonly) void (^onSuccess)(StoreStoreWriteResponseSuccess *) __attribute__((swift_name("onSuccess")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RealStoreWriteRequest")))
@interface StoreRealStoreWriteRequest<Key, Output, Response> : StoreBase <StoreStoreWriteRequest>
- (instancetype)initWithKey:(Key)key value:(Output)value created:(int64_t)created onCompletions:(NSArray<StoreOnStoreWriteCompletion *> * _Nullable)onCompletions __attribute__((swift_name("init(key:value:created:onCompletions:)"))) __attribute__((objc_designated_initializer));
- (Key)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (Output)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<StoreOnStoreWriteCompletion *> * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreRealStoreWriteRequest<Key, Output, Response> *)doCopyKey:(Key)key value:(Output)value created:(int64_t)created onCompletions:(NSArray<StoreOnStoreWriteCompletion *> * _Nullable)onCompletions __attribute__((swift_name("doCopy(key:value:created:onCompletions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created __attribute__((swift_name("created")));
@property (readonly) Key key __attribute__((swift_name("key")));
@property (readonly) NSArray<StoreOnStoreWriteCompletion *> * _Nullable onCompletions __attribute__((swift_name("onCompletions")));
@property (readonly) Output value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("EagerConflictResolutionResult")))
@interface StoreEagerConflictResolutionResult<__covariant Response> : StoreBase
@end

__attribute__((swift_name("EagerConflictResolutionResultError")))
@interface StoreEagerConflictResolutionResultError : StoreEagerConflictResolutionResult<StoreKotlinNothing *>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EagerConflictResolutionResultError.Exception")))
@interface StoreEagerConflictResolutionResultErrorException : StoreEagerConflictResolutionResultError
- (instancetype)initWithError:(StoreKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (StoreKotlinThrowable *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreEagerConflictResolutionResultErrorException *)doCopyError:(StoreKotlinThrowable *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreKotlinThrowable *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EagerConflictResolutionResultError.Message")))
@interface StoreEagerConflictResolutionResultErrorMessage : StoreEagerConflictResolutionResultError
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreEagerConflictResolutionResultErrorMessage *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((swift_name("EagerConflictResolutionResultSuccess")))
@interface StoreEagerConflictResolutionResultSuccess<Response> : StoreEagerConflictResolutionResult<Response>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EagerConflictResolutionResultSuccessConflictsResolved")))
@interface StoreEagerConflictResolutionResultSuccessConflictsResolved<Response> : StoreEagerConflictResolutionResultSuccess<Response>
- (instancetype)initWithValue:(StoreUpdaterResultSuccess *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (StoreUpdaterResultSuccess *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreEagerConflictResolutionResultSuccessConflictsResolved<Response> *)doCopyValue:(StoreUpdaterResultSuccess *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreUpdaterResultSuccess *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EagerConflictResolutionResultSuccessNoConflicts")))
@interface StoreEagerConflictResolutionResultSuccessNoConflicts : StoreEagerConflictResolutionResultSuccess<StoreKotlinNothing *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)noConflicts __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreEagerConflictResolutionResultSuccessNoConflicts *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("StoreDelegateWriteResult")))
@interface StoreStoreDelegateWriteResult : StoreBase
@end

__attribute__((swift_name("StoreDelegateWriteResult.Error")))
@interface StoreStoreDelegateWriteResultError : StoreStoreDelegateWriteResult
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreDelegateWriteResult.ErrorException")))
@interface StoreStoreDelegateWriteResultErrorException : StoreStoreDelegateWriteResultError
- (instancetype)initWithError:(StoreKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (StoreKotlinThrowable *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreDelegateWriteResultErrorException *)doCopyError:(StoreKotlinThrowable *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) StoreKotlinThrowable *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreDelegateWriteResult.ErrorMessage")))
@interface StoreStoreDelegateWriteResultErrorMessage : StoreStoreDelegateWriteResultError
- (instancetype)initWithError:(NSString *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (StoreStoreDelegateWriteResultErrorMessage *)doCopyError:(NSString *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreDelegateWriteResult.Success")))
@interface StoreStoreDelegateWriteResultSuccess : StoreStoreDelegateWriteResult
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreStoreDelegateWriteResultSuccess *shared __attribute__((swift_name("shared")));
@end

@interface StoreStoreReadResponseError (Extensions)
- (void)doThrow __attribute__((swift_name("doThrow()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RealStoreBuilderKt")))
@interface StoreRealStoreBuilderKt : StoreBase
+ (id<StoreStoreBuilder>)storeBuilderFromFetcherFetcher:(id<StoreFetcher>)fetcher sourceOfTruth:(id<StoreSourceOfTruth> _Nullable)sourceOfTruth __attribute__((swift_name("storeBuilderFromFetcher(fetcher:sourceOfTruth:)")));
+ (id<StoreStoreBuilder>)storeBuilderFromFetcherAndSourceOfTruthFetcher:(id<StoreFetcher>)fetcher sourceOfTruth:(id<StoreSourceOfTruth>)sourceOfTruth __attribute__((swift_name("storeBuilderFromFetcherAndSourceOfTruth(fetcher:sourceOfTruth:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreKt")))
@interface StoreStoreKt : StoreBase
+ (id<StoreMutableStore>)asMutableStore:(id<StoreStore>)receiver updater:(id<StoreUpdater>)updater bookkeeper:(id<StoreBookkeeper> _Nullable)bookkeeper __attribute__((swift_name("asMutableStore(_:updater:bookkeeper:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fresh:(id<StoreStore>)receiver key:(id)key completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fresh(_:key:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)get:(id<StoreStore>)receiver key:(id)key completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(_:key:completionHandler:)")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface StoreKotlinIllegalStateException : StoreKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface StoreKotlinCancellationException : StoreKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(StoreKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol StoreKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol StoreKotlinSuspendFunction1 <StoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol StoreKotlinSuspendFunction2 <StoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol StoreKotlinSuspendFunction0 <StoreKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol StoreKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<StoreKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface StoreKotlinNothing : StoreBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface StoreKotlinArray<T> : StoreBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(StoreInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<StoreKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol StoreKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<StoreKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface StoreKotlinEnumCompanion : StoreBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) StoreKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol StoreKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol StoreKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol StoreKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<StoreKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<StoreKotlinCoroutineContextElement> _Nullable)getKey:(id<StoreKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<StoreKotlinCoroutineContext>)minusKeyKey:(id<StoreKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<StoreKotlinCoroutineContext>)plusContext:(id<StoreKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol StoreKotlinCoroutineContextElement <StoreKotlinCoroutineContext>
@required
@property (readonly) id<StoreKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol StoreKotlinCoroutineContextKey
@required
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
