#include<iostream>
using namespace std;

bool isPossible(int arr[],int size,int m,int mid){
    int studentcount = 1;
    int pagesum = 0;

    for(int i=0;i<size;i++){
        if(pagesum + arr[i] <= mid){
            pagesum += arr[i];
        }
        else{
            studentcount++;
            if(studentcount > m || arr[i] > mid){
                return false;
            }
            pagesum = 0;
            pagesum += arr[i];
        }
    }
    return true;
}

int allocation(int arr[],int size,int m){
    int s=0,ans=-1;
    int sum =0;
    for(int i=0;i<size;i++)
        sum+= arr[i];
    int e = sum;
    int mid = s +(e-s)/2;

    while(s<=e){
        if(isPossible(arr,size,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

int main(){
    // int arr[] = {10,20,30,40};
    int arr[] = {12,34,67,90};
    cout<<allocation(arr,4,2)<<endl;
    
    return 0;
}