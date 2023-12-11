#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;

    list<int> n(5,100);//initialize 5 time 100

    for(int ele:n)
    cout<<ele<<" ";
    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    l.erase(l.begin());
    
    for(int ele:l)
    cout<<ele<<" ";
    cout<<endl;

    cout<<"size--"<<l.size();
    return 0;
}