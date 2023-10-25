#include <iostream>
using namespace std;

int bits(int a,int b){
    int count = 0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a = a>>1;
    }
    while(b!=0){
        if(b&1){
            count++;
        }
        b = b>>1;
    }
    return count;
}

int main(){
    cout<<bits(2,3);

}