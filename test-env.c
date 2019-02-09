/*
 * Matthew Rinne
 * test-env.c
 * cs403 Programming Languages
 */


#include "lexeme.h"
#include "types.h"
#include "environment.h"
#include <stdio.h>
#include <stdlib.h>


int
main()
{
    printf("Creating a new environment\n");
    Lexeme *env1 = newEnv();
    printf("The environment is:\n");
    displayEnv(env1);
    printf("Adding variable x with value 3\n");
    Lexeme *x = newLexemeID("x",1);
    Lexeme *x3 = newLexemeInt(3,1);
    insertEnv(env1,x,x3);
    printf("The environment is:\n");
    displayEnv(env1);
    printf("Adding variable str with value 'hello, world!'\n");
    Lexeme *str = newLexemeID("str",2);
    Lexeme *strVal = newLexemeString("hello, world!",2);
    insertEnv(env1,str,strVal);
    displayEnv(env1);
    printf("Adding variable str with value 'hello, world!'\n");
    Lexeme *str2 = newLexemeID("str2",2);
    Lexeme *strVal2 = newLexemeString("matthew rinne",2);
    insertEnv(env1,str2,strVal2);
    displayEnv(env1);
    printf("Extending the environment\n");
    Lexeme *env2 = extend(env1,NULL,NULL);
    displayEnv(env2);
    return 0;
}
