//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/DuplicateFormatFlagsException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilDuplicateFormatFlagsException")
#ifdef RESTRICT_JavaUtilDuplicateFormatFlagsException
#define INCLUDE_ALL_JavaUtilDuplicateFormatFlagsException 0
#else
#define INCLUDE_ALL_JavaUtilDuplicateFormatFlagsException 1
#endif
#undef RESTRICT_JavaUtilDuplicateFormatFlagsException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilDuplicateFormatFlagsException_) && (INCLUDE_ALL_JavaUtilDuplicateFormatFlagsException || defined(INCLUDE_JavaUtilDuplicateFormatFlagsException))
#define JavaUtilDuplicateFormatFlagsException_

#define RESTRICT_JavaUtilIllegalFormatException 1
#define INCLUDE_JavaUtilIllegalFormatException 1
#include "../../java/util/IllegalFormatException.h"

/*!
 @brief The unchecked exception will be thrown out if there are duplicate flags given
 out in the format specifier.
 - seealso: java.lang.RuntimeException
 */
@interface JavaUtilDuplicateFormatFlagsException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs a new <code>DuplicateFormatFlagsException</code> with the flags
 containing duplicates.
 @param f
 the format flags that contain a duplicate flag.
 */
- (instancetype)initWithNSString:(NSString *)f;

/*!
 @brief Returns the format flags that contain a duplicate flag.
 @return the format flags that contain a duplicate flag.
 */
- (NSString *)getFlags;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilDuplicateFormatFlagsException)

FOUNDATION_EXPORT void JavaUtilDuplicateFormatFlagsException_initWithNSString_(JavaUtilDuplicateFormatFlagsException *self, NSString *f);

FOUNDATION_EXPORT JavaUtilDuplicateFormatFlagsException *new_JavaUtilDuplicateFormatFlagsException_initWithNSString_(NSString *f) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilDuplicateFormatFlagsException *create_JavaUtilDuplicateFormatFlagsException_initWithNSString_(NSString *f);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilDuplicateFormatFlagsException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilDuplicateFormatFlagsException")
