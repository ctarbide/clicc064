/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void rt_vref(CL_FORM *base)
{
	COPY(ARG(0), ARG(2));
	Fvectorp(ARG(2));
	if(CL_TRUEP(ARG(2)))
	{
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(2));	/* WRONG_TYPE */
		COPY(ARG(0), ARG(3));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(4));	/* VECTOR */
		Ferror(ARG(2), 3);
	}
	Frow_major_aref(ARG(0));
}
