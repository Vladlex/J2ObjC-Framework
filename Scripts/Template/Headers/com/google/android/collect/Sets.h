//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/com/google/android/collect/Sets.java
//

#ifndef _ComGoogleAndroidCollectSets_H_
#define _ComGoogleAndroidCollectSets_H_

#include "../../../../J2ObjC_header.h"

@class AndroidUtilArraySet;
@class IOSObjectArray;
@class JavaUtilHashSet;
@protocol JavaUtilSortedSet;

/*!
 @brief Provides static methods for creating mutable <code>Set</code> instances easily and
 other static methods for working with Sets.
 */
@interface ComGoogleAndroidCollectSets : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Creates a <code>ArraySet</code> instance.
 */
+ (AndroidUtilArraySet *)newArraySet OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>ArraySet</code> instance containing the given elements.
 */
+ (AndroidUtilArraySet *)newArraySetWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>HashSet</code> instance.
 <p><b>Note:</b> if <code>E</code> is an <code>Enum</code> type, use <code>EnumSet.noneOf</code>
  instead.
 <p><b>Note:</b> if you only need an <i>immutable</i> empty Set, 
 use <code>Collections.emptySet</code> instead.
 @return a newly-created, initially-empty <code>HashSet</code>
 */
+ (JavaUtilHashSet *)newHashSet OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>HashSet</code> instance containing the given elements.
 <p><b>Note:</b> due to a bug in javac 1.5.0_06, we cannot support the
 following:
 <p><code>Set<Base> set = Sets.newHashSet(sub1, sub2);</code>
 <p>where <code>sub1</code> and <code>sub2</code> are references to subtypes of <code>Base</code>
 , not of <code>Base</code> itself. To get around this, you must use:
 <p><code>Set<Base> set = Sets.<Base>newHashSet(sub1, sub2);</code>
 @param elements the elements that the set should contain
 @return a newly-created <code>HashSet</code> containing those elements (minus
 duplicates)
 */
+ (JavaUtilHashSet *)newHashSetWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates an empty <code>SortedSet</code> instance.
 @return a newly-created, initially-empty <code>SortedSet</code>.
 */
+ (id<JavaUtilSortedSet>)newSortedSet OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a <code>SortedSet</code> instance containing the given elements.
 @param elements the elements that the set should contain
 @return a newly-created <code>SortedSet</code> containing those elements (minus
 duplicates)
 */
+ (id<JavaUtilSortedSet>)newSortedSetWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleAndroidCollectSets)

FOUNDATION_EXPORT JavaUtilHashSet *ComGoogleAndroidCollectSets_newHashSet();

FOUNDATION_EXPORT JavaUtilHashSet *ComGoogleAndroidCollectSets_newHashSetWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT id<JavaUtilSortedSet> ComGoogleAndroidCollectSets_newSortedSet();

FOUNDATION_EXPORT id<JavaUtilSortedSet> ComGoogleAndroidCollectSets_newSortedSetWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT AndroidUtilArraySet *ComGoogleAndroidCollectSets_newArraySet();

FOUNDATION_EXPORT AndroidUtilArraySet *ComGoogleAndroidCollectSets_newArraySetWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT void ComGoogleAndroidCollectSets_init(ComGoogleAndroidCollectSets *self);

FOUNDATION_EXPORT ComGoogleAndroidCollectSets *new_ComGoogleAndroidCollectSets_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleAndroidCollectSets)

#endif // _ComGoogleAndroidCollectSets_H_