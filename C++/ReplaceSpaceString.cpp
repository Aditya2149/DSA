#include<iostream>
using namespace std;

int main(){
    string s;

    cout<<"Enter string: ";
    getline(cin,s);

    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){
            s = s.substr(0,i) + "@40" + s.substr(i+1);
        }
    }

    cout<<"Updated String: "<<s;
    return 0;
}