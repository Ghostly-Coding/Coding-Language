#include <cstring>
#include <iostream>
#include "../include/tokens.h"

enum _LexerStatus {
    LEXER_SUCCESS
};
typedef enum _LexerStatus LexerStatus;

LexerStatus lexerMain(std::string contents);
