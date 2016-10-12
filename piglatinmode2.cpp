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
	    i++;
	    do{
	        if (i == 0 || i == strlen(line))
	        {
              
         	   printf("%s", line);
         	   printf("way ");
         	   
            }
	        else
	        {
              
	          for(j = i; j < strlen(line); j++)
	          {
	              printf("%c", line[j]);
              }
	          for(j = 0; j < i; j++)
	          {
	                printf("%c", line[j]);
              }
              printf("ay "); 
              
	        }
	        
         }
         while(line[i] == 'a' && line[i] == 'e' && line[i] == 'i' && 
               line[i] == 'o' && line[i] == 'u' && line[i] == 'A' && 
               line[i] == 'E' && line[i] == 'I' && line[i] == 'O' && 
               line[i] == 'U' && i < strlen(line)); 
                
               
}

int convertFROMPIG(char *line)
{
        int i = strlen(line);
        int j;
	    
	    if (line[i-3] == 'w' && line[i-2] == 'a' && line[i-1] == 'y')
	    {     
	            for(j = 0; j < strlen(line) - 3; j++)
	            {
	               printf("%c", line[j]);
                }
        }
        else
        {
            printf("%c", line[i-3]);
            for(j = 0; j < strlen(line) - 3; j++)
	            {
	               printf("%c", line[j]);
                }
        }
}

int main(int argc, char *argv[]) 
{
    
    enum Modes{ TOPIG,FROMPIG };
    Modes mode;
    
    char input[BUFSIZ];
    char *line;

    if(argc == 1) 
    {       
        mode = TOPIG;
        cout << "In Default TO-PIG Mode\n";
        
        while( cin.good() ) 
	   {
         cin.getline(input, sizeof(input));
         line = strtok(input, " ");
	     while(line != NULL)
	     {
                    convertTOPIG(line);
                    line = strtok(NULL, " ");
         }
	        cout << "\n";
       }
    }
    else if(argc != 2) 
    {
       cout << "Error - Invalid Number of Parameters"; 
       cin.get();
       return 0;    
    }
   else
   {
           string userArg = argv[1]; 
    
           if(userArg == "topig") 
           {
               mode = TOPIG;
               cout << "In Manual TO-PIG Mode\n";
               
               while( cin.good() )
               { 
	             cin.getline(input, sizeof(input));
                 line = strtok(input, " ");
	             while(line != NULL)
	             {
                    convertTOPIG(line);
                    line = strtok(NULL, " ");
                 }
	                cout << "\n";
               }        
           }
           else if(userArg == "frompig") 
           {
               mode = FROMPIG;
               cout << "In FROM-PIG Mode\n";
               
               while( cin.good() ) 
               {               
                 cin.getline(input, sizeof(input));
                 line = strtok(input, " ");
	             while(line != NULL)
	             {
                    convertFROMPIG(line);
                    line = strtok(NULL, " ");
                 }
	                cout << "\n";
              }
           }
           else
           {
                cout << "Error - Invalid Parameter";
                cin.get();
                return 0;
           }
   }
 
 cin.get();
 return 0;
}
