/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Ccomma_reader, comma_reader, 2);

CL_INIT Kcomma_reader[] =
{
	MAKE_STRING(39, "A comma appeared outside of a backquote"),	/* 0 */
};

void comma_reader(CL_FORM *base)
{
	COPY(SYMVAL(Slisp, 447), ARG(2));	/* *BQ-LEVEL* */
	LOAD_FIXNUM(ARG(3), 0, ARG(3));
	Fle(ARG(2), 2);
	if(CL_TRUEP(ARG(2)))
	{
		LOAD_SMSTR((CL_FORM *)&Kcomma_reader[0], ARG(2));	/* A comma appeared outside of a backquote */
		Ferror(ARG(2), 1);
	}
	COPY(SYMVAL(Slisp, 447), ARG(2));	/* *BQ-LEVEL* */
	F1minus(ARG(2));
	COPY(ARG(2), SYMVAL(Slisp, 447));	/* *BQ-LEVEL* */
	LOAD_NIL(ARG(2));
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
	LOAD_NIL(ARG(5));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(6));	/* T */
	peek_char1(ARG(2));
	if(CL_CHARP(ARG(2)) && GET_CHAR(ARG(2)) == '@')
	{
		COPY(ARG(0), ARG(3));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
		LOAD_NIL(ARG(5));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(6));	/* T */
		read_char1(ARG(3));
		COPY(SYMVAL(Slisp, 437), ARG(2));	/* *COMMA-ATSIGN* */
	}
	else
	{
		if(CL_CHARP(ARG(2)) && GET_CHAR(ARG(2)) == '.')
		{
			COPY(ARG(0), ARG(3));
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
			LOAD_NIL(ARG(5));
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(6));	/* T */
			read_char1(ARG(3));
			COPY(SYMVAL(Slisp, 438), ARG(2));	/* *COMMA-DOT* */
		}
		else
		{
			COPY(SYMVAL(Slisp, 436), ARG(2));	/* *COMMA* */
		}
	}
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
	LOAD_NIL(ARG(5));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(6));	/* T */
	internal_read(ARG(3));
	ALLOC_CONS(ARG(4), ARG(2), ARG(3), ARG(2));
	COPY(SYMVAL(Slisp, 447), ARG(3));	/* *BQ-LEVEL* */
	F1plus(ARG(3));
	COPY(ARG(3), SYMVAL(Slisp, 447));	/* *BQ-LEVEL* */
	COPY(ARG(2), ARG(0));
}
