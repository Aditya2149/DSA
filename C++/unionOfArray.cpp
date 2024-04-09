#include<iostream>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
    //code here
    int count =0;
    // int arr[count];
    bool visited[100000]= {false};
    for(int i=0;i<n;i++){
        if(!visited[a[i]]){
            visited[a[i]]=true;
            count++;
        }
        // arr[i] = a[i];
    }
    for(int i=0;i<m;i++){
        if(!visited[b[i]]){
            visited[b[i]]=true;
            count++;
        }
    }
    
    // for(int i=0;i<m+n;i++){
    //     for(int j=i+1;j<m+n;j++){
    //         if(arr[i]==arr[j]){
    //             count--;
    //         }
    //     }
    // }
    return count;
}

int main(){
    int a[5] = {85,2, 4, 5, 3};
    int b[4] = {85,1,3,9};
    cout<<doUnion(a,5,b,4);
    return 0;
}