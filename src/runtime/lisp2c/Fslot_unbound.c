/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fslot_unbound(CL_FORM *base)
{
	LOAD_SMSTR((CL_FORM *)&KClisp[236], ARG(3));	/* The slot ~s is unbound in the object ~s of class ~s. */
	COPY(ARG(2), ARG(4));
	COPY(ARG(1), ARG(5));
	COPY(ARG(0), ARG(6));
	Ferror(ARG(3), 4);
}
