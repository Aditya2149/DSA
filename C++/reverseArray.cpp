#include<iostream>
#include<array>

using namespace std;

int main(){
    array<int,5> a= {1,2,3,4,5};
    
    // for(int i=a.size();i>0;i--)
    // cout<<i<<" ";

    int s = 0,e = a.size()-1;
    while(s<e){
        swap(a[s],a[e]);
        s++;
        e--;
    }

    for(int i:a)
    cout<<i<<" ";

    
    return 0;
}