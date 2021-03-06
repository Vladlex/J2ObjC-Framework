//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertPathValidatorException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertPathValidatorException")
#ifdef RESTRICT_JavaSecurityCertCertPathValidatorException
#define INCLUDE_ALL_JavaSecurityCertCertPathValidatorException 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertPathValidatorException 1
#endif
#undef RESTRICT_JavaSecurityCertCertPathValidatorException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCertPathValidatorException_) && (INCLUDE_ALL_JavaSecurityCertCertPathValidatorException || defined(INCLUDE_JavaSecurityCertCertPathValidatorException))
#define JavaSecurityCertCertPathValidatorException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../../java/security/GeneralSecurityException.h"

@class JavaSecurityCertCertPath;

/*!
 @brief The exception that is thrown when a certification path (or certificate chain)
 cannot be validated.
 <p>
 A <code>CertPathValidatorException</code> may optionally include the certification
 path instance that failed the validation and the index of the failed
 certificate.
 */
@interface JavaSecurityCertCertPathValidatorException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Creates a new <code>CertPathValidatorException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertPathValidatorException</code> with the specified
 message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a new <code>CertPathValidatorException</code> with the specified
 message and cause.
 @param msg
 the detail message for this exception.
 @param cause
 the cause why the path could not be validated.
 */
- (instancetype)initWithNSString:(NSString *)msg
                 withNSException:(NSException *)cause;

/*!
 @brief Creates a new <code>CertPathValidatorException</code> with the specified
 message , cause, certification path and certificate index in the
 certification path.
 @param msg
 the detail message for this exception.
 @param cause
 the cause.
 @param certPath
 the certification path that failed the validation.
 @param index
 the index of the failed certificate.
 @throws IllegalArgumentException
 if <code>certPath</code> is <code>null</code> and index is not <code>-1</code>
 .
 @throws IndexOutOfBoundsException
 if <code>certPath</code> is not <code>null</code> and index is not
 referencing an certificate in the certification path.
 */
- (instancetype)initWithNSString:(NSString *)msg
                 withNSException:(NSException *)cause
    withJavaSecurityCertCertPath:(JavaSecurityCertCertPath *)certPath
                         withInt:(jint)index;

/*!
 @brief Creates a new <code>CertPathValidatorException</code> with the specified
 cause.
 @param cause
 the cause why the path could not be validated.
 */
- (instancetype)initWithNSException:(NSException *)cause;

/*!
 @brief Returns the certification path that failed validation.
 @return the certification path that failed validation, or <code>null</code> if
 none was specified.
 */
- (JavaSecurityCertCertPath *)getCertPath;

/*!
 @brief Returns the index of the failed certificate in the certification path.
 @return the index of the failed certificate in the certification path, or
 <code>-1</code> if none was specified.
 */
- (jint)getIndex;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathValidatorException)

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_initWithNSString_withNSException_withJavaSecurityCertCertPath_withInt_(JavaSecurityCertCertPathValidatorException *self, NSString *msg, NSException *cause, JavaSecurityCertCertPath *certPath, jint index);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_initWithNSString_withNSException_withJavaSecurityCertCertPath_withInt_(NSString *msg, NSException *cause, JavaSecurityCertCertPath *certPath, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *create_JavaSecurityCertCertPathValidatorException_initWithNSString_withNSException_withJavaSecurityCertCertPath_withInt_(NSString *msg, NSException *cause, JavaSecurityCertCertPath *certPath, jint index);

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_initWithNSString_withNSException_(JavaSecurityCertCertPathValidatorException *self, NSString *msg, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_initWithNSString_withNSException_(NSString *msg, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *create_JavaSecurityCertCertPathValidatorException_initWithNSString_withNSException_(NSString *msg, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_initWithNSException_(JavaSecurityCertCertPathValidatorException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *create_JavaSecurityCertCertPathValidatorException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_initWithNSString_(JavaSecurityCertCertPathValidatorException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *create_JavaSecurityCertCertPathValidatorException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorException_init(JavaSecurityCertCertPathValidatorException *self);

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *new_JavaSecurityCertCertPathValidatorException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertPathValidatorException *create_JavaSecurityCertCertPathValidatorException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathValidatorException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertPathValidatorException")
