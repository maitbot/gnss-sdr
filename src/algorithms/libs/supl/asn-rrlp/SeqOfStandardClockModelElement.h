/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef	_SeqOfStandardClockModelElement_H_
#define	_SeqOfStandardClockModelElement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct StandardClockModelElement;

/* SeqOfStandardClockModelElement */
typedef struct SeqOfStandardClockModelElement {
	A_SEQUENCE_OF(struct StandardClockModelElement) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SeqOfStandardClockModelElement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SeqOfStandardClockModelElement;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "StandardClockModelElement.h"

#endif	/* _SeqOfStandardClockModelElement_H_ */
#include <asn_internal.h>
