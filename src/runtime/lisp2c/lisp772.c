/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fnstring_upcase(CL_FORM *base, int nargs)
{
	BOOL supl_flags[2];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 231),	/* START */
		SYMBOL(Slisp, 232),	/* END */
	};
	keysort(ARG(1), nargs - 1, 2, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_FIXNUM(ARG(3), 0, ARG(1));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_NIL(ARG(2));
	}
	nstring_upcase1(ARG(0));
}
