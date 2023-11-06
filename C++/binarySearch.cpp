#include<iostream>
using namespace std;

int binary(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    //this can create issue in case of start= end = 2^31 - 1
    // int mid = (start + end)/2; 
    //therefore, use this
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]  == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
int main(){
    int even[6] = {2,3,14,15,68,90};
    int odd[5] = {12,31,44,45,58};

    cout<<"Position of 68 in even array: "<<binary(even,6,68)<<endl;
    cout<<"Position of 45 in odd array: "<<binary(odd,5,45)<<endl;
    return 0;
}