#include<iostream>
using namespace std;

int FirstOccr(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int ans =-1;
    //this can create issue in case of start= end = 2^31 - 1
    // int mid = (start + end)/2; 
    //therefore, use this
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]  == key){
            ans = mid;
            end = mid -1;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int LastOccr(int arr[],int size,int key){
    int start = 0;
    int end = size - 1;
    int ans =-1;
    //this can create issue in case of start= end = 2^31 - 1
    // int mid = (start + end)/2; 
    //therefore, use this
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid]  == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    int occr[6] = {1,3,3,3,4,5};

    cout<<"First Position of 3 in even array: "<<FirstOccr(occr,6,3)<<endl;
    cout<<"Last Position of 3 in even array: "<<LastOccr(occr,6,3)<<endl;
    cout<<"Number of occurences: "<<LastOccr(occr,6,3)-FirstOccr(occr,6,3)+1<<endl;
    return 0;
}