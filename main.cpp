#include <iostream>
#include <fstream>
#include "lexer.h"

using namespace std;

int main(int argc, char** argv){
	if(argc == 2){
		ifstream file(argv[1]);

		if(!file){
			cout << "Input file not found." << endl;
			return 0;
		}

		char ch;
		string text;
		while(!file.eof()){
			file >> noskipws >> ch;
			text += ch;
		}
		cout << text;
		lexerMain(text);
		file.close();
	} else {
		cout << "Input file not specified." << endl;
		return 0;
	}

	return 0;
}
