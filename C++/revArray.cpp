#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s = "hello world";
    string newS = "";
    for(int i =s.size()-1;i>=0;i--){
        newS += s[i];
    }
    cout<<newS;
    return 0;
}