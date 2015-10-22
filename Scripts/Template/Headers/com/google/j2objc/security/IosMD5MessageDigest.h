//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/security/IosMD5MessageDigest.java
//

#ifndef _ComGoogleJ2objcSecurityIosMD5MessageDigest_H_
#define _ComGoogleJ2objcSecurityIosMD5MessageDigest_H_

#include "../../../../J2ObjC_header.h"
#include "../../../../java/security/MessageDigest.h"

@class IOSByteArray;

/*!
 @brief MD5 message digest which is implemented using the iOS Security Framework.
 @author Tom Ball
 */
@interface ComGoogleJ2objcSecurityIosMD5MessageDigest : JavaSecurityMessageDigest < NSCopying >

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (IOSByteArray *)engineDigest;

- (jint)engineGetDigestLength;

- (void)engineReset;

- (void)engineUpdateWithByte:(jbyte)input;

- (void)engineUpdateWithByteArray:(IOSByteArray *)input
                          withInt:(jint)offset
                          withInt:(jint)len;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcSecurityIosMD5MessageDigest)

FOUNDATION_EXPORT void ComGoogleJ2objcSecurityIosMD5MessageDigest_init(ComGoogleJ2objcSecurityIosMD5MessageDigest *self);

FOUNDATION_EXPORT ComGoogleJ2objcSecurityIosMD5MessageDigest *new_ComGoogleJ2objcSecurityIosMD5MessageDigest_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcSecurityIosMD5MessageDigest)

#endif // _ComGoogleJ2objcSecurityIosMD5MessageDigest_H_