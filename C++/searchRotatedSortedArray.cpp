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
    return start;
}

int binary(int arr[],int s,int e,int key){
    int start = s;
    int end = e;
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

int findNum(int arr[],int size,int key){
    int pivot = findPivot(arr,size);
    if(key >= arr[pivot]){
        return binary(arr,pivot,size-1,key);
    }
    else{
        return binary(arr,0,pivot-1,key);
    }
}

int main(){
    int arr[] = {3,4,5,6,1,2,3};

    cout<<"Position of  elemnet in the array is "<<findNum(arr,7,2)<<endl;
    return 0;
}