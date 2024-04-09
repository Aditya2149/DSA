#include<iostream>
using namespace std;


int main(){
    int arr[6];
    int n=6,posIndx=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[posIndx],arr[i]);
            posIndx++;
        }
    }
    cout<<"New array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}