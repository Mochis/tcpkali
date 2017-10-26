/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "TcpkaliOrchestration"
 * 	found in "tcpkali_orchestration.asn1"
 * 	`asn1c -gen-OER -gen-PER -pdu=TcpkaliMessage`
 */

#ifndef	_TcpkaliMessage_H_
#define	_TcpkaliMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IncreaseRatePercent.h"
#include "DecreaseRatePercent.h"
#include "SetRate.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TcpkaliMessage_PR {
	TcpkaliMessage_PR_NOTHING,	/* No components present */
	TcpkaliMessage_PR_increaseRatePercent,
	TcpkaliMessage_PR_decreaseRatePercent,
	TcpkaliMessage_PR_setRate
} TcpkaliMessage_PR;

/* TcpkaliMessage */
typedef struct TcpkaliMessage {
	TcpkaliMessage_PR present;
	union TcpkaliMessage_u {
		IncreaseRatePercent_t	 increaseRatePercent;
		DecreaseRatePercent_t	 decreaseRatePercent;
		SetRate_t	 setRate;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TcpkaliMessage_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TcpkaliMessage;

#ifdef __cplusplus
}
#endif

#endif	/* _TcpkaliMessage_H_ */
#include <asn_internal.h>
