#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5,1);//initialize all elements with 1
    vector<int> last(a);//initialize all elements of a in last

    for(int ele:a)
    cout<<ele<<" ";

    v.push_back(5);
    v.push_back(6);
    v.push_back(7);

    cout<<"size--"<<v.size()<<endl;
    cout<<"capacity--"<<v.capacity()<<endl;
    cout<<"first--"<<v.front()<<endl;
    cout<<"last--"<<v.back()<<endl;
    return 0;
}