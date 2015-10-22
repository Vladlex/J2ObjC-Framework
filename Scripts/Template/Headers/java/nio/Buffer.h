//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/Buffer.java
//

#ifndef _JavaNioBuffer_H_
#define _JavaNioBuffer_H_

#include "../../J2ObjC_header.h"

#define JavaNioBuffer_UNSET_MARK -1

/*!
 @brief A buffer is a list of elements of a specific primitive type.
 <p>
 A buffer can be described by the following properties:
 <ul>
 <li>Capacity: the number of elements a buffer can hold. Capacity may not be
 negative and never changes.</li>
 <li>Position: a cursor of this buffer. Elements are read or written at the
 position if you do not specify an index explicitly. Position may not be
 negative and not greater than the limit.</li>
 <li>Limit: controls the scope of accessible elements. You can only read or
 write elements from index zero to <code>limit - 1</code>. Accessing
 elements out of the scope will cause an exception. Limit may not be negative
 and not greater than capacity.</li>
 <li>Mark: used to remember the current position, so that you can reset the
 position later. Mark may not be negative and no greater than position.</li>
 <li>A buffer can be read-only or read-write. Trying to modify the elements
 of a read-only buffer will cause a <code>ReadOnlyBufferException</code>,
 while changing the position, limit and mark of a read-only buffer is OK.</li>
 <li>A buffer can be direct or indirect. A direct buffer will try its best to
 take advantage of native memory APIs and it may not stay in the Java heap,
 thus it is not affected by garbage collection.</li>
 </ul>
 <p>
 Buffers are not thread-safe. If concurrent access to a buffer instance is
 required, then the callers are responsible to take care of the
 synchronization issues.
 */
@interface JavaNioBuffer : NSObject {
 @public
  /*!
   @brief The capacity of this buffer, which never changes.
   */
  jint capacity_;
  /*!
   @brief <code>limit - 1</code> is the last element that can be read or written.
   Limit must be no less than zero and no greater than <code>capacity</code>.
   */
  jint limit_;
  /*!
   @brief Mark is where position will be set when <code>reset()</code> is called.
   Mark is not set by default. Mark is always no less than zero and no
 greater than <code>position</code>.
   */
  jint mark_;
  /*!
   @brief The current position of this buffer.
   Position is always no less than zero
 and no greater than <code>limit</code>.
   */
  jint position_;
  /*!
   @brief The log base 2 of the element size of this buffer.
   Each typed subclass
 (ByteBuffer, CharBuffer, etc.) is responsible for initializing this
 value.  The value is used by JNI code in frameworks/base/ to avoid the
 need for costly 'instanceof' tests.
   */
  jint _elementSizeShift_;
  /*!
   @brief For direct buffers, the effective address of the data; zero otherwise.
   This is set in the constructor.
   */
  jlong effectiveDirectAddress_;
}

#pragma mark Public

/*!
 @brief Returns the array that backs this buffer (optional operation).
 The returned value is the actual array, not a copy, so modifications
 to the array write through to the buffer.
 <p>Subclasses should override this method with a covariant return type
 to provide the exact type of the array.
 <p>Use <code>hasArray</code> to ensure this method won't throw.
 (A separate call to <code>isReadOnly</code> is not necessary.)
 @return the array
 @throws ReadOnlyBufferException if the buffer is read-only
 UnsupportedOperationException if the buffer does not expose an array
 @since 1.6
 */
- (id)array;

/*!
 @brief Returns the offset into the array returned by <code>array</code> of the first
 element of the buffer (optional operation).
 The backing array (if there is one)
 is not necessarily the same size as the buffer, and position 0 in the buffer is
 not necessarily the 0th element in the array. Use
 <code>buffer.array()[offset + buffer.arrayOffset()</code> to access element <code>offset</code>
 in <code>buffer</code>.
 <p>Use <code>hasArray</code> to ensure this method won't throw.
 (A separate call to <code>isReadOnly</code> is not necessary.)
 @return the offset
 @throws ReadOnlyBufferException if the buffer is read-only
 UnsupportedOperationException if the buffer does not expose an array
 @since 1.6
 */
- (jint)arrayOffset;

/*!
 @brief Returns the capacity of this buffer.
 @return the number of elements that are contained in this buffer.
 */
- (jint)capacity;

/*!
 @brief Clears this buffer.
 <p>
 While the content of this buffer is not changed, the following internal
 changes take place: the current position is reset back to the start of
 the buffer, the value of the buffer limit is made equal to the capacity
 and mark is cleared.
 @return this buffer.
 */
- (JavaNioBuffer *)clear;

