//
// Created by aowei on 25-6-29.
//
#include <stdlib.h>
#include <include/token.h>

token_T* init_token(char* value, const int token_type)
{
    token_T* token = calloc(1, sizeof(struct TOKEN_STRUCT));
    token->value = value;
    token->token_type = token_type;
    return token;
}
