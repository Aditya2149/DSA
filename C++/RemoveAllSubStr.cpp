#include<iostream>
#include <string>
#include <istream>
using namespace std;

string removeOccurrences(string s, string part) {
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string s;

    cout<<"Enter string: ";
    getline(cin,s);

    cout<<"New string: "<<removeOccurrences(s,"abc");
    
    return 0;
}