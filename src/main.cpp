#include <iostream>
#include <fstream>
#include "../include/lexer.h"

using namespace std;

int main(int argc, char** argv){
	if(argc == 2){
		ifstream file(argv[1]);

		if(!file){
			cout << "Input file not found." << endl;
			return 1;
		}

		string text;
		string line;
		while(getline(file, line)){
			text += line;
			line.clear();
		}
		cout << text;
		lexerMain(text);
		text.clear();
		file.close();
	} else {
		cout << "Input file not specified." << endl;
		return 1;
	}

	return 0;
}
