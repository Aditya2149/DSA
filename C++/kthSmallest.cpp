#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
    // int n;
    // for(int i=0;i<k;i++){
    //     int min = INT_MAX;
    //     for(int j=l;j<r;j++){
    //         if(arr[j]<min){
    //             min = arr[j];
    //         }
    //     }
    //     swap(arr[l],min);
    //     l++;
    // }
    // cout<<min;
    sort(arr,arr+r);
    return arr[k-1];
    //code here
}
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i]; 
    }
    cout<<kthSmallest(arr,0,5,3);
    return 0;
}