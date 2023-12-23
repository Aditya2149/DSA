#include<iostream>
using namespace std;

//works for shorter input
// string check(string s){
//     int n = s.length();
//     int i=0,count=0;
//     int alp[26] ={0};
//     while(i<n){
//         count = s[i] - 'a';
//         alp[count]++;
//         if(alp[count]>1 && s[i] == s[i-1]){
//             s.erase(i-1,2);
//             n= n-2;
//             return check(s);
//         }
//         else
//         i++;
//     }
//     return s;
// }

string removeDuplicates(string s) {
    string unique="";
    int i =0;
    while(i<s.length()){
        if(unique.length()>0 && unique[unique.length()-1] == s[i]){
            unique.pop_back();
        }
        else{
            unique.push_back(s[i]);
        }
        i++;
    }
    return unique;
    // return check(s);
    // return s;
}

int main(){
    string s ="abbacy";

    cout<<"String after duplicates removal: "<<removeDuplicates(s);
    
    
    return 0;
}