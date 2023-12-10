#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(2);
    d.push_front(1);
    // d.pop_front();

    for(int ele:d)
    cout<<ele<<" ";
    
    cout<<"first--"<<d.at(0)<<endl;
    cout<<"first--"<<d.front()<<endl;
    cout<<"last--"<<d.back()<<endl;
    cout<<"empty or not--"<<d.empty()<<endl;
    cout<<"before erase size--"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size--"<<d.size()<<endl;
    
    return 0;
}