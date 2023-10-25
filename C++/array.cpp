#include <iostream>
// #include<algorithm>
using namespace std;

int main(){
    int a[100];

    fill(a, a+10, 5);

    // for(int i=0;i<100;i++){
    //     a[i] = 1;
    // }

    cout<<a[79]<<endl;
    cout<<a[0]<<endl;
    cout<<a[6]<<endl;
    cout<<a[9]<<endl;
    cout<<a[10]<<endl;
}