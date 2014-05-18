/* ymb_CVN_headers.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 11/09/2011
 * Last Modified    : 04/07/2012
 * 
 * 
 *      ymb         =   Basic Function
 *      CVN         =   Format Conversion Unit
 * 
 */

#pragma once
#ifndef _ymb_CVN_headers_H
#define _ymb_CVN_headers_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#ifndef _ym_SelfContainedHeader_H
#include "../Globals.h"
#include "../APIs/ymi_APIs_headers.h"
#endif
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
extern "C" {
#endif
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  u64_forward (use by Digit Viewer)
extern  void    yma_CVN_u64_forward         ();
extern  void    ymb_CVN_rawh_to_strh_f      (char *T,ym_pL L);
extern  void    ymb_CVN_rawd_to_strd_f      (char *T,ym_pL L);
extern  int     ymb_CVN_strh_to_rawh_f      (char *T,ym_pL L);
extern  int     ymb_CVN_strd_to_rawd_f      (char *T,ym_pL L);
extern  void    ymb_CVN_rawh_to_u64b_f      (ym_u64 *T,const char *A,ym_pL TL);
extern  void    ymb_CVN_rawd_to_u64d_f      (ym_u64 *T,const char *A,ym_pL TL);
extern  void    ymb_CVN_u64b_to_rawh_f      (char *T,const ym_u64 *A,ym_pL AL);
extern  void    ymb_CVN_u64d_to_rawd_f      (char *T,const ym_u64 *A,ym_pL AL);
extern  void    ymb_CVN_u64b_to_strh_f      (char *T,const ym_u64 *A,ym_pL AL);
extern  void    ymb_CVN_u64d_to_strd_f      (char *T,const ym_u64 *A,ym_pL AL);
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  cdi_reverse (use by y-cruncher)
extern  void    yma_CVN_cdi_reverse         ();
extern  void    ymb_CVN_c32i_to_rawh_r      (char *T,const ym_u32 *A,ym_pL AL);
extern  void    ymb_CVN_c64i_to_rawh_r      (char *T,const ym_u64 *A,ym_pL AL);
extern  void    ymb_CVN_c32i_to_rawd_r      (char *T,const ym_u32 *A,ym_pL AL);
extern  void    ymb_CVN_c64i_to_rawd_r      (char *T,const ym_u64 *A,ym_pL AL);
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
#endif