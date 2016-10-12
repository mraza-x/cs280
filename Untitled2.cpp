#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;
	 
	void PLC (char *x);
	 
	int main ()
	{
	    char input[1000];
	    char *token;
	    printf("Enter a Phrase to Be Translated to Pig Latin: ");
	    gets (input);
	    printf("\n");
	    token = strtok (input, " ");
	    PLC(token);
	    cin.get();
	    return 0;
     
	}
	 
	 
	void PLC (char *x)
	{
	    char *word = x;
	    while (word != NULL)
	    {
	        printf("%s%c%s", word+1, word[0], "ay ");
	        word = strtok(NULL, " ");  
	    }
	     
	    printf("\n\n");
	}
