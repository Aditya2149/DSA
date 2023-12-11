#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Aditya");
    s.push("Kumar");
    s.push("Singh");
    s.pop();
    
    cout<<"Top element: "<<s.top()<<endl;
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Empty or not: "<<s.empty()<<endl;
    return 0;
}