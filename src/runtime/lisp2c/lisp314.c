/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fno_next_method(CL_FORM *base)
{
	LOAD_SMSTR((CL_FORM *)&KClisp[138], ARG(0));	/* No next method. */
	Ferror(ARG(0), 1);
}
