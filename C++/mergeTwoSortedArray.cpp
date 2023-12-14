#include<iostream>
#include<vector>
using namespace std;

int merge(int arr1[],int s1,int arr2[],int s2,int sumArr[]){
    int i=0,j=0,k=0;

    while(i<s1 && j<s2){
        if(arr1[i]<arr2[j]){
            sumArr[k] = arr1[i];
            k++;
            i++;  
        }
        else{
            sumArr[k] = arr2[j];
            k++;
            j++;
        }
    }
    while(i<s1){
            sumArr[k] = arr1[i];
            k++;
            i++; 
    }
    while(j<s2){
            sumArr[k] = arr2[j];
            k++;
            j++; 
    }
    return 0;

}

int main(){
    int arr1[5] = {1,3,5,7,9};
    int arr2[4] = {2,4,6,8};
    
    int sumArr[9];

    merge(arr1,5,arr2,4,sumArr);

    for(int i:sumArr)
    cout<<i<<" ";
    return 0;
}