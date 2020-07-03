#include <iostream>
#include <vector>
#include <string>
#include "lexer.h"

void lexerMain(std::string contents){
	std::string text = contents;

	for(int i = 0; i < text.size(); i++){
		if (text[i] == '\n'){
			text.erase(i, 1);
		}
	}

	std::string word;
	std::vector<std::string> tokens;

	for(int i = 0; i < text.length(); i++){
		switch(word){
			case "out ":
				std::cout << "out" << std::endl;
				tokens.push_back(word);
				word.clear();
				break;
			
		}
		word.push_back(text[i]);
		
	}

	return;
}
