#include<iostream>
using namespace std;

int sort(int arr[],int size){
    int i=0,j=size-1;
    while(i<j){
        if(arr[i]==0)
        i++;
        else if(arr[j]==1)
        j--;
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return 0;
}
int main(){
    int arr[] = {0,1,0,1,0,0,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    for(int i=0;i<size;i++)
    cout<<arr[i];
    
    return 0;
}