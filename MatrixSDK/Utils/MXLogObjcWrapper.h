// 
// Copyright 2021 The Matrix.org Foundation C.I.C
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 An `MXLog` Objective-C wrapper used to allow calling Swift methods from the variadic macros defined in `MXLog.h`
 */
@interface MXLogObjcWrapper : NSObject

+ (void)logVerbose:(NSString *)message file:(NSString *)file function:(NSString *)function line:(NSUInteger)line;

+ (void)logDebug:(NSString *)message file:(NSString *)file function:(NSString *)function line:(NSUInteger)line;

+ (void)logInfo:(NSString *)message file:(NSString *)file function:(NSString *)function line:(NSUInteger)line;

+ (void)logWarning:(NSString *)message file:(NSString *)file function:(NSString *)function line:(NSUInteger)line;

+ (void)logError:(NSString *)message details:(nullable NSDictionary<NSString *, id> *)details file:(NSString *)file function:(NSString *)function line:(NSUInteger)line;

+ (void)logFailure:(NSString *)message details:(nullable NSDictionary<NSString *, id> *)details file:(NSString *)file function:(NSString *)function line:(NSUInteger)line;

@end

NS_ASSUME_NONNULL_END
