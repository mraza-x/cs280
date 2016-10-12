#include <string>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    string line = "appleway";
    
    if((line.end()-3)) == 'w')
    {
       line.erase (line.end()-3);
       line.erase (line.end()-2);
       line.erase (line.end()-1);
    }

    cout << line;
    
    cin.get();
    return 0;
}
