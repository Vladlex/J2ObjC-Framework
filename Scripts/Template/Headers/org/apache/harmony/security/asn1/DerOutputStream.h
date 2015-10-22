//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/apache/harmony/security/asn1/DerOutputStream.java
//

#ifndef _OrgApacheHarmonySecurityAsn1DerOutputStream_H_
#define _OrgApacheHarmonySecurityAsn1DerOutputStream_H_

#include "../../../../../J2ObjC_header.h"
#include "../../../../../org/apache/harmony/security/asn1/BerOutputStream.h"

@class OrgApacheHarmonySecurityAsn1ASN1Choice;
@class OrgApacheHarmonySecurityAsn1ASN1Explicit;
@class OrgApacheHarmonySecurityAsn1ASN1Sequence;
@class OrgApacheHarmonySecurityAsn1ASN1SequenceOf;
@class OrgApacheHarmonySecurityAsn1ASN1SetOf;
@class OrgApacheHarmonySecurityAsn1ASN1Type;

/*!
 @author Vladimir N. Molotkov, Stepan M. Mishura
 @version $Revision$
 */

/*!
 @brief Encodes ASN.1 types with DER (X.690)
 */
@interface OrgApacheHarmonySecurityAsn1DerOutputStream : OrgApacheHarmonySecurityAsn1BerOutputStream

#pragma mark Public

- (instancetype)initWithOrgApacheHarmonySecurityAsn1ASN1Type:(OrgApacheHarmonySecurityAsn1ASN1Type *)asn1
                                                      withId:(id)object;

- (void)encodeChoiceWithOrgApacheHarmonySecurityAsn1ASN1Choice:(OrgApacheHarmonySecurityAsn1ASN1Choice *)choice;

- (void)encodeExplicitWithOrgApacheHarmonySecurityAsn1ASN1Explicit:(OrgApacheHarmonySecurityAsn1ASN1Explicit *)explicit_;

- (void)encodeSequenceWithOrgApacheHarmonySecurityAsn1ASN1Sequence:(OrgApacheHarmonySecurityAsn1ASN1Sequence *)sequence;

- (void)encodeSequenceOfWithOrgApacheHarmonySecurityAsn1ASN1SequenceOf:(OrgApacheHarmonySecurityAsn1ASN1SequenceOf *)sequenceOf;

- (void)encodeSetOfWithOrgApacheHarmonySecurityAsn1ASN1SetOf:(OrgApacheHarmonySecurityAsn1ASN1SetOf *)setOf;

- (void)getChoiceLengthWithOrgApacheHarmonySecurityAsn1ASN1Choice:(OrgApacheHarmonySecurityAsn1ASN1Choice *)choice;

- (void)getExplicitLengthWithOrgApacheHarmonySecurityAsn1ASN1Explicit:(OrgApacheHarmonySecurityAsn1ASN1Explicit *)explicit_;

- (void)getSequenceLengthWithOrgApacheHarmonySecurityAsn1ASN1Sequence:(OrgApacheHarmonySecurityAsn1ASN1Sequence *)sequence;

- (void)getSequenceOfLengthWithOrgApacheHarmonySecurityAsn1ASN1SequenceOf:(OrgApacheHarmonySecurityAsn1ASN1SequenceOf *)sequence;

- (void)getSetOfLengthWithOrgApacheHarmonySecurityAsn1ASN1SetOf:(OrgApacheHarmonySecurityAsn1ASN1SetOf *)setOf;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheHarmonySecurityAsn1DerOutputStream)

FOUNDATION_EXPORT void OrgApacheHarmonySecurityAsn1DerOutputStream_initWithOrgApacheHarmonySecurityAsn1ASN1Type_withId_(OrgApacheHarmonySecurityAsn1DerOutputStream *self, OrgApacheHarmonySecurityAsn1ASN1Type *asn1, id object);

FOUNDATION_EXPORT OrgApacheHarmonySecurityAsn1DerOutputStream *new_OrgApacheHarmonySecurityAsn1DerOutputStream_initWithOrgApacheHarmonySecurityAsn1ASN1Type_withId_(OrgApacheHarmonySecurityAsn1ASN1Type *asn1, id object) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheHarmonySecurityAsn1DerOutputStream)

#endif // _OrgApacheHarmonySecurityAsn1DerOutputStream_H_