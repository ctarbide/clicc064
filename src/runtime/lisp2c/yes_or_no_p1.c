/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

CL_INIT Kyes_or_no_p1[] =
{
	MAKE_STRING(4, "~&~?"),	/* 0 */
	MAKE_STRING(12, "(yes or no):"),	/* 2 */
	MAKE_STRING(3, "yes"),	/* 4 */
	MAKE_STRING(2, "no"),	/* 6 */
	MAKE_STRING(24, "Please answer yes or no."),	/* 8 */
};

void yes_or_no_p1(CL_FORM *base)
{
	LOAD_NIL(ARG(2));
	if(CL_TRUEP(ARG(0)))
	{
		COPY(SYMVAL(Slisp, 63), ARG(3));	/* *QUERY-IO* */
		LOAD_SMSTR((CL_FORM *)&Kyes_or_no_p1[0], ARG(4));	/* ~&~? */
		COPY(ARG(0), ARG(5));
		COPY(ARG(1), ARG(6));
		Fformat(ARG(3), 4);
		mv_count = 1;
	}
	M1_1:;
	LOAD_SMSTR((CL_FORM *)&Kyes_or_no_p1[2], ARG(3));	/* (yes or no): */
	COPY(SYMVAL(Slisp, 63), ARG(4));	/* *QUERY-IO* */
	princ1(ARG(3));
	COPY(SYMVAL(Slisp, 63), ARG(3));	/* *QUERY-IO* */
	COPY(ARG(3), ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(3));	/* T */
	LOAD_NIL(ARG(4));
	LOAD_NIL(ARG(5));
	read_line1(ARG(2));
	mv_count = 1;
	LOAD_SMSTR((CL_FORM *)&Kyes_or_no_p1[4], ARG(3));	/* yes */
	COPY(ARG(2), ARG(4));
	LOAD_FIXNUM(ARG(5), 0, ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_FIXNUM(ARG(7), 0, ARG(7));
	LOAD_NIL(ARG(8));
	string_equal1(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
		goto RETURN1;
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&Kyes_or_no_p1[6], ARG(3));	/* no */
		COPY(ARG(2), ARG(4));
		LOAD_FIXNUM(ARG(5), 0, ARG(5));
		LOAD_NIL(ARG(6));
		LOAD_FIXNUM(ARG(7), 0, ARG(7));
		LOAD_NIL(ARG(8));
		string_equal1(ARG(3));
		if(CL_TRUEP(ARG(3)))
		{
			LOAD_NIL(ARG(0));
			goto RETURN1;
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&Kyes_or_no_p1[8], ARG(3));	/* Please answer yes or no. */
			COPY(SYMVAL(Slisp, 63), ARG(4));	/* *QUERY-IO* */
			print1(ARG(3));
		}
	}
	goto M1_1;
	RETURN1:;
}
