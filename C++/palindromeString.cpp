#include<iostream>
using namespace std;

void chaeckPalindrome(char name[],int length){
    int s=0;
    int e=length-1;
    bool ispalin = true;
    while(s<e){
        if(name[s++] != name[e--]){
            ispalin = false;
        }
    }
    if(ispalin){
        cout<<name<<" is Palindrome";
    }
    else
        cout<<name<<" is Not Palindrome";
}
int getLength(char name[]){
    int i =0,count = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    char str[20];

    cout<<"Enter String: ";
    cin>>str;
    cout<<"String: "<<str<<endl;

    int len = getLength(str);
    chaeckPalindrome(str,len);
    
    return 0;
}