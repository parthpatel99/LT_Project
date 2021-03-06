
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     to = 259,
     cm = 260,
     m = 261,
     tonne = 262,
     ft = 263,
     inch = 264,
     pound = 265,
     km = 266,
     g = 267,
     kg = 268,
     of = 269,
     deg = 270,
     rad = 271,
     pascal = 272,
     bar = 273,
     msec = 274,
     kmhr = 275,
     s = 276,
     min = 277,
     hr = 278,
     joule = 279,
     cal = 280
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define to 259
#define cm 260
#define m 261
#define tonne 262
#define ft 263
#define inch 264
#define pound 265
#define km 266
#define g 267
#define kg 268
#define of 269
#define deg 270
#define rad 271
#define pascal 272
#define bar 273
#define msec 274
#define kmhr 275
#define s 276
#define min 277
#define hr 278
#define joule 279
#define cal 280




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 8 "yaccfile.y"

float real;



/* Line 1676 of yacc.c  */
#line 108 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


