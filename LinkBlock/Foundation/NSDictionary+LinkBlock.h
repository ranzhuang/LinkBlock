//
//  NSDictionary+LinkBlock.h
//
//  Created by NOVO on 15/8/12.
//  Copyright (c) 2015年 NOVO. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject(NSDictionaryLinkBlock)
/** 安全取值，没有符合的健的时候返回nil，该返回值允许包括NSNull类型对象 */
@property (nonatomic,copy,readonly) NSObject*    (^dictGet)(id<NSCopying> key);
/** 安全取值，没有符合的健或者结果类型为NSNull的时候返回nil */
@property (nonatomic,copy,readonly) NSObject*    (^dictGetNoNSNull)(id<NSCopying> key);
/** 安全取出字典对象，没有符合的健或取出对象不是字典时返回空字典，而不是nil和NSNull*/
@property (nonatomic,copy,readonly) NSDictionary* (^dictGetDictNoNullType)(id<NSCopying> key);
/** 安全取出数组对象，没有符合的健或取出对象不是数组时返回空数组，而不是nil和NSNull */
@property (nonatomic,copy,readonly) NSArray*     (^dictGetArrNoNullType)(id<NSCopying> key);
/** 安全取出布尔值，没有符合的健时返回NO，而不是nil和NSNull */
@property (nonatomic,copy,readonly) BOOL         (^dictGetBOOLNoNullType)(id<NSCopying> key);
/** 安全取出布尔值，没有符合的健时返回NO，而不是nil和NSNull */
@property (nonatomic,copy,readonly) UIView*      (^dictGetViewNoNullType)(id<NSCopying> key);
/** 是否包含key */
@property (nonatomic,copy,readonly) BOOL         (^dictContainerKey)(id<NSCopying> key);
/** 是否包含value */
@property (nonatomic,copy,readonly) BOOL         (^dictContainerValue)(id value);
@property (nonatomic,copy,readonly) NSArray*     (^dictAllKeys)();
@property (nonatomic,copy,readonly) NSArray*     (^dictAllValues)();
/** 根据值返取所有键的集合 */
@property (nonatomic,copy,readonly) NSArray*     (^dictKeysForValue)(id value);
/** 字典转模型：替换字典中的key，层次遍历字典和数组 */
@property (nonatomic,copy,readonly) NSMutableDictionary* (^dictReplaceKey)(id<NSCopying> replaceKey, id<NSCopying> withKey);
/** 字典转模型：替换字典中的key，非遍历的 */
@property (nonatomic,copy,readonly) NSMutableDictionary* (^dictReplaceKeyWithoutDeep)(id<NSCopying> replaceKey, id<NSCopying> withKey);
@end
