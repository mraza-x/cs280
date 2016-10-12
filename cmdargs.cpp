//============================================================================
// Name        : cmdargs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "There were " << argc << " arguments on the command line" << endl;

	for( int i=0; i<argc; i++ ) {
		cout << i << ":" << argv[i] << ":" << endl;
	}
	cin.get();
	return 0;
}
