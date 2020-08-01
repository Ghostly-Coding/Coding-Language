#include <stdlib.h>
#include <vector>

enum _TokenType{
    NUMBER,
    INST
};
typedef enum _TokenType TokenType;

enum _Inst{
    OUT
};
typedef enum _Inst Inst;

struct _Token{
    TokenType type;
    int data;
    int line;
};
typedef struct _Token Token;

struct _TokenList{
    std::vector<Token*> list;
};
typedef struct _TokenList TokenList;

Token* create_token(TokenType type, int data, int line);
void delete_token(Token* token);

//void create_token_list(int size);
void add_token(TokenList* list, Token* token);
void remove_token(Token* token, int index);