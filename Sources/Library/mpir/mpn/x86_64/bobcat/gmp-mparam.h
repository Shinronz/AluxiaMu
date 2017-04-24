//////////////////////////////////////////////////////////////////////
// gmp-mparam.h
/* Generated by tuneup.c, 2014-03-25, gcc 4.6 */

#define MUL_KARATSUBA_THRESHOLD          14
#define MUL_TOOM3_THRESHOLD              90
#define MUL_TOOM4_THRESHOLD             214
#define MUL_TOOM8H_THRESHOLD            294

#define SQR_BASECASE_THRESHOLD            0  /* always (native) */
#define SQR_KARATSUBA_THRESHOLD          24
#define SQR_TOOM3_THRESHOLD             161
#define SQR_TOOM4_THRESHOLD             996
#define SQR_TOOM8_THRESHOLD             996

#define POWM_THRESHOLD                  736

#define DIVREM_1_NORM_THRESHOLD       MP_SIZE_T_MAX  /* never */
#define DIVREM_1_UNNORM_THRESHOLD     MP_SIZE_T_MAX  /* never */
#define MOD_1_NORM_THRESHOLD              0  /* always */
#define MOD_1_UNNORM_THRESHOLD            0  /* always */
#define USE_PREINV_DIVREM_1               1  /* native */
#define USE_PREINV_MOD_1                  1
#define DIVEXACT_1_THRESHOLD              0  /* always */
#define MODEXACT_1_ODD_THRESHOLD          0  /* always (native) */
#define MOD_1_1_THRESHOLD                 5
#define MOD_1_2_THRESHOLD                 6
#define MOD_1_3_THRESHOLD                55
#define DIVREM_HENSEL_QR_1_THRESHOLD     14
#define RSH_DIVREM_HENSEL_QR_1_THRESHOLD     19
#define DIVREM_EUCLID_HENSEL_THRESHOLD     19

#define MUL_FFT_FULL_THRESHOLD         3904

#define SQR_FFT_FULL_THRESHOLD         3008

#define MULLOW_BASECASE_THRESHOLD         8
#define MULLOW_DC_THRESHOLD              36
#define MULLOW_MUL_THRESHOLD           5620

#define MULHIGH_BASECASE_THRESHOLD        8
#define MULHIGH_DC_THRESHOLD             33
#define MULHIGH_MUL_THRESHOLD          3239

#define MULMOD_2EXPM1_THRESHOLD          16

#define DC_DIV_QR_THRESHOLD              56
#define INV_DIV_QR_THRESHOLD           2350
#define INV_DIVAPPR_Q_N_THRESHOLD        56
#define DC_DIV_Q_THRESHOLD               70
#define INV_DIV_Q_THRESHOLD            1718
#define DC_DIVAPPR_Q_THRESHOLD           71
#define INV_DIVAPPR_Q_THRESHOLD       18500
#define DC_BDIV_QR_THRESHOLD             54
#define DC_BDIV_Q_THRESHOLD              62

#define ROOTREM_THRESHOLD                 6

#define MATRIX22_STRASSEN_THRESHOLD      19
#define HGCD_THRESHOLD                  113
#define HGCD_APPR_THRESHOLD              50
#define HGCD_REDUCE_THRESHOLD          6852
#define GCD_DC_THRESHOLD                505
#define GCDEXT_DC_THRESHOLD             342
#define JACOBI_BASE_METHOD                2

#define GET_STR_DC_THRESHOLD             14
#define GET_STR_PRECOMPUTE_THRESHOLD     25
#define SET_STR_DC_THRESHOLD            191
#define SET_STR_PRECOMPUTE_THRESHOLD   1648

#define FAC_DSC_THRESHOLD               834
#define FAC_ODD_THRESHOLD                46

/* fft_tuning -- autogenerated by tune-fft */

#define FFT_TAB \
   { { 4, 3 }, { 3, 3 }, { 3, 2 }, { 2, 1 }, { 1, 0 } }

#define MULMOD_TAB \
   { 4, 3, 4, 4, 4, 3, 3, 3, 3, 2, 2, 3, 3, 2, 2, 2, 2, 1, 1 }

#define FFT_N_NUM 19

#define FFT_MULMOD_2EXPP1_CUTOFF 128


/* Tuneup completed successfully, took 299 seconds */



//////////////////////////////////////////////////////////////////////
// iDev.Games - MuOnline S9EP2 IGC9.5 - TRONG.WIN - DAO VAN TRONG     
//////////////////////////////////////////////////////////////////////

