#include<iostream>
using namespace std;

void reverse(char name[],int length){
    int s=0;
    int e=length-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
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
    char name[20];

    cout<<"Enter name: ";
    cin>>name;
    cout<<"Name: "<<name<<endl;
    int length = getLength(name);
    cout<<"Length: "<<length<<endl;
    reverse(name,length);
    cout<<"Reversed name: "<<name<<endl;
    return 0;
}