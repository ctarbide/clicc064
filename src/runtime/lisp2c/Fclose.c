/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fclose(CL_FORM *base, int nargs)
{
	BOOL supl_flags[1];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 104),	/* ABORT */
	};
	keysort(ARG(1), nargs - 1, 1, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(ARG(1));
	}
	close2(ARG(0));
}
