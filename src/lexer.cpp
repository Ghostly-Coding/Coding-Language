#include "../include/lexer.h"

LexerStatus lexerMain(std::string contents) {
  char *text = new char[contents.length() + 1];
  strcpy(text, contents.c_str());
  int i = 0;
  int wordi = 0;
  int line = 0;
  char word[256];
  TokenList* list;

  while (1) {
    while (text[i] != '\n' && text[i] != ' ' && text[i] != '\0') {
      word[wordi++] = text[i++];
    }
    word[wordi] = '\0';

	if(word == "out"){
		add_token(list, create_token(INST, OUT, line));
	}

    memset(word, '\0', 256);
    if (text[i] == '\0') {
      break;
    } else if (text[i] == '\n') {
      line++;
    }

    wordi = 0;
    i++;
  }

  return LEXER_SUCCESS;
}
