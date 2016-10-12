/*
	CS280-001 FALL 2014
	Name: Mohammed Raza
	Assignment # 1
*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <cctype>
using namespace std;

// Boolean function isvowel checks to see if the input is a vowel
bool isvowel(const char& input)
{
    switch(toupper(input))
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
        return true; 
        default:
        return false;
    }
}

// Function to convert input line to Pig Latin
int convertTOPIG(char *line)
{
	    int i = 0;
	    int j;
	    
	    
	    
	    // Only interate to the next character if it is not a vowel
	    while (isvowel(line[i]) == false && i < strlen(line))
        {
           i++;    
        }
        
        
   
        
                 //for(i = 0; i < strlen(line); i++)
         {
             if(ispunct(line[i]) == true || isdigit(line[i]) == true)
                {
                   cout << "punctuation or digit";             
                }
         } 
          
            // Add "way" at the end of the word if the first
            // letter is a vowel            
	        if(isvowel(line[0]) == true)
	        {
         	   printf("%s", line);
         	   printf("way ");
	        }
            
            // Add "ay" to the end of a word if it has no vowels
	        else if(isvowel(line[i]) == false)
	        {
         	   printf("%s", line);
         	   printf("ay ");
	        }
	        
            // Step through the non-vowel letters until while statement is
            // satisfied. Print them at the end of the word
            // Then add "ay" to the end
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

// Function to convert Pig Latin input line to English
int convertFROMPIG(char *line)
{
        int i = strlen(line);
        int j;
	    
	    // If the last three characters of a word are "way"
	    // Print the line without those characters
	    if (line[i-3] == 'w' && line[i-2] == 'a' && line[i-1] == 'y')
	    {     
	            for(j = 0; j < strlen(line) - 3; j++)
	            {
	               printf("%c", line[j]);
                }
                cout << " ";
        }
        
        // Otherwise, assume that only one consonant was added to the end
        // So, move that character, which was 3rd in from the end
        // to the front of the word, and print the word without the last
        // two characters "ay"
        else
        {
            printf("%c", line[i-3]);
            for(j = 0; j < strlen(line) - 3; j++)
	            {
	               printf("%c", line[j]);
	               
	               
	               
                }
                cout << " ";
        }
}

// Program main function, accepts a single command line argument
int main(int argc, char *argv[]) 
{
    
    enum Modes{ TOPIG,FROMPIG };
    Modes mode;
    
    char input[BUFSIZ];
    char *line;

    // If no arguments are passed, enter topig mode
    if(argc == 1) 
    {       
        mode = TOPIG;
        cout << ":: In Default TO-PIG Mode ::\n";
        
        // While the input is good, pass the line
        // to the convertTOPIG function
        // Using strtok to split the string
        // Does not include spaces and hyphen
        while(cin.good()) 
	    {
           cin.getline(input, sizeof(input));
           line = strtok(input, " -");
     	  while(line != NULL)
          {
                    convertTOPIG(line);
                    line = strtok(NULL, " -");
          }
	        cout << "\n";
       }
    }
    
    // If more than one argument is passed, print an error message.
    else if(argc != 2) 
    {
       cout << ":: Error - Invalid Number of Parameters ::"; 
       cin.get();
       return 0;    
    }
    
    // Otherwise, check if the argument was topig, frompig, or invalid
    else
    {
           string userArg = argv[1]; 
           
           // If arg was topig, and while the input is good, pass the
           // line to the convertTOPIG function
           // Using strtok to split the string
           // Does not include spaces and hyphen
           if(userArg == "topig") 
           {
               mode = TOPIG;
               cout << ":: In Manual TO-PIG Mode ::\n";
               
               while(cin.good())
               { 
	             cin.getline(input, sizeof(input));
                 line = strtok(input, " -");
	             while(line != NULL)
	             {
                    convertTOPIG(line);
                    line = strtok(NULL, " -");
                 }
	                cout << "\n";
               }        
           }
           
           // If arg was frompig, and while the input is good, pass the
           // line to the convertFROMPIG function
           // Using strtok to split the string
           // Does not include spaces and hyphen
           else if(userArg == "frompig") 
           {
               mode = FROMPIG;
               cout << ":: In FROM-PIG Mode ::\n";
               
               while(cin.good()) 
               {               
                 cin.getline(input, sizeof(input));
                 line = strtok(input, " -");
	             while(line != NULL)
	             {
                    convertFROMPIG(line);
                    line = strtok(NULL, " -");
                 }
	                cout << "\n";
               }
           }
           
           // Otherwise, print an error message
           else
           {
                cout << ":: Error - Invalid Parameter ::";
                cin.get();
                return 0;
           }
   }
 
 cin.get();
 return 0;
}
