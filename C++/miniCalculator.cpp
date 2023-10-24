#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enter two number and operation: ";
    cin>>a>>b>>op;

    switch (op)
    {
    case '+':
        cout<<"Sum: "<<a+b<<endl;
        break;
    case '-':
        cout<<"Difference: "<<a-b<<endl;
        break;
    case '*':
        cout<<"Product: "<<a*b<<endl;
        break;
    case '/':
        cout<<"Divide: "<<a/b<<endl;
        break;
    case '%':
        cout<<"Modulus: "<<a%b<<endl;
        break;
    
    default:
        cout<<"Invalid operation requested";
        break;
    }

}