/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "../rrlp-components.asn"
 */

#ifndef	_Rel7_MsrPosition_Req_Extension_H_
#define	_Rel7_MsrPosition_Req_Extension_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "GANSSPositioningMethod.h"
#include "RequiredResponseTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct GANSS_AssistData;

/* Rel7-MsrPosition-Req-Extension */
typedef struct Rel7_MsrPosition_Req_Extension {
	NULL_t	*velocityRequested	/* OPTIONAL */;
	GANSSPositioningMethod_t	*ganssPositionMethod	/* OPTIONAL */;
	struct GANSS_AssistData	*ganss_AssistData	/* OPTIONAL */;
	NULL_t	*ganssCarrierPhaseMeasurementRequest	/* OPTIONAL */;
	NULL_t	*ganssTODGSMTimeAssociationMeasurementRequest	/* OPTIONAL */;
	RequiredResponseTime_t	*requiredResponseTime	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Rel7_MsrPosition_Req_Extension_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Rel7_MsrPosition_Req_Extension;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "GANSS-AssistData.h"

#endif	/* _Rel7_MsrPosition_Req_Extension_H_ */
#include <asn_internal.h>
