#include <iostream>
using namespace std;

int factorial(int n){
    if( n ==1 || n==0 )
    return 1;
    return n*factorial(n-1);
}

int ncr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}


int main(){
    cout<<ncr(13,0);

}