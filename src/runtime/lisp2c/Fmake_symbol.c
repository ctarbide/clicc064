/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fmake_symbol(CL_FORM *base)
{
	COPY(ARG(0), ARG(1));
	string_to_simple_string(ARG(1));
	rt_make_symbol(ARG(1));
	LOAD_NIL(ARG(2));
	COPY(ARG(2), SYM_PLIST(ARG(1)));
	LOAD_NIL(ARG(2));
	COPY(ARG(2), SYM_PACKAGE(ARG(1)));
	COPY(ARG(1), ARG(0));
	Fmakunbound(ARG(0));
}
