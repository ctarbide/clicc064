/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Ffill_pointer(CL_FORM *base)
{
	COPY(ARG(0), ARG(1));
	Farray_has_fill_pointer_p(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
	}
	else
	{
		COPY(SYMVAL(Slisp, 154), ARG(1));	/* NO_FILL_PTR */
		COPY(ARG(0), ARG(2));
		Ferror(ARG(1), 2);
	}
	complex_vector_fillptr(ARG(0));
}
