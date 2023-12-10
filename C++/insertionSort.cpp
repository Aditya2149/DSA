#include<iostream>
using namespace std;

int InsertionSort(int arr[],int size){

    for(int i=1;i<size;i++){
        int j =i-1;
        int temp = arr[i];
        for(;j>=0;j--){
            if(arr[j] > temp)
            arr[j+1] = arr[j];
            else
            break;
        }
        arr[j+1] = temp;
    }
    return 0;
}
int main(){
    int arr[] = {65,12,24,19,11};
    int size =sizeof(arr)/sizeof(arr[0]);

    InsertionSort(arr,size);

    for(int i=0;i<size;i++)
     cout<<arr[i]<<endl;
    
    
    return 0;
}