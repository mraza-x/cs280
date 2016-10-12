//============================================================================
// Name        : readchar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	char	ch;

	while( cin.good() ) 
    {
		ch = cin.get();
		cout << ch;
	}

    cin.get();
	return 0;
}
