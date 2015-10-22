//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertificateNotYetValidException.java
//

#ifndef _JavaSecurityCertCertificateNotYetValidException_H_
#define _JavaSecurityCertCertificateNotYetValidException_H_

#include "../../../J2ObjC_header.h"
#include "../../../java/security/cert/CertificateException.h"

/*!
 @brief The exception that is thrown when a <code>Certificate</code> is not yet valid or
 will not yet be valid on a specified date.
 */
@interface JavaSecurityCertCertificateNotYetValidException : JavaSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Creates a new <code>CertificateNotYetValidException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertificateNotYetValidException</code> with the specified
 message.
 @param msg
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateNotYetValidException)

FOUNDATION_EXPORT void JavaSecurityCertCertificateNotYetValidException_initWithNSString_(JavaSecurityCertCertificateNotYetValidException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityCertCertificateNotYetValidException *new_JavaSecurityCertCertificateNotYetValidException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaSecurityCertCertificateNotYetValidException_init(JavaSecurityCertCertificateNotYetValidException *self);

FOUNDATION_EXPORT JavaSecurityCertCertificateNotYetValidException *new_JavaSecurityCertCertificateNotYetValidException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateNotYetValidException)

#endif // _JavaSecurityCertCertificateNotYetValidException_H_