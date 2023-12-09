#include<iostream>
using namespace std;


int bubbleSort(int arr[], int size){

    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j] > arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    return 0;
}
int main(){
    int arr[] = {65,12,24,19,11};
    int size =sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,size);

    for(int i=0;i<size;i++)
     cout<<arr[i]<<endl;
    
    
    return 0;
}