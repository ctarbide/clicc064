/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

static void Z143_lambda(CL_FORM *base);
static void Z144_lambda(CL_FORM *base);

void Fformat(CL_FORM *base, int nargs)
{
	GEN_HEAPVAR(ARG(0), ARG(0 + nargs));
	GEN_HEAPVAR(ARG(1), ARG(0 + nargs));
	Flist(ARG(2), nargs - 2);
	GEN_HEAPVAR(ARG(2), ARG(3));
	LOAD_NIL(ARG(3));
	GEN_HEAPVAR(ARG(3), ARG(4));
	if(CL_TRUEP(INDIRECT(ARG(0))))
	{
		LOAD_NIL(ARG(4));
	}
	else
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
	}
	if(CL_TRUEP(ARG(4)))
	{
		goto THEN1;
	}
	else
	{
		COPY(INDIRECT(ARG(0)), ARG(5));
		Fstringp(ARG(5));
	}
	if(CL_TRUEP(ARG(5)))
	{
		THEN1:;
		if(CL_TRUEP(INDIRECT(ARG(0))))
		{
			COPY(INDIRECT(ARG(0)), ARG(4));
			COPY(ARG(4), ARG(5));
			make_string_output_stream1(ARG(5));
			COPY(ARG(5), INDIRECT(ARG(3)));
		}
		else
		{
			LOAD_FIXNUM(ARG(4), 10, ARG(4));
			LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(5));	/* CHARACTER */
			LOAD_NIL(ARG(6));
			LOAD_NIL(ARG(7));
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(8));	/* T */
			LOAD_FIXNUM(ARG(9), 0, ARG(9));
			LOAD_NIL(ARG(10));
			LOAD_FIXNUM(ARG(11), 0, ARG(11));
			LOAD_NIL(ARG(12));
			LOAD_NIL(ARG(13));
			LOAD_NIL(ARG(14));
			make_array1(ARG(4));
			COPY(ARG(4), ARG(5));
			make_string_output_stream1(ARG(5));
			COPY(ARG(5), INDIRECT(ARG(3)));
		}
		{
			GEN_CLOSURE(array, ARG(4), 7, Z144_lambda, 0);
			COPY(ARG(0), &array[3]);
			COPY(ARG(2), &array[4]);
			COPY(ARG(1), &array[5]);
			COPY(ARG(3), &array[6]);
			LOAD_CLOSURE(array, ARG(4));
		}
		COPY(ARG(4), ARG(4));
		{
			GEN_CLOSURE(array, ARG(5), 4, Z143_lambda, 0);
			COPY(ARG(3), &array[3]);
			LOAD_CLOSURE(array, ARG(5));
		}
		COPY(ARG(5), ARG(5));
		rt_unwind_protect(ARG(4));
		COPY(ARG(4), ARG(0));
	}
	else
	{
		if(CL_SYMBOLP(INDIRECT(ARG(0))) && GET_SYMBOL(INDIRECT(ARG(0))) == SYMBOL(Slisp, 48))	/* T */
		{
			COPY(SYMVAL(Slisp, 61), ARG(4));	/* *STANDARD-OUTPUT* */
			COPY(INDIRECT(ARG(1)), ARG(5));
			COPY(INDIRECT(ARG(2)), ARG(6));
			LOAD_FIXNUM(ARG(7), 0, ARG(7));
			LOAD_NIL(ARG(8));
			LOAD_NIL(ARG(9));
			format21(ARG(4));
			mv_count = 1;
			LOAD_NIL(ARG(0));
		}
		else
		{
			COPY(INDIRECT(ARG(0)), ARG(4));
			Foutput_stream_p(ARG(4));
			if(CL_TRUEP(ARG(4)))
			{
				COPY(INDIRECT(ARG(0)), ARG(4));
				COPY(INDIRECT(ARG(1)), ARG(5));
				COPY(INDIRECT(ARG(2)), ARG(6));
				LOAD_FIXNUM(ARG(7), 0, ARG(7));
				LOAD_NIL(ARG(8));
				LOAD_NIL(ARG(9));
				format21(ARG(4));
				mv_count = 1;
				LOAD_NIL(ARG(0));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[82], ARG(4));	/* illegal destination ~S for format */
				COPY(INDIRECT(ARG(0)), ARG(5));
				Ferror(ARG(4), 2);
			}
		}
	}
}

static void Z143_lambda(CL_FORM *base)
{
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(1));
	LOAD_NIL(ARG(2));
	close2(ARG(1));
	COPY(ARG(1), ARG(0));
}

static void Z144_lambda(CL_FORM *base)
{
	COPY(INDIRECT(GET_FORM(ARG(0)) + 6), ARG(1));
	COPY(INDIRECT(GET_FORM(ARG(0)) + 5), ARG(2));
	COPY(INDIRECT(GET_FORM(ARG(0)) + 4), ARG(3));
	LOAD_FIXNUM(ARG(4), 0, ARG(4));
	LOAD_NIL(ARG(5));
	LOAD_NIL(ARG(6));
	format21(ARG(1));
	mv_count = 1;
	if(CL_TRUEP(INDIRECT(GET_FORM(ARG(0)) + 3)))
	{
		LOAD_NIL(ARG(0));
	}
	else
	{
		COPY(INDIRECT(GET_FORM(ARG(0)) + 6), ARG(1));
		COPY(ARG(1), ARG(2));
		stream_type(ARG(2));
		if(CL_SYMBOLP(ARG(2)) && GET_SYMBOL(ARG(2)) == SYMBOL(Slisp, 102))	/* STRING-OUTPUT */
		{
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[268], ARG(2));	/* string-output-stream expected */
			Ferror(ARG(2), 1);
		}
		COPY(ARG(1), ARG(2));
		stream_extra(ARG(2));
		Ffuncall(ARG(2), 1);
		COPY(ARG(2), ARG(0));
	}
}
