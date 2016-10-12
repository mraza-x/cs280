#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;
	 
	int convertTOPIG(char *line)
	{
	    int i = 0;
	    int j;
	    while (line[i] != 'a' && line[i] != 'e' && line[i] != 'i' && line[i] != 'o' && line[i] != 'u' && line[i] != 'y' &&
	           line[i] != 'A' && line[i] != 'E' && line[i] != 'I' && line[i] != 'O' && line[i] != 'U' && line[i] != 'Y' && 
               i < strlen(line))
	            i++;
	        if (i == 0 || i == strlen(line))
	            printf("%sway ", line);
	        else
	        {
	          for( j =i; j < strlen(line); j++)
	              printf("%c", line[j]);
	          for(j=0; j < i; j++)
	                printf("%c", line[j]);
	            printf("ay ");
	 
	        }
	 
	}
	 
	 
int main(int argc, char *argv[])
{
	char input[BUFSIZ];
	char *line;
 	
	  gets(input);
      line = strtok(input, " ");
	  while(line != NULL)
	  {
        convertTOPIG(line);
	    line = strtok(NULL, " ");
      }
	    printf("\n");
	    
	 cin.get();
	 return 0;
}
