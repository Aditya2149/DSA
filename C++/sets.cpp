#include<iostream>
#include<set>
using namespace std;
//sets: unique elemnts, sorted way
int main(){
    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    
    for(int i:s)
    cout<<i<<" ";
    cout<<endl;
    
    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);
    // s.erase(s.begin());
    for(int i:s)
    cout<<i<<" ";
    cout<<endl;
   
    cout<<"2 is present or not: "<<s.count(2)<<endl;

    set<int> :: iterator itr = s.find(3);

    for(auto it=itr;it!=s.end();it++)
    cout<<*it<<" ";

    cout<<endl;

    return 0;
}