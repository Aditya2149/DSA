#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    
    cout<<"Finding 6--> "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Lower bound--> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper bound--> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=5;

    cout<<"max-- "<<max(a,b)<<endl;
    cout<<"min-- "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"after swapping: "<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"String-- "<<abcd<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"After roatate: "<<endl;
    for(int i:v)
    cout<<i<<" ";
    cout<<endl;

    sort(v.begin(),v.end());
    cout<<"After sorting: "<<endl;
    for(int i:v)
    cout<<i<<" ";
    cout<<endl;
    
    return 0;
}