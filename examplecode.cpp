#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
using namespace std;

/**
Rules:

1. First word a vowel, add "ay"
2. First!= vowel, copy till vowel, add those coppied words at end
and add "way"
**/

bool isVowel(char b[])
{
    if(b[0] == 'a' || b[0] == 'e' || b[0] == 'i' || b[0] == 'o' || b[0] == 'u') {
        return true;
    }

    else {
        return false;
    }
}

void translate(char c[])
{
    char pigLatin[255] = {};
    char subStr[255] = {};

    //test if first letter is vowel add "ay"
    if (isVowel(c) == true) {
        strcat(pigLatin, c);
        strcat(pigLatin, "ay");
    }

//===>>This part below is not working,,YYYYY!   //if not vowel!
    else {

        int cntr = 0;
        //increament cntr untill a vowel is detected
        while(!isVowel(c)) {
            cntr++;
            c++;
        }

        //use counter to copy all non vowel words
        strncpy(subStr, c, cntr);
        for(int i =0; i< cntr; i++) {
            c[i] = '\0';    //append null to all begining non vowel words
        }

        strcpy(pigLatin, c); //strcpy will copy all characters left in C excluding nulls!

        strcat(pigLatin, subStr);
        strcat(pigLatin, "way");
    }
    cout<<pigLatin;
}

int main()
{
    char a[255] = {};
    cout<<"Enter your string! :\n";
    cin>>a;
    translate(a);
    
    cin.get();
    return 0;
}
