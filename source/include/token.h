//
// Created by aowei on 25-6-29.
//

#ifndef TAC_TOKEN_H
#define TAC_TOKEN_H

enum TOKEN_TYPE
{
    TOKEN_ID,
    TOKEN_EQUALS, // 等于号 =
    TOKEN_LPAREN, // 左小括号 (
    TOKEN_RPAREN, // 右小括号 )
    TOKEN_LBRACE, // 左大括号 {
    TOKEN_RBRACE, // 右大括号 }
    TOKEN_COLON, // 冒号 :
    TOKEN_COMMA, // 逗号 ,
    TOKEN_LT, // 小于号 <
    TOKEN_GT, // 大于号 >
    TOKEN_RIGHT_ARROW, // 右箭头 =>
    TOKEN_INT, // int 类型 int
    TOKEN_SEMI // 分号 ;
};

typedef struct TOKEN_STRUCT
{
    char* value;
    enum TOKEN_TYPE token_type;
} token_T;

token_T* init_token(char* value, int token_type);
#endif //TAC_TOKEN_H
