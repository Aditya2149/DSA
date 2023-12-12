#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m[1]="Aditya";
    m[2]="Kumar";
    m[13]="Singh";

    m.insert({5,"Bheem"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13--> "<<m.count(13)<<endl;

    cout<<"Before Erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    m.erase(2);
    cout<<"after Erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}