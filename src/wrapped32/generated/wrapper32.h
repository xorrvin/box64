/******************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.1.1) *
 ******************************************************************/
#ifndef __WRAPPER32_H_
#define __WRAPPER32_H_
#include <stdint.h>
#include <string.h>

typedef struct x64emu_s x64emu_t;

// the generic wrapper pointer functions
typedef void (*wrapper_t)(x64emu_t* emu, uintptr_t fnc);

// list of defined wrappers
// E = current x64emu struct
// v = void
// C = unsigned byte c = char
// W = unsigned short w = short
// u = uint32, i = int32
// U = uint64, I = int64
// L = unsigned long, l = signed long (long is an int with the size of a pointer)
// p = pointer
// h = hash (32<->64bits)
// H = hash (32<->64bits) that will be deleted from hashmaps
// a = locale
// A = locale that will be deleted from hashmaps
// f = float, d = double, D = long double, K = fake long double
// V = vaargs, s = address on the stack (doesn't move forward the pointer)
// O = libc O_ flags bitfield
// o = stdout
// S = _IO_2_1_stdXXX_ pointer (or FILE*)
// 2 = struct of 2 uint
// N = ... automatically sending 1 arg
// M = ... automatically sending 2 args
// P = Vulkan struct pointer
// r..._ = pointer to read-only structure
// B..._ = pointer to write-only structure
// b..._ = pointer to read-write structure
// t = char* as a return value (copies to a lower address if the return address is too high)

