#include "../include/tokens.h"

Token* create_token(TokenType type, int data, int line){
    Token* token = (Token*) malloc(sizeof(Token));
    token->type = type;
    token->data = data;
    token->line = line;
    return token;
}

void delete_token(Token* token){
    free(token);
}

void add_token(TokenList* list, Token* token){
    list->list.push_back(token);
}

void remove_token(TokenList* list, int index){
    list->list.erase(list->list.begin()+index);
}