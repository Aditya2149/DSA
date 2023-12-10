#include <iostream>
#include<array>

// #include<algorithm>
using namespace std;

int main(){
    // int a[100];

    array<int, 4>a = {1,2,3,4};

    // fill(a, a+10, 5);

    // for(int i=0;i<a.size();i++){
    //     cout<<a[i];
    // }

    cout<<a.at(2)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    // cout<<a[0]<<endl;
    // cout<<a[6]<<endl;
    // cout<<a[9]<<endl;
    // cout<<a[10]<<endl;
}