/*!
 @brief Flips this buffer.
 <p>
 The limit is set to the current position, then the position is set to
 zero, and the mark is cleared.
 <p>
 The content of this buffer is not changed.
 @return this buffer.
 */
- (JavaNioBuffer *)flip;

/*!
  for testing only 
 */
- (jint)getElementSizeShift;

/*!
 @brief Returns true if <code>array</code> and <code>arrayOffset</code> won't throw.
 This method does not
 return true for buffers not backed by arrays because the other methods would throw
 <code>UnsupportedOperationException</code>, nor does it return true for buffers backed by
 read-only arrays, because the other methods would throw <code>ReadOnlyBufferException</code>.
 @since 1.6
 */
- (jboolean)hasArray;

/*!
 @brief Indicates if there are elements remaining in this buffer, that is if
 <code>position < limit</code>.
 @return <code>true</code> if there are elements remaining in this buffer,
 <code>false</code> otherwise.
 */
- (jboolean)hasRemaining;

/*!
 @brief Returns true if this is a direct buffer.
 @since 1.6
 */
- (jboolean)isDirect;

/*!
 @brief Indicates whether this buffer is read-only.
 @return <code>true</code> if this buffer is read-only, <code>false</code>
 otherwise.
 */
- (jboolean)isReadOnly;

/*!
 @brief Returns the limit of this buffer.
 @return the limit of this buffer.
 */
- (jint)limit;

/*!
 @brief Sets the limit of this buffer.
 <p>
 If the current position in the buffer is in excess of
 <code>newLimit</code> then, on returning from this call, it will have
 been adjusted to be equivalent to <code>newLimit</code>. If the mark
 is set and is greater than the new limit, then it is cleared.
 @param newLimit
 the new limit, must not be negative and not greater than
 capacity.
 @return this buffer.
 @throws IllegalArgumentException
 if <code>newLimit</code> is invalid.
 */
- (JavaNioBuffer *)limitWithInt:(jint)newLimit;

/*!
 @brief Marks the current position, so that the position may return to this point
 later by calling <code>reset()</code>.
 @return this buffer.
 */
- (JavaNioBuffer *)mark;

/*!
 @brief Returns the position of this buffer.
 @return the value of this buffer's current position.
 */
- (jint)position;

/*!
 @brief Sets the position of this buffer.
 <p>
 If the mark is set and it is greater than the new position, then it is
 cleared.
 @param newPosition
 the new position, must be not negative and not greater than
 limit.
 @return this buffer.
 @throws IllegalArgumentException
 if <code>newPosition</code> is invalid.
 */
- (JavaNioBuffer *)positionWithInt:(jint)newPosition;

/*!
 @brief Returns the number of remaining elements in this buffer, that is
 <code>limit - position</code>.
 @return the number of remaining elements in this buffer.
 */
- (jint)remaining;

/*!
 @brief Resets the position of this buffer to the <code>mark</code>.
 @return this buffer.
 @throws InvalidMarkException
 if the mark is not set.
 */
- (JavaNioBuffer *)reset;

/*!
 @brief Rewinds this buffer.
 <p>
 The position is set to zero, and the mark is cleared. The content of this
 buffer is not changed.
 @return this buffer.
 */
- (JavaNioBuffer *)rewind;

/*!
 @brief Returns a string describing this buffer.
 */
- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)elementSizeShift
                    withInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

- (jint)checkGetBoundsWithInt:(jint)bytesPerElement
                      withInt:(jint)length
                      withInt:(jint)offset
                      withInt:(jint)count;

/*!
 @brief Used for the scalar get/put operations.
 */
- (void)checkIndexWithInt:(jint)index;

/*!
 @brief Used for the ByteBuffer operations that get types larger than a byte.
 */
- (void)checkIndexWithInt:(jint)index
                  withInt:(jint)sizeOfType;

- (jint)checkPutBoundsWithInt:(jint)bytesPerElement
                      withInt:(jint)length
                      withInt:(jint)offset
                      withInt:(jint)count;

- (void)checkStartEndRemainingWithInt:(jint)start
                              withInt:(jint)end;

- (void)checkWritable;

- (void)positionImplWithInt:(jint)newPosition;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioBuffer)

J2OBJC_STATIC_FIELD_GETTER(JavaNioBuffer, UNSET_MARK, jint)

FOUNDATION_EXPORT void JavaNioBuffer_initWithInt_withInt_withLong_(JavaNioBuffer *self, jint elementSizeShift, jint capacity, jlong effectiveDirectAddress);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioBuffer)

#endif // _JavaNioBuffer_H_