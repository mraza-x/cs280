//============================================================================
// Name        : readline2.cpp
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
#include <cctype>
using namespace std;

int main() 
{
	char line[BUFSIZ];

	
		cin.getline(line, sizeof(line));

		while( cin.good() ) {
		cin.get(line, BUFSIZ, sizeof(line));
		for(i = 0; i < strlen(line); i++)
		{
	            
			if (isalpha(line[i]))
			{
		   cout << "alpha";
			}
		}
		
	
	

	return 0;
}
