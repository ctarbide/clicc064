/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cparse_unix_namestring, parse_unix_namestring, 3);

CL_INIT Kparse_unix_namestring[] =
{
	MAKE_STRING(28, "search lists not implemented"),	/* 0 */
	MAKE_STRING(2, ".."),	/* 2 */
};

void parse_unix_namestring(CL_FORM *base)
{
	COPY(ARG(1), ARG(3));
	COPY(ARG(3), ARG(4));
	COPY(ARG(2), ARG(5));
	Fnumneql(ARG(4), 2);
	if(CL_TRUEP(ARG(4)))
	{
		if(CL_SMSTRP(ARG(0)))
		{
		}
		else
		{
			COPY(SYMVAL(Slisp, 58), ARG(4));	/* WRONG_TYPE */
			COPY(ARG(0), ARG(5));
			LOAD_SYMBOL(SYMBOL(Slisp, 40), ARG(6));	/* SIMPLE-STRING */
			Ferror(ARG(4), 3);
		}
		COPY(ARG(0), ARG(4));
		COPY(ARG(3), ARG(5));
		pvref(ARG(4));
		LOAD_CHAR(ARG(5), '/', ARG(5));
		rt_charE(ARG(4));
	}
	else
	{
		LOAD_NIL(ARG(4));
	}
	if(CL_TRUEP(ARG(4)))
	{
		F1plus(ARG(3));
	}
	LOAD_NIL(ARG(5));
	LOAD_NIL(ARG(6));
	ALLOC_CONS(ARG(7), ARG(5), ARG(6), ARG(5));
	M1_1:;
	LOAD_CHAR(ARG(6), '/', ARG(6));
	COPY(ARG(0), ARG(7));
	LOAD_SYMBOL(SYMBOL(Slisp, 231), ARG(8));	/* START */
	COPY(ARG(3), ARG(9));
	LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(10));	/* END */
	COPY(ARG(2), ARG(11));
	Fposition(ARG(6), 6);
	if(CL_TRUEP(ARG(6)))
	{
		COPY(ARG(6), ARG(8));
	}
	else
	{
		COPY(ARG(2), ARG(8));
	}
	ALLOC_CONS(ARG(9), ARG(3), ARG(8), ARG(7));
	COPY(ARG(5), ARG(8));
	add_q(ARG(7));
	if(CL_TRUEP(ARG(6)))
	{
	}
	else
	{
		goto RETURN1;
	}
	COPY(ARG(6), ARG(3));
	F1plus(ARG(3));
	goto M1_1;
	RETURN1:;
	COPY(ARG(4), ARG(6));
	COPY(GET_CAR(ARG(5)), ARG(7));
	COPY(ARG(6), ARG(3));
	COPY(ARG(7), &mv_buf[0]);
	mv_count = 2;
	COPY(&mv_buf[0], ARG(4));
	{
		int nargs;
		nargs = 2;
		mv_count = 1;
		{
			switch(nargs)
			{
				case 0:
				LOAD_NIL(ARG(3));
				case 1:
				LOAD_NIL(ARG(4));
				nargs = 2;
			}
			if(CL_TRUEP(ARG(3)))
			{
				LOAD_NIL(ARG(5));
			}
			else
			{
				if(CL_CONSP(ARG(4)))
				{
					COPY(GET_CAR(ARG(4)), ARG(5));
				}
				else
				{
					if(CL_TRUEP(ARG(4)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[264], ARG(5));	/* ~a is not a list */
						COPY(ARG(4), ARG(6));
						Ferror(ARG(5), 2);
					}
					else
					{
						COPY(ARG(4), ARG(5));
					}
				}
				if(CL_CONSP(ARG(5)))
				{
					COPY(GET_CAR(ARG(5)), ARG(6));
				}
				else
				{
					if(CL_TRUEP(ARG(5)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[264], ARG(6));	/* ~a is not a list */
						COPY(ARG(5), ARG(7));
						Ferror(ARG(6), 2);
					}
					else
					{
						COPY(ARG(5), ARG(6));
					}
				}
				if(CL_CONSP(ARG(5)))
				{
					COPY(GET_CDR(ARG(5)), ARG(7));
				}
				else
				{
					if(CL_TRUEP(ARG(5)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[262], ARG(7));	/* ~a is not a list */
						COPY(ARG(5), ARG(8));
						Ferror(ARG(7), 2);
					}
					else
					{
						COPY(ARG(5), ARG(7));
					}
				}
				LOAD_NIL(ARG(8));
				COPY(ARG(6), ARG(9));
				M2_1:;
				COPY(ARG(9), ARG(10));
				COPY(ARG(7), ARG(11));
				Fnumeql(ARG(10), 2);
				if(CL_TRUEP(ARG(10)))
				{
					LOAD_NIL(ARG(10));
					COPY(ARG(6), ARG(11));
					COPY(ARG(10), ARG(6));
					COPY(ARG(11), &mv_buf[0]);
					mv_count = 2;
					goto RETURN2;
				}
				if(CL_TRUEP(ARG(8)))
				{
					LOAD_NIL(ARG(8));
				}
				else
				{
					if(CL_SMSTRP(ARG(0)))
					{
					}
					else
					{
						COPY(SYMVAL(Slisp, 58), ARG(10));	/* WRONG_TYPE */
						COPY(ARG(0), ARG(11));
						LOAD_SYMBOL(SYMBOL(Slisp, 40), ARG(12));	/* SIMPLE-STRING */
						Ferror(ARG(10), 3);
					}
					COPY(ARG(0), ARG(10));
					COPY(ARG(9), ARG(11));
					pvref(ARG(10));
					if(CL_CHARP(ARG(10)) && GET_CHAR(ARG(10)) == '\\')
					{
						LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(8));	/* T */
					}
					else
					{
						if(CL_CHARP(ARG(10)) && GET_CHAR(ARG(10)) == ':')
						{
							COPY(ARG(0), ARG(11));
							COPY(ARG(6), ARG(12));
							COPY(ARG(9), ARG(13));
							remove_backslashes(ARG(11));
							COPY(ARG(9), ARG(12));
							F1plus(ARG(12));
							COPY(ARG(11), ARG(6));
							COPY(ARG(12), &mv_buf[0]);
							mv_count = 2;
							goto RETURN2;
						}
					}
				}
				F1plus(ARG(9));
				goto M2_1;
				RETURN2:;
				COPY(&mv_buf[0], ARG(7));
				{
					int nargs;
					nargs = 2;
					mv_count = 1;
					{
						switch(nargs)
						{
							case 0:
							LOAD_NIL(ARG(6));
							case 1:
							LOAD_NIL(ARG(7));
							nargs = 2;
						}
						if(CL_TRUEP(ARG(6)))
						{
							LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(3));	/* T */
							if(CL_CONSP(ARG(5)))
							{
								COPY(ARG(7), GET_CAR(ARG(5)));
							}
							else
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[252], ARG(8));	/* ~a is not a cons */
								COPY(ARG(5), ARG(9));
								Ferror(ARG(8), 2);
							}
						}
						COPY(ARG(6), ARG(5));
					}
				}
			}
			COPY(ARG(4), ARG(6));
			LOAD_FIXNUM(ARG(7), 1, ARG(7));
			last1(ARG(6));
			if(CL_CONSP(ARG(6)))
			{
				COPY(GET_CAR(ARG(6)), ARG(6));
			}
			else
			{
				if(CL_TRUEP(ARG(6)))
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[264], ARG(7));	/* ~a is not a list */
					COPY(ARG(6), ARG(8));
					Ferror(ARG(7), 2);
				}
				else
				{
				}
			}
			if(CL_CONSP(ARG(6)))
			{
				COPY(GET_CAR(ARG(6)), ARG(7));
			}
			else
			{
				if(CL_TRUEP(ARG(6)))
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[264], ARG(7));	/* ~a is not a list */
					COPY(ARG(6), ARG(8));
					Ferror(ARG(7), 2);
				}
				else
				{
					COPY(ARG(6), ARG(7));
				}
			}
			if(CL_CONSP(ARG(6)))
			{
				COPY(GET_CDR(ARG(6)), ARG(8));
			}
			else
			{
				if(CL_TRUEP(ARG(6)))
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[262], ARG(8));	/* ~a is not a list */
					COPY(ARG(6), ARG(9));
					Ferror(ARG(8), 2);
				}
				else
				{
					COPY(ARG(6), ARG(8));
				}
			}
			COPY(ARG(7), ARG(9));
			COPY(ARG(8), ARG(10));
			Fnumeql(ARG(9), 2);
			if(CL_TRUEP(ARG(9)))
			{
				LOAD_NIL(ARG(6));
			}
			else
			{
				COPY(ARG(4), ARG(9));
				LOAD_FIXNUM(ARG(10), 1, ARG(10));
				butlast1(ARG(9));
				COPY(ARG(9), ARG(4));
				LOAD_CHAR(ARG(9), '.', ARG(9));
				COPY(ARG(0), ARG(10));
				LOAD_SYMBOL(SYMBOL(Slisp, 231), ARG(11));	/* START */
				COPY(ARG(7), ARG(12));
				F1plus(ARG(12));
				LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(13));	/* END */
				COPY(ARG(8), ARG(14));
				LOAD_SYMBOL(SYMBOL(Slisp, 294), ARG(15));	/* FROM-END */
				LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(16));	/* T */
				Fposition(ARG(9), 8);
				if(CL_TRUEP(ARG(9)))
				{
					LOAD_CHAR(ARG(10), '.', ARG(10));
					COPY(ARG(0), ARG(11));
					LOAD_SYMBOL(SYMBOL(Slisp, 231), ARG(12));	/* START */
					COPY(ARG(7), ARG(13));
					F1plus(ARG(13));
					LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(14));	/* END */
					COPY(ARG(9), ARG(15));
					LOAD_SYMBOL(SYMBOL(Slisp, 294), ARG(16));	/* FROM-END */
					LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(17));	/* T */
					Fposition(ARG(10), 8);
				}
				else
				{
					LOAD_NIL(ARG(10));
				}
				LOAD_SYMBOL(SYMBOL(Slisp, 269), ARG(11));	/* NEWEST */
				if(CL_TRUEP(ARG(10)))
				{
					COPY(ARG(9), ARG(12));
					LOAD_FIXNUM(ARG(13), 2, ARG(13));
					Fplus(ARG(12), 2);
					COPY(ARG(8), ARG(13));
					Fnumeql(ARG(12), 2);
					if(CL_TRUEP(ARG(12)))
					{
						COPY(ARG(9), ARG(12));
						F1plus(ARG(12));
						if(CL_SMSTRP(ARG(0)))
						{
						}
						else
						{
							COPY(SYMVAL(Slisp, 58), ARG(13));	/* WRONG_TYPE */
							COPY(ARG(0), ARG(14));
							LOAD_SYMBOL(SYMBOL(Slisp, 40), ARG(15));	/* SIMPLE-STRING */
							Ferror(ARG(13), 3);
						}
						COPY(ARG(0), ARG(13));
						COPY(ARG(12), ARG(14));
						pvref(ARG(13));
						COPY(ARG(13), ARG(12));
						LOAD_CHAR(ARG(13), '*', ARG(13));
						rt_charE(ARG(12));
					}
					else
					{
						goto ELSE1;
					}
					if(CL_TRUEP(ARG(12)))
					{
						LOAD_SYMBOL(SYMBOL(Slisp, 271), ARG(11));	/* WILD */
					}
					else
					{
						ELSE1:;
						COPY(ARG(9), ARG(12));
						F1plus(ARG(12));
						COPY(ARG(8), ARG(13));
						Flt(ARG(12), 2);
						if(CL_TRUEP(ARG(12)))
						{
							COPY(ARG(9), ARG(12));
							F1plus(ARG(12));
							M3_1:;
							COPY(ARG(12), ARG(13));
							COPY(ARG(8), ARG(14));
							Fnumeql(ARG(13), 2);
							if(CL_TRUEP(ARG(13)))
							{
								bool_result = TRUE;
								goto RETURN3;
							}
							LOAD_CHAR(ARG(13), '0', ARG(13));
							if(CL_SMSTRP(ARG(0)))
							{
							}
							else
							{
								COPY(SYMVAL(Slisp, 58), ARG(14));	/* WRONG_TYPE */
								COPY(ARG(0), ARG(15));
								LOAD_SYMBOL(SYMBOL(Slisp, 40), ARG(16));	/* SIMPLE-STRING */
								Ferror(ARG(14), 3);
							}
							COPY(ARG(0), ARG(14));
							COPY(ARG(12), ARG(15));
							pvref(ARG(14));
							LOAD_CHAR(ARG(15), '9', ARG(15));
							FcharLE(ARG(13), 3);
							if(CL_TRUEP(ARG(13)))
							{
							}
							else
							{
								bool_result = FALSE;
								goto RETURN3;
							}
							F1plus(ARG(12));
							goto M3_1;
							RETURN3:;
						}
						else
						{
							goto ELSE2;
						}
						if(bool_result)
						{
							COPY(ARG(0), ARG(12));
							COPY(ARG(9), ARG(13));
							F1plus(ARG(13));
							COPY(ARG(8), ARG(14));
							LOAD_FIXNUM(ARG(15), 10, ARG(15));
							LOAD_NIL(ARG(16));
							parse_integer1(ARG(12));
							mv_count = 1;
							COPY(ARG(12), ARG(11));
						}
						else
						{
							ELSE2:;
							LOAD_NIL(ARG(10));
						}
					}
				}
				if(CL_TRUEP(ARG(10)))
				{
					COPY(ARG(0), ARG(12));
					COPY(ARG(7), ARG(13));
					COPY(ARG(10), ARG(14));
					maybe_make_pattern(ARG(12));
					COPY(ARG(0), ARG(13));
					COPY(ARG(10), ARG(14));
					F1plus(ARG(14));
					COPY(ARG(9), ARG(15));
					maybe_make_pattern(ARG(13));
					COPY(ARG(11), ARG(14));
					COPY(ARG(12), ARG(6));
					COPY(ARG(13), &mv_buf[0]);
					COPY(ARG(14), &mv_buf[1]);
					mv_count = 3;
				}
				else
				{
					if(CL_TRUEP(ARG(9)))
					{
						COPY(ARG(0), ARG(12));
						COPY(ARG(7), ARG(13));
						COPY(ARG(9), ARG(14));
						maybe_make_pattern(ARG(12));
						COPY(ARG(0), ARG(13));
						COPY(ARG(9), ARG(14));
						F1plus(ARG(14));
						COPY(ARG(8), ARG(15));
						maybe_make_pattern(ARG(13));
						COPY(ARG(11), ARG(14));
						COPY(ARG(12), ARG(6));
						COPY(ARG(13), &mv_buf[0]);
						COPY(ARG(14), &mv_buf[1]);
						mv_count = 3;
					}
					else
					{
						COPY(ARG(0), ARG(12));
						COPY(ARG(7), ARG(13));
						COPY(ARG(8), ARG(14));
						maybe_make_pattern(ARG(12));
						LOAD_NIL(ARG(13));
						COPY(ARG(11), ARG(14));
						COPY(ARG(12), ARG(6));
						COPY(ARG(13), &mv_buf[0]);
						COPY(ARG(14), &mv_buf[1]);
						mv_count = 3;
					}
				}
			}
			MV_TO_STACK(mv_count, 7);
			{
				int nargs;
				nargs = mv_count;
				mv_count = 1;
				{
					switch(nargs)
					{
						case 0:
						LOAD_NIL(ARG(6));
						case 1:
						LOAD_NIL(ARG(7));
						case 2:
						LOAD_NIL(ARG(8));
						nargs = 3;
					}
					LOAD_NIL(ARG(9));
					LOAD_NIL(ARG(10));
					LOAD_NIL(ARG(11));
					LOAD_NIL(ARG(12));
					ALLOC_CONS(ARG(13), ARG(11), ARG(12), ARG(11));
					if(CL_TRUEP(ARG(5)))
					{
						LOAD_SMSTR((CL_FORM *)&Kparse_unix_namestring[0], ARG(12));	/* search lists not implemented */
						Ferror(ARG(12), 1);
					}
					LOAD_NIL(ARG(12));
					COPY(ARG(4), ARG(13));
					M4_1:;
					if(CL_ATOMP(ARG(13)))
					{
						LOAD_NIL(ARG(12));
						goto RETURN4;
					}
					COPY(ARG(13), ARG(14));
					COPY(GET_CAR(ARG(14)), ARG(12));
					if(CL_CONSP(ARG(12)))
					{
						COPY(GET_CAR(ARG(12)), ARG(14));
					}
					else
					{
						if(CL_TRUEP(ARG(12)))
						{
							LOAD_SMSTR((CL_FORM *)&KClisp[264], ARG(14));	/* ~a is not a list */
							COPY(ARG(12), ARG(15));
							Ferror(ARG(14), 2);
						}
						else
						{
							COPY(ARG(12), ARG(14));
						}
					}
					if(CL_CONSP(ARG(12)))
					{
						COPY(GET_CDR(ARG(12)), ARG(15));
					}
					else
					{
						if(CL_TRUEP(ARG(12)))
						{
							LOAD_SMSTR((CL_FORM *)&KClisp[262], ARG(15));	/* ~a is not a list */
							COPY(ARG(12), ARG(16));
							Ferror(ARG(15), 2);
						}
						else
						{
							COPY(ARG(12), ARG(15));
						}
					}
					COPY(ARG(14), ARG(16));
					COPY(ARG(15), ARG(17));
					Fnumeql(ARG(16), 2);
					if(CL_TRUEP(ARG(16)))
					{
					}
					else
					{
						COPY(ARG(0), ARG(16));
						COPY(ARG(14), ARG(17));
						COPY(ARG(15), ARG(18));
						maybe_make_pattern(ARG(16));
						if(CL_SMSTRP(ARG(16)))
						{
							COPY(ARG(16), ARG(17));
							LOAD_SMSTR((CL_FORM *)&Kparse_unix_namestring[2], ARG(18));	/* .. */
							LOAD_FIXNUM(ARG(19), 0, ARG(19));
							LOAD_NIL(ARG(20));
							LOAD_FIXNUM(ARG(21), 0, ARG(21));
							LOAD_NIL(ARG(22));
							stringE1(ARG(17));
						}
						else
						{
							goto ELSE3;
						}
						if(CL_TRUEP(ARG(17)))
						{
							LOAD_SYMBOL(SYMBOL(Slisp, 274), ARG(17));	/* UP */
							COPY(ARG(11), ARG(18));
							add_q(ARG(17));
						}
						else
						{
							ELSE3:;
							COPY(ARG(16), ARG(17));
							COPY(ARG(11), ARG(18));
							add_q(ARG(17));
						}
					}
					COPY(ARG(13), ARG(14));
					COPY(GET_CDR(ARG(14)), ARG(13));
					goto M4_1;
					RETURN4:;
					COPY(ARG(11), ARG(12));
					COPY(ARG(12), ARG(13));
					COPY(GET_CAR(ARG(13)), ARG(11));
					if(CL_TRUEP(ARG(3)))
					{
						LOAD_SYMBOL(SYMBOL(Slisp, 267), ARG(12));	/* ABSOLUTE */
						ALLOC_CONS(ARG(14), ARG(12), ARG(11), ARG(11));
					}
					else
					{
						if(CL_TRUEP(ARG(11)))
						{
							LOAD_SYMBOL(SYMBOL(Slisp, 270), ARG(12));	/* RELATIVE */
							ALLOC_CONS(ARG(14), ARG(12), ARG(11), ARG(11));
						}
						else
						{
							LOAD_NIL(ARG(11));
						}
					}
					COPY(ARG(6), ARG(12));
					COPY(ARG(7), ARG(13));
					COPY(ARG(8), ARG(14));
					COPY(ARG(9), ARG(0));
					COPY(ARG(10), &mv_buf[0]);
					COPY(ARG(11), &mv_buf[1]);
					COPY(ARG(12), &mv_buf[2]);
					COPY(ARG(13), &mv_buf[3]);
					COPY(ARG(14), &mv_buf[4]);
					mv_count = 6;
				}
			}
		}
	}
}
