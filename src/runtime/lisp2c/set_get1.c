/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void set_get1(CL_FORM *base)
{
	if(CL_SYMBOLP(ARG(1)))
	{
		COPY(SYM_PLIST(ARG(1)), ARG(4));
	}
	else
	{
		if(CL_TRUEP(ARG(1)))
		{
			COPY(SYMVAL(Slisp, 676), ARG(4));	/* SYM_EXPECTED */
			COPY(ARG(1), ARG(5));
			Ferror(ARG(4), 2);
		}
		else
		{
			COPY(SYMVAL(Slisp, 678), ARG(4));	/* *NIL-PLIST* */
		}
	}
	COPY(ARG(2), ARG(5));
	COPY(ARG(0), ARG(6));
	rt_set_prop(ARG(4));
	COPY(ARG(4), ARG(5));
	COPY(ARG(1), ARG(6));
	Fset_symbol_plist(ARG(5));
}
