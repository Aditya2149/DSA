#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Aditya");
    q.push("Kumar");
    q.push("Singh");
    // q.pop();

    cout<<"First element: "<<q.front()<<endl; 
    // q.pop();    
    // cout<<"First element: "<<q.front()<<endl;  
    cout<<"Size: "<<q.size()<<endl;  
    cout<<"back element: "<<q.back()<<endl;  

    return 0;
}