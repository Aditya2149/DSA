#include<iostream>
using namespace std;

int findPivot(int arr[],int size){
    int start= 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{        
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return arr[start];

}
int main(){
    int arr[] = {3,4,5,6,1,2};

    cout<<"Pivot elemnet in the array is "<<findPivot(arr,6)<<endl;
    return 0;
}