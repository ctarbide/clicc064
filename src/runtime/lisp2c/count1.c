/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

static void Z28_lambda(CL_FORM *base, int nargs);

void count1(CL_FORM *base)
{
	GEN_HEAPVAR(ARG(4), ARG(8));
	if(CL_TRUEP(ARG(3)))
	{
	}
	else
	{
		if(CL_TRUEP(INDIRECT(ARG(4))))
		{
			GEN_CLOSURE(array, ARG(8), 4, Z28_lambda, -1);
			COPY(ARG(4), &array[3]);
			LOAD_CLOSURE(array, ARG(8));
			COPY(ARG(8), ARG(3));
		}
		else
		{
			GEN_STATIC_GLOBAL_FUNARG(extern_closure, Feql, 2);
			LOAD_GLOBFUN(&extern_closure, ARG(3));
		}
	}
	COPY(ARG(5), ARG(8));
	COPY(ARG(6), ARG(9));
	COPY(ARG(1), ARG(10));
	Flength(ARG(10));
	check_seq_start_end(ARG(8));
	COPY(ARG(8), ARG(6));
	LOAD_FIXNUM(ARG(8), 0, ARG(8));
	COPY(ARG(5), ARG(9));
	M1_1:;
	COPY(ARG(9), ARG(10));
	COPY(ARG(6), ARG(11));
	Fge(ARG(10), 2);
	if(CL_TRUEP(ARG(10)))
	{
		goto RETURN1;
	}
	COPY(ARG(3), ARG(10));
	COPY(ARG(0), ARG(11));
	COPY(ARG(7), ARG(12));
	COPY(ARG(1), ARG(13));
	COPY(ARG(9), ARG(14));
	Felt(ARG(13));
	Ffuncall(ARG(12), 2);
	mv_count = 1;
	Ffuncall(ARG(10), 3);
	mv_count = 1;
	if(CL_TRUEP(ARG(10)))
	{
		F1plus(ARG(8));
	}
	F1plus(ARG(9));
	goto M1_1;
	RETURN1:;
	COPY(ARG(8), ARG(0));
}

static void Z28_lambda(CL_FORM *base, int nargs)
{
	CL_FORM *rest_0;
	CL_FORM *local;
	rest_0 = ARG(1);
	local = ARG(nargs + 1);
	{
		COPY(INDIRECT(GET_FORM(ARG(0)) + 3), LOCAL(0));
		REST_APPLY(LOCAL(0), 1, rest_0);
		mv_count = 1;
		if(CL_TRUEP(LOCAL(0)))
		{
			LOAD_NIL(ARG(0));
		}
		else
		{
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
		}
	}
}
