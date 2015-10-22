//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/security/cert/CertificateExpiredException.java
//

#ifndef _JavaxSecurityCertCertificateExpiredException_H_
#define _JavaxSecurityCertCertificateExpiredException_H_

#include "../../../J2ObjC_header.h"
#include "../../../javax/security/cert/CertificateException.h"

/*!
 @brief The exception that is thrown when a <code>Certificate</code> has expired.
 <p>
 Note: This package is provided only for compatibility reasons. It contains a
 simplified version of the java.security.cert package that was previously used
 by JSSE (Java SSL package). All applications that do not have to be
 compatible with older versions of JSSE (that is before Java SDK 1.5) should
 only use java.security.cert.
 */
@interface JavaxSecurityCertCertificateExpiredException : JavaxSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Creates a new <code>CertificateExpiredException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertificateExpiredException</code> with the specified
 message.
 @param msg
 the detail message for this exception
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxSecurityCertCertificateExpiredException)

FOUNDATION_EXPORT void JavaxSecurityCertCertificateExpiredException_initWithNSString_(JavaxSecurityCertCertificateExpiredException *self, NSString *msg);

FOUNDATION_EXPORT JavaxSecurityCertCertificateExpiredException *new_JavaxSecurityCertCertificateExpiredException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT void JavaxSecurityCertCertificateExpiredException_init(JavaxSecurityCertCertificateExpiredException *self);

FOUNDATION_EXPORT JavaxSecurityCertCertificateExpiredException *new_JavaxSecurityCertCertificateExpiredException_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaxSecurityCertCertificateExpiredException)

#endif // _JavaxSecurityCertCertificateExpiredException_H_