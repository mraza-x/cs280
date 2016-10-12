#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
    string s("apple");

    std::string::size_type prev_pos = 0, pos = 0;
    while( (pos = s.find(' ', pos)) != std::string::npos )
    {
        std::string substring( s.substr(prev_pos, pos-prev_pos) );
        
        
         cout << substring << "way";
         

        prev_pos = ++pos;
    }
    std::string substring( s.substr(prev_pos, pos-prev_pos) ); // Last word
    cout << substring;
    
    cin.get();
    return 0;
}
