#include<iostream>
using namespace std;

char getMaxoccChar(string s){
    int arr[26] = {0};

    for(int i=0;i<s.length();i++){
        int number = s[i] - 'a';
        arr[number]++;
    }

    //get max of alphabets
    int maxi =-1,ans =0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    return ans + 'a';
}
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;

    cout<<"Max occuring letter: "<<getMaxoccChar(s);    
    return 0;
}