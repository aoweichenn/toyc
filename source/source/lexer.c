//
// Created by aowei on 25-6-29.
//

#include <stdlib.h>
#include <include/lexer.h>

lexer_T* init_lexer(char* source)
{
    lexer_T* lexer = calloc(1, sizeof(struct LEXER_STRUCT));
    lexer->source = source;
    lexer->index = 0;
    lexer->c = lexer->source[lexer->index];
    return lexer;
}
