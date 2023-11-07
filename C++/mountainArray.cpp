#include<iostream>
using namespace std;

int mountPeak(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start <end){
        if(arr[mid] < arr[mid+1]){
            start = mid +1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return arr[mid];
}

int main(){
    int arr[] = {1,2,5,8,2,0};
    cout<<"Peak elemnt in the mountain array is "<<mountPeak(arr,6)<<endl;
    return 0;
}