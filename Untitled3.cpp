    /*
    * vulgar_latin.cpp
    * vulgar_latin.cpp is licensed under GNU GENERAL PUBLIC LICENSE
    * Created on: Oct 19, 2012
    * Author: sin
    */
    #include <iostream>
    #include <string>
    #include <sstream>
    #include <vector>
    #include <cctype>
    using namespace std;
    int spaces(string s){
    int j=0;
    if (s.size()!=0) j++;
    for (size_t i=0;i<s.size();i++){
    if (s[i]==' ') j++;
    }
    return (j);
    }
    bool isVowel(string s){
    if (s[0]=='a' || s[0]=='e' || s[0]=='i' || s[0]=='o' || s[0]=='u' ||
    s[0]=='A' || s[0]=='E' || s[0]=='I' || s[0]=='O' || s[0]=='U'){
    return (true);
    }
    return (false);
    }
    int main(){
    vector<string> list;
    cout<<"Insert sentence: ";
    string line;
    getline(cin, line);
    stringstream token(line);
    for (int i=0;i<spaces(line);i++){
    string part;
    bool punct=false;
    char punctu;
    getline(token, part, ' ');
    if (ispunct(part[part.size()-1])){
    punct=true;
    punctu=part[part.size()-1];
    part.erase(part.end()-1);
    }
    if (isVowel(part)){
    part.append("way");
    }
    else{
    bool isup=false;
    if (isupper(part[0])){
    part[0]=(char)(((int)part[0])+32);
    isup=true;
    }
    part.insert(part.begin()+part.size(), part[0]);
    part.erase(part.begin());
    part.append("ay");
    if (isup){
    part[0]=(char)((int)part[0]-32);
    }
    }
    if (punct){
    part.insert(part.end(), punctu);
    }
    list.push_back(part);
    }
    for (size_t i=0;i<list.size();i++){
    cout<<list[i]<<" ";
    }
    return (0);
    }
