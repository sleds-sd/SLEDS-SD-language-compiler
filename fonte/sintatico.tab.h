/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    USE = 258,
    AS = 259,
    PROGRAM = 260,
    STATE = 261,
    EXIT = 262,
    SEND = 263,
    RECV = 264,
    BROADCAST = 265,
    NEXT_STATE = 266,
    DURING = 267,
    CONST = 268,
    RECV_BROADCAST = 269,
    INTEGER = 270,
    REAL = 271,
    STRING = 272,
    LIST = 273,
    MAP = 274,
    BOOLEAN = 275,
    BACK = 276,
    FRONT = 277,
    NEXT = 278,
    SIZE = 279,
    INSERT = 280,
    IF = 281,
    ELSE = 282,
    FOR = 283,
    WHILE = 284,
    IN = 285,
    DUPLO_MAIS = 286,
    DUPLO_MENOS = 287,
    TRUE_LITERAL = 288,
    FALSE_LITERAL = 289,
    POINTER = 290,
    DUPLO_IGUAL = 291,
    DIFERENTE = 292,
    MAIOR_IGUAL = 293,
    MENOR_IGUAL = 294,
    MESSAGE_TYPE = 295,
    MESSAGE = 296,
    IDENTIFIER = 297,
    STR_LITERAL = 298,
    INT_LITERAL = 299,
    REAL_LITERAL = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 52 "sintatico.y" /* yacc.c:1909  */

		char* word;
		int number_int;
		double number_real;
	

#line 107 "sintatico.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
