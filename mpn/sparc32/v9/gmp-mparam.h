/* gmp-mparam.h -- Compiler/machine parameter header file.

Copyright (C) 1991, 1993, 1994, 1999, 2000 Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
License for more details.

You should have received a copy of the GNU Lesser General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#define BITS_PER_MP_LIMB 32
#define BYTES_PER_MP_LIMB 4
#define BITS_PER_LONGINT 32
#define BITS_PER_INT 32
#define BITS_PER_SHORTINT 16
#define BITS_PER_CHAR 8


/* These values are for UltraSPARC I, II, and IIi.  It is bogus that
   this file lives in v9, but that will do for now.  */

/* Variations in addmul_1 speed make the multiply and square thresholds
   doubtful.  TOOM3_SQR_THRESHOLD had to be estimated here.  */

/* Generated by tuneup.c, 2000-10-02. */

#ifndef KARATSUBA_MUL_THRESHOLD
#define KARATSUBA_MUL_THRESHOLD     33
#endif
#ifndef TOOM3_MUL_THRESHOLD
#define TOOM3_MUL_THRESHOLD        119
#endif

#ifndef KARATSUBA_SQR_THRESHOLD
#define KARATSUBA_SQR_THRESHOLD    104
#endif
#ifndef TOOM3_SQR_THRESHOLD
#define TOOM3_SQR_THRESHOLD        105
#endif

#ifndef BZ_THRESHOLD
#define BZ_THRESHOLD                97
#endif

#ifndef FIB_THRESHOLD
#define FIB_THRESHOLD              142
#endif

#ifndef POWM_THRESHOLD
#define POWM_THRESHOLD             126
#endif

#ifndef GCD_ACCEL_THRESHOLD
#define GCD_ACCEL_THRESHOLD          4
#endif
#ifndef GCDEXT_THRESHOLD
#define GCDEXT_THRESHOLD            33
#endif

#ifndef FFT_MUL_TABLE
#define FFT_MUL_TABLE  { 368, 928, 1664, 6656, 18432, 40960, 0 }
#endif
#ifndef FFT_MODF_MUL_THRESHOLD
#define FFT_MODF_MUL_THRESHOLD     344
#endif
#ifndef FFT_MUL_THRESHOLD
#define FFT_MUL_THRESHOLD         2880
#endif

#ifndef FFT_SQR_TABLE
#define FFT_SQR_TABLE  { 528, 1120, 2432, 4608, 14336, 40960, 0 }
#endif
#ifndef FFT_MODF_SQR_THRESHOLD
#define FFT_MODF_SQR_THRESHOLD     328
#endif
#ifndef FFT_SQR_THRESHOLD
#define FFT_SQR_THRESHOLD         2240
#endif
