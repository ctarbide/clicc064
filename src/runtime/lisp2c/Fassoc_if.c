/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fassoc_if(CL_FORM *base, int nargs)
{
	BOOL supl_flags[1];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 209),	/* KEY */
	};
	keysort(ARG(2), nargs - 2, 1, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(ARG(2));
	}
	assoc_if1(ARG(0));
}
