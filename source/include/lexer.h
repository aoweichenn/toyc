//
// Created by aowei on 25-6-29.
//

#ifndef TAC_LEXER_H
#define TAC_LEXER_H

typedef struct LEXER_STRUCT
{
    char* source;
    char c;
    unsigned int index;
} lexer_T;

lexer_T* init_lexer(char* source);

#endif //TAC_LEXER_H
