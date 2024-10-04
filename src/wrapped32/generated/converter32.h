// Manually created for now
#ifndef __CONVERTER_H_
#define __CONVERTER_H_

#include "box32.h"

typedef struct struct_p_s {
	void *p0;
} struct_p_t;
void from_struct_p(struct_p_t *dest, ptr_t src);
void to_struct_p(ptr_t dest, const struct_p_t *src);
typedef struct struct_l_s {
	long L0;
} struct_l_t;
void from_struct_l(struct_l_t *dest, ptr_t src);
void to_struct_l(ptr_t dest, const struct_l_t *src);
typedef struct struct_L_s {
	unsigned long L0;
} struct_L_t;
void from_struct_L(struct_L_t *dest, ptr_t src);
void to_struct_L(ptr_t dest, const struct_L_t *src);
typedef struct struct_ll_s {
	long L0;
	long L1;
} struct_ll_t;
void from_struct_ll(struct_ll_t *dest, ptr_t src);
void to_struct_ll(ptr_t dest, const struct_ll_t *src);
typedef struct struct_LL_s {
	unsigned long L0;
	unsigned long L1;
} struct_LL_t;
void from_struct_LL(struct_LL_t *dest, ptr_t src);
void to_struct_LL(ptr_t dest, const struct_LL_t *src);
typedef struct struct_LC_s {
	unsigned long L0;
	uint8_t C1;
} struct_LC_t;
void from_struct_LC(struct_LC_t *dest, ptr_t src);
void to_struct_LC(ptr_t dest, const struct_LC_t *src);
typedef struct struct_liu_s {
	long l0;
	int i1;
	uint32_t u2;
} struct_liu_t;
void from_struct_liu(struct_liu_t *dest, ptr_t src);
void to_struct_liu(ptr_t dest, const struct_liu_t *src);
typedef struct struct_llll_s {
	long l0;
	long l1;
	long l2;
	long l3;
} struct_llll_t;
void from_struct_llll(struct_llll_t *dest, ptr_t src);
void to_struct_llll(ptr_t dest, const struct_llll_t *src);
typedef struct struct_LLLL_s {
	unsigned long L0;
	unsigned long L1;
	unsigned long L2;
	unsigned long L3;
} struct_LLLL_t;
void from_struct_LLLL(struct_LLLL_t *dest, ptr_t src);
void to_struct_LLLL(ptr_t dest, const struct_LLLL_t *src);
typedef struct struct_LLLLLLLLLLLLLLLLLL_s {
	unsigned long L0;
	unsigned long L1;
	unsigned long L2;
	unsigned long L3;
	unsigned long L4;
	unsigned long L5;
	unsigned long L6;
	unsigned long L7;
	unsigned long L8;
	unsigned long L9;
	unsigned long L10;
	unsigned long L11;
	unsigned long L12;
	unsigned long L13;
	unsigned long L14;
	unsigned long L15;
	unsigned long L16;
	unsigned long L17;
} struct_LLLLLLLLLLLLLLLLLL_t;
void from_struct_LLLLLLLLLLLLLLLLLL(struct_LLLLLLLLLLLLLLLLLL_t *dest, ptr_t src);
void to_struct_LLLLLLLLLLLLLLLLLL(ptr_t dest, const struct_LLLLLLLLLLLLLLLLLL_t *src);
typedef struct struct_h_s {
	uintptr_t h0;
} struct_h_t;
void from_struct_h(struct_h_t *dest, ptr_t src);
void to_struct_h(ptr_t dest, const struct_h_t *src);
typedef struct struct_H_s {
	uintptr_t H0;
} struct_H_t;
void from_struct_H(struct_H_t *dest, ptr_t src);
void to_struct_H(ptr_t dest, const struct_H_t *src);
typedef struct struct_ppppp_s {
	void* p0;
	void* p1;
	void* p2;
	void* p3;
	void* p4;
} struct_ppppp_t;
void from_struct_ppppp(struct_ppppp_t *dest, ptr_t src);
void to_struct_ppppp(ptr_t dest, const struct_ppppp_t *src);
typedef struct struct_iiiiiiiiilt_s {
	int i0;
	int i1;
	int i2;
	int i3;
	int i4;
	int i5;
	int i6;
	int i7;
	int i8;
	long l9;
	void* p10;
} struct_iiiiiiiiilt_t;
void from_struct_iiiiiiiiilt(struct_iiiiiiiiilt_t* dest, ptr_t src);
void to_struct_iiiiiiiiilt(ptr_t dest, const struct_iiiiiiiiilt_t* src);
typedef struct struct_up_s {
	uint32_t u0;
	void* p1;
} struct_up_t;
void from_struct_up(struct_up_t *dest, ptr_t src);
void to_struct_up(ptr_t dest, const struct_up_t *src);
typedef struct struct_LWWWcc_s {
	unsigned long L0;
	unsigned short W1;
	unsigned short W2;
	unsigned short W3;
	char c4;
	char c5;
} struct_LWWWcc_t;
void from_struct_LWWWcc(struct_LWWWcc_t *dest, ptr_t src);
void to_struct_LWWWcc(ptr_t dest, const struct_LWWWcc_t *src);
typedef struct struct_pLiL_s {
	void* p0;
	unsigned long L1;
	int i2;
	unsigned long L3;
} struct_pLiL_t;
void from_struct_pLiL(struct_pLiL_t *dest, ptr_t src);
void to_struct_pLiL(ptr_t dest, const struct_pLiL_t *src);
typedef struct struct_Lipi_s {
	unsigned long L0;
	int i1;
	void* p2;
	int i3;
} struct_Lipi_t;
void from_struct_Lipi(struct_Lipi_t *dest, ptr_t src);
void to_struct_Lipi(ptr_t dest, const struct_Lipi_t *src);
typedef struct struct_LLii_s {
	unsigned long L0;
	unsigned long L1;
	int i2;
	int i3;
} struct_LLii_t;
void from_struct_LLii(struct_LLii_t *dest, ptr_t src);
void to_struct_LLii(ptr_t dest, const struct_LLii_t *src);
typedef struct struct_uuipWCCp_s {
	uint32_t u0;
	uint32_t u1;
	int i2;
	void* p3;
	uint16_t u4;
	uint8_t u5;
	uint8_t u6;
	void* p7;
} struct_uuipWCCp_t;
void from_struct_uuipWCCp(struct_uuipWCCp_t *dest, ptr_t src);
void to_struct_uuipWCCp(ptr_t dest, const struct_uuipWCCp_t *src);
typedef struct struct_pLiLLLii_s {
	void* p0;
	unsigned long L1;
	int i2;
	unsigned long L3;
	unsigned long L4;
	unsigned long L5;
	int i6;
	int i7;
} struct_pLiLLLii_t;
void from_struct_pLiLLLii(struct_pLiLLLii_t *dest, ptr_t src);
void to_struct_pLiLLLii(ptr_t dest, const struct_pLiLLLii_t *src);
typedef struct struct_WWpWpWpWp_s {
	uint16_t W0;
	uint16_t W1;
	void* p2;
	uint16_t W3;
	void* p4;
	uint16_t W5;
	void* p6;
	uint16_t W7;
	void* p8;
} struct_WWpWpWpWp_t;
void from_struct_WWpWpWpWp(struct_WWpWpWpWp_t *dest, ptr_t src);
void to_struct_WWpWpWpWp(ptr_t dest, const struct_WWpWpWpWp_t *src);

#endif // __CONVERTER_H_
