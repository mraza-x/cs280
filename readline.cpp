//============================================================================
// Name        : readline.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main() {
	char line[1000];

	while( cin.good() ) {
		cin.get(line, 1000, '\n');

		cout << line << ":" << strlen(line) << endl;
    }
    cin.get();
	return 0;
}
