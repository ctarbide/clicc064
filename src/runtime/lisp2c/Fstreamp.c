/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fstreamp(CL_FORM *base)
{
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(1));	/* STREAM */
	rt_struct_typep(ARG(0));
}
