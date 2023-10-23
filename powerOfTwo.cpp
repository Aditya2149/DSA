#include<iostream>
#include<math.h>
using namespace std;

int powerTwo(int n){
    int i =0;
    while(i<=31){
        if(n == pow(2,i)){
            return true;
            break;
        }
        i++;
    }
    return false;

}

int main(){  
    int n;
    cin>>n; 
    cout<<powerTwo(n);     
}