void vFv_32(x64emu_t *emu, uintptr_t fnc);
void vFi_32(x64emu_t *emu, uintptr_t fnc);
void vFu_32(x64emu_t *emu, uintptr_t fnc);
void vFp_32(x64emu_t *emu, uintptr_t fnc);
void vFh_32(x64emu_t *emu, uintptr_t fnc);
void vFA_32(x64emu_t *emu, uintptr_t fnc);
void iFv_32(x64emu_t *emu, uintptr_t fnc);
void iFi_32(x64emu_t *emu, uintptr_t fnc);
void iFI_32(x64emu_t *emu, uintptr_t fnc);
void iFu_32(x64emu_t *emu, uintptr_t fnc);
void iFf_32(x64emu_t *emu, uintptr_t fnc);
void iFd_32(x64emu_t *emu, uintptr_t fnc);
void iFL_32(x64emu_t *emu, uintptr_t fnc);
void iFp_32(x64emu_t *emu, uintptr_t fnc);
void iFh_32(x64emu_t *emu, uintptr_t fnc);
void iFH_32(x64emu_t *emu, uintptr_t fnc);
void IFf_32(x64emu_t *emu, uintptr_t fnc);
void IFd_32(x64emu_t *emu, uintptr_t fnc);
void uFv_32(x64emu_t *emu, uintptr_t fnc);
void uFu_32(x64emu_t *emu, uintptr_t fnc);
void uFU_32(x64emu_t *emu, uintptr_t fnc);
void UFs_32(x64emu_t *emu, uintptr_t fnc);
void fFf_32(x64emu_t *emu, uintptr_t fnc);
void dFv_32(x64emu_t *emu, uintptr_t fnc);
void dFd_32(x64emu_t *emu, uintptr_t fnc);
void lFi_32(x64emu_t *emu, uintptr_t fnc);
void lFp_32(x64emu_t *emu, uintptr_t fnc);
void LFv_32(x64emu_t *emu, uintptr_t fnc);
void LFL_32(x64emu_t *emu, uintptr_t fnc);
void LFp_32(x64emu_t *emu, uintptr_t fnc);
void pFv_32(x64emu_t *emu, uintptr_t fnc);
void pFi_32(x64emu_t *emu, uintptr_t fnc);
void pFu_32(x64emu_t *emu, uintptr_t fnc);
void pFL_32(x64emu_t *emu, uintptr_t fnc);
void pFp_32(x64emu_t *emu, uintptr_t fnc);
void hFv_32(x64emu_t *emu, uintptr_t fnc);
void aFa_32(x64emu_t *emu, uintptr_t fnc);
void tFi_32(x64emu_t *emu, uintptr_t fnc);
void tFp_32(x64emu_t *emu, uintptr_t fnc);
void LFrL__32(x64emu_t *emu, uintptr_t fnc);
void pFrL__32(x64emu_t *emu, uintptr_t fnc);
void LFriiiiiiiiilt__32(x64emu_t *emu, uintptr_t fnc);
void vFEv_32(x64emu_t *emu, uintptr_t fnc);
void vFEp_32(x64emu_t *emu, uintptr_t fnc);
void iFEv_32(x64emu_t *emu, uintptr_t fnc);
void iFEi_32(x64emu_t *emu, uintptr_t fnc);
void iFEL_32(x64emu_t *emu, uintptr_t fnc);
void iFEp_32(x64emu_t *emu, uintptr_t fnc);
void iFEh_32(x64emu_t *emu, uintptr_t fnc);
void iFEO_32(x64emu_t *emu, uintptr_t fnc);
void iFii_32(x64emu_t *emu, uintptr_t fnc);
void iFiI_32(x64emu_t *emu, uintptr_t fnc);
void iFiu_32(x64emu_t *emu, uintptr_t fnc);
void iFip_32(x64emu_t *emu, uintptr_t fnc);
void iFih_32(x64emu_t *emu, uintptr_t fnc);
void iFuu_32(x64emu_t *emu, uintptr_t fnc);
void iFup_32(x64emu_t *emu, uintptr_t fnc);
void iFli_32(x64emu_t *emu, uintptr_t fnc);
void iFpi_32(x64emu_t *emu, uintptr_t fnc);
void iFpu_32(x64emu_t *emu, uintptr_t fnc);
void iFpL_32(x64emu_t *emu, uintptr_t fnc);
void iFpp_32(x64emu_t *emu, uintptr_t fnc);
void iFph_32(x64emu_t *emu, uintptr_t fnc);
void iFhp_32(x64emu_t *emu, uintptr_t fnc);
void iFhh_32(x64emu_t *emu, uintptr_t fnc);
void IFII_32(x64emu_t *emu, uintptr_t fnc);
void uFEu_32(x64emu_t *emu, uintptr_t fnc);
void uFEV_32(x64emu_t *emu, uintptr_t fnc);
void uFpa_32(x64emu_t *emu, uintptr_t fnc);
void UFii_32(x64emu_t *emu, uintptr_t fnc);
void UFUU_32(x64emu_t *emu, uintptr_t fnc);
void UFss_32(x64emu_t *emu, uintptr_t fnc);
void fFif_32(x64emu_t *emu, uintptr_t fnc);
void fFfi_32(x64emu_t *emu, uintptr_t fnc);
void fFff_32(x64emu_t *emu, uintptr_t fnc);
void fFfD_32(x64emu_t *emu, uintptr_t fnc);
void fFfp_32(x64emu_t *emu, uintptr_t fnc);
void dFid_32(x64emu_t *emu, uintptr_t fnc);
void dFdi_32(x64emu_t *emu, uintptr_t fnc);
void dFdd_32(x64emu_t *emu, uintptr_t fnc);
void dFdD_32(x64emu_t *emu, uintptr_t fnc);
void dFdp_32(x64emu_t *emu, uintptr_t fnc);
void LFpL_32(x64emu_t *emu, uintptr_t fnc);
void LFpp_32(x64emu_t *emu, uintptr_t fnc);
void pFEv_32(x64emu_t *emu, uintptr_t fnc);
void pFEp_32(x64emu_t *emu, uintptr_t fnc);
void pFLL_32(x64emu_t *emu, uintptr_t fnc);
void pFpi_32(x64emu_t *emu, uintptr_t fnc);
void pFpL_32(x64emu_t *emu, uintptr_t fnc);
void pFpp_32(x64emu_t *emu, uintptr_t fnc);
void tFip_32(x64emu_t *emu, uintptr_t fnc);
void tFpL_32(x64emu_t *emu, uintptr_t fnc);
void iFHBp__32(x64emu_t *emu, uintptr_t fnc);
void fFpBp__32(x64emu_t *emu, uintptr_t fnc);
void dFpBp__32(x64emu_t *emu, uintptr_t fnc);
void pFrL_p_32(x64emu_t *emu, uintptr_t fnc);
void iFuBLL__32(x64emu_t *emu, uintptr_t fnc);
void iFprLL__32(x64emu_t *emu, uintptr_t fnc);
void iFBLL_p_32(x64emu_t *emu, uintptr_t fnc);
void iFrLL_BLL__32(x64emu_t *emu, uintptr_t fnc);
void pFriiiiiiiiilt_p_32(x64emu_t *emu, uintptr_t fnc);
void vFEip_32(x64emu_t *emu, uintptr_t fnc);
void vFEpi_32(x64emu_t *emu, uintptr_t fnc);
void vFEpu_32(x64emu_t *emu, uintptr_t fnc);
void vFfpp_32(x64emu_t *emu, uintptr_t fnc);
void vFdpp_32(x64emu_t *emu, uintptr_t fnc);
void iFEip_32(x64emu_t *emu, uintptr_t fnc);
void iFEpi_32(x64emu_t *emu, uintptr_t fnc);
void iFEpL_32(x64emu_t *emu, uintptr_t fnc);
void iFEpp_32(x64emu_t *emu, uintptr_t fnc);
void iFEpV_32(x64emu_t *emu, uintptr_t fnc);
void iFEhp_32(x64emu_t *emu, uintptr_t fnc);
void iFiii_32(x64emu_t *emu, uintptr_t fnc);
void iFiiI_32(x64emu_t *emu, uintptr_t fnc);
void iFiiu_32(x64emu_t *emu, uintptr_t fnc);
void iFiiO_32(x64emu_t *emu, uintptr_t fnc);
void iFiII_32(x64emu_t *emu, uintptr_t fnc);
void iFiuu_32(x64emu_t *emu, uintptr_t fnc);
void iFiLN_32(x64emu_t *emu, uintptr_t fnc);
void iFipu_32(x64emu_t *emu, uintptr_t fnc);
void iFipL_32(x64emu_t *emu, uintptr_t fnc);
void iFipp_32(x64emu_t *emu, uintptr_t fnc);
void iFuii_32(x64emu_t *emu, uintptr_t fnc);
void iFuip_32(x64emu_t *emu, uintptr_t fnc);
void iFuui_32(x64emu_t *emu, uintptr_t fnc);
void iFuuu_32(x64emu_t *emu, uintptr_t fnc);
void iFuLp_32(x64emu_t *emu, uintptr_t fnc);
void iFupp_32(x64emu_t *emu, uintptr_t fnc);
void iFpiu_32(x64emu_t *emu, uintptr_t fnc);
void iFpip_32(x64emu_t *emu, uintptr_t fnc);
void iFpuu_32(x64emu_t *emu, uintptr_t fnc);
void iFpLi_32(x64emu_t *emu, uintptr_t fnc);
void iFpLL_32(x64emu_t *emu, uintptr_t fnc);
void iFppu_32(x64emu_t *emu, uintptr_t fnc);
void iFppL_32(x64emu_t *emu, uintptr_t fnc);
void iFppp_32(x64emu_t *emu, uintptr_t fnc);
void iFpOu_32(x64emu_t *emu, uintptr_t fnc);
void iFhpL_32(x64emu_t *emu, uintptr_t fnc);
void IFiIi_32(x64emu_t *emu, uintptr_t fnc);
void fFfff_32(x64emu_t *emu, uintptr_t fnc);
void fFffp_32(x64emu_t *emu, uintptr_t fnc);
void dFddd_32(x64emu_t *emu, uintptr_t fnc);
void dFddp_32(x64emu_t *emu, uintptr_t fnc);
void lFipL_32(x64emu_t *emu, uintptr_t fnc);
void lFlpi_32(x64emu_t *emu, uintptr_t fnc);
void pFEip_32(x64emu_t *emu, uintptr_t fnc);
void pFEpi_32(x64emu_t *emu, uintptr_t fnc);
void pFEpp_32(x64emu_t *emu, uintptr_t fnc);
void pFpiL_32(x64emu_t *emu, uintptr_t fnc);
void pFpih_32(x64emu_t *emu, uintptr_t fnc);
void pFppL_32(x64emu_t *emu, uintptr_t fnc);
void pFpOM_32(x64emu_t *emu, uintptr_t fnc);
void hFEpp_32(x64emu_t *emu, uintptr_t fnc);
void hFppH_32(x64emu_t *emu, uintptr_t fnc);
void aFipa_32(x64emu_t *emu, uintptr_t fnc);
void tFipu_32(x64emu_t *emu, uintptr_t fnc);
void IFpBp_i_32(x64emu_t *emu, uintptr_t fnc);
void lFpBp_i_32(x64emu_t *emu, uintptr_t fnc);
void vFEipV_32(x64emu_t *emu, uintptr_t fnc);
void vFEppp_32(x64emu_t *emu, uintptr_t fnc);
void iFEiip_32(x64emu_t *emu, uintptr_t fnc);
void iFEiiN_32(x64emu_t *emu, uintptr_t fnc);
void iFEipp_32(x64emu_t *emu, uintptr_t fnc);
void iFELup_32(x64emu_t *emu, uintptr_t fnc);
void iFEpip_32(x64emu_t *emu, uintptr_t fnc);
void iFEpup_32(x64emu_t *emu, uintptr_t fnc);
void iFEpLi_32(x64emu_t *emu, uintptr_t fnc);
void iFEppL_32(x64emu_t *emu, uintptr_t fnc);
void iFEppp_32(x64emu_t *emu, uintptr_t fnc);
void iFEppV_32(x64emu_t *emu, uintptr_t fnc);
void iFEpOu_32(x64emu_t *emu, uintptr_t fnc);
void iFEhpV_32(x64emu_t *emu, uintptr_t fnc);
void iFiiiN_32(x64emu_t *emu, uintptr_t fnc);
void iFiiII_32(x64emu_t *emu, uintptr_t fnc);
void iFiuui_32(x64emu_t *emu, uintptr_t fnc);
void iFipii_32(x64emu_t *emu, uintptr_t fnc);
void iFipup_32(x64emu_t *emu, uintptr_t fnc);
void iFuupi_32(x64emu_t *emu, uintptr_t fnc);
void iFhpiL_32(x64emu_t *emu, uintptr_t fnc);
void lFipLi_32(x64emu_t *emu, uintptr_t fnc);
void LFpLLh_32(x64emu_t *emu, uintptr_t fnc);
void pFEppi_32(x64emu_t *emu, uintptr_t fnc);
void pFEppp_32(x64emu_t *emu, uintptr_t fnc);
void pFpiLL_32(x64emu_t *emu, uintptr_t fnc);
void pFppLL_32(x64emu_t *emu, uintptr_t fnc);
void iFEpprLL__32(x64emu_t *emu, uintptr_t fnc);
void LFpLpriiiiiiiiilt__32(x64emu_t *emu, uintptr_t fnc);
void vFEpLLp_32(x64emu_t *emu, uintptr_t fnc);
void iFEppiV_32(x64emu_t *emu, uintptr_t fnc);
void iFEpppi_32(x64emu_t *emu, uintptr_t fnc);
void iFEpppp_32(x64emu_t *emu, uintptr_t fnc);
void iFiiipu_32(x64emu_t *emu, uintptr_t fnc);
void iFiLLLL_32(x64emu_t *emu, uintptr_t fnc);
void iFpppup_32(x64emu_t *emu, uintptr_t fnc);
void iFEBh_ppp_32(x64emu_t *emu, uintptr_t fnc);
void iFEpippp_32(x64emu_t *emu, uintptr_t fnc);
void iFEpuppp_32(x64emu_t *emu, uintptr_t fnc);
void iFEpLppp_32(x64emu_t *emu, uintptr_t fnc);
void iFEpLiipV_32(x64emu_t *emu, uintptr_t fnc);
void pFEpLiiii_32(x64emu_t *emu, uintptr_t fnc);
void pFEpLiiiI_32(x64emu_t *emu, uintptr_t fnc);
void iFEpippppp_32(x64emu_t *emu, uintptr_t fnc);

#if defined(ANDROID)
void vFEpppp_32(x64emu_t *emu, uintptr_t fnc);
#endif

#if defined(HAVE_LD80BITS)
void DFD_32(x64emu_t *emu, uintptr_t fnc);
void DFDD_32(x64emu_t *emu, uintptr_t fnc);
void DFDp_32(x64emu_t *emu, uintptr_t fnc);
#endif

#if !defined(HAVE_LD80BITS)
void KFK_32(x64emu_t *emu, uintptr_t fnc);
void KFKK_32(x64emu_t *emu, uintptr_t fnc);
void KFKp_32(x64emu_t *emu, uintptr_t fnc);
#endif

void iFEvpV_32(x64emu_t *emu, uintptr_t fnc);
void UFsvvs_32(x64emu_t *emu, uintptr_t fnc);
void pFEppv_32(x64emu_t *emu, uintptr_t fnc);
void iFEpvpp_32(x64emu_t *emu, uintptr_t fnc);
void iFEhvpV_32(x64emu_t *emu, uintptr_t fnc);
void iFEpvvpV_32(x64emu_t *emu, uintptr_t fnc);
void iFEpuvvppp_32(x64emu_t *emu, uintptr_t fnc);
#endif // __WRAPPER32_H_
