/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

static void Z23_tree_equal_internal(CL_FORM *base, CL_FORM *display[]);
static void Z24_lambda(CL_FORM *base, int nargs);

void tree_equal1(CL_FORM *base)
{
	CL_FORM *display[1];
	GEN_HEAPVAR(ARG(3), ARG(4));
	if(CL_TRUEP(ARG(2)))
	{
	}
	else
	{
		if(CL_TRUEP(INDIRECT(ARG(3))))
		{
			GEN_CLOSURE(array, ARG(4), 4, Z24_lambda, -1);
			COPY(ARG(3), &array[3]);
			LOAD_CLOSURE(array, ARG(4));
			COPY(ARG(4), ARG(2));
		}
		else
		{
			GEN_STATIC_GLOBAL_FUNARG(extern_closure, Feql, 2);
			LOAD_GLOBFUN(&extern_closure, ARG(2));
		}
	}
	COPY(ARG(0), ARG(4));
	COPY(ARG(1), ARG(5));
	display[0] = ARG(0);
	Z23_tree_equal_internal(ARG(4), display);
	COPY(ARG(4), ARG(0));
}

static void Z23_tree_equal_internal(CL_FORM *base, CL_FORM *display[])
{
	M1_1:;
	if(CL_ATOMP(ARG(0)))
	{
		if(CL_ATOMP(ARG(1)))
		{
			COPY(&display[0][2], ARG(2));
			COPY(ARG(0), ARG(3));
			COPY(ARG(1), ARG(4));
			Ffuncall(ARG(2), 3);
			COPY(ARG(2), ARG(0));
		}
		else
		{
			LOAD_NIL(ARG(0));
		}
	}
	else
	{
		if(CL_ATOMP(ARG(1)))
		{
			LOAD_NIL(ARG(0));
		}
		else
		{
			COPY(GET_CAR(ARG(0)), ARG(2));
			COPY(GET_CAR(ARG(1)), ARG(3));
			Z23_tree_equal_internal(ARG(2), display);
			mv_count = 1;
			if(CL_TRUEP(ARG(2)))
			{
				COPY(GET_CDR(ARG(0)), ARG(2));
				COPY(GET_CDR(ARG(1)), ARG(3));
				COPY(ARG(2), ARG(0));
				COPY(ARG(3), ARG(1));
				goto M1_1;
			}
			else
			{
				LOAD_NIL(ARG(0));
			}
		}
	}
	goto RETURN1;
	RETURN1:;
}

static void Z24_lambda(CL_FORM *base, int nargs)
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
