/* mpf_urandomb (rop, state) -- Generate a uniform pseudorandom real
   number between 0 (inclusive) and 1 (exclusive), using STATE as the
   random state previously initialized by a call to gmp_rand_init().

Copyright (C) 1999, 2000  Free Software Foundation, Inc.

This file is part of the GNU MP Library.

The GNU MP Library is free software; you can redistribute it and/or modify
it under the terms of the GNU Library General Public License as published by
the Free Software Foundation; either version 2 of the License, or (at your
option) any later version.

The GNU MP Library is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
License for more details.

You should have received a copy of the GNU Library General Public License
along with the GNU MP Library; see the file COPYING.LIB.  If not, write to
the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston,
MA 02111-1307, USA. */

#include "gmp.h"
#include "gmp-impl.h"

/* FIXME: Rename file to urandomb.c. */

void
#if __STDC__
mpf_urandomb (mpf_t rop, gmp_rand_state rstate)
#else
mpf_urandomb (rop, rstate)
     mpf_t rop;
     gmp_rand_state rstate;
#endif
{
  mp_ptr rp;
  mp_size_t nlimbs;
  mp_exp_t exp;

  rp = PTR (rop);
  nlimbs = PREC (rop);

  gmp_rand_getraw (rp, rstate, nlimbs * BITS_PER_MP_LIMB);

  exp = 0;
  while (nlimbs != 0 && rp[nlimbs - 1] == 0)
    {
      nlimbs--;
      exp--;
    }
  EXP (rop) = exp;
  SIZ (rop) = nlimbs;

#if 0
  /* If nbits isn't a multiple of BITS_PER_MP_LIMB, shift.  */
  if (nlimbs != 0)
    {
      if (nbits % BITS_PER_MP_LIMB != 0)
	mpn_lshift (rp, rp, nlimbs,
		    BITS_PER_MP_LIMB - nbits % BITS_PER_MP_LIMB);
    }
#endif
}
