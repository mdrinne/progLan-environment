/*
 * Matthew Rinne
 * parser.h
 * cs403 Programming Languages
 */


#ifndef __PARSER_INCLUDED__
#define __PARSER_INCLUDED__

#include "lexeme.h"


Lexeme *advance();
int     check(char *type);
Lexeme *match(char *type);
int     getLegal();
void    program();
void    defs();
int     defsPending();
void    def();
int     defPending();
void    includes();
int     includesPending();
void    include();
void    funcDef();
int     funcDefPending();
void    parameterList();
int     parameterListPending();
void    optParamList();
void    mainFunc();
void    varDef();
int     varDefPending();
void    optInit();
void    unary();
int     unaryPending();
void    oper();
int     operPending();
void    expr();
int     exprPending();
void    optExpr();
void    argList();
int     argListPending();
void    optArgList();
void    funcCall();
int     funcCallPending();
void    ifStatement();
int     ifStatementPending();
void    elseStatement();
int     elseStatementPending();
void    optElse();
void    whileLoop();
int     whileLoopPending();
void    returnStatement();
int     returnStatementPending();
void    forLoop();
int     forLoopPending();
void    checkOper();
void    selfOp();
void    doubleSelfOp();
int     doubleSelfOpPending();
void    block();
void    statements();
int     statementsPending();
void    statement();
int     statementPending();

#endif