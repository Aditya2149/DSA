#include<iostream>
using namespace std;

int selectionSort(int arr[],int size){

    for(int i=0;i< size-1;i++){
        int min = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
        // int temp = arr[i];
        // arr[i] = arr[min];
        // arr[min] = temp;
    }
    return 0;
}

int main(){
    int arr[] = {65,12,24,19,11};
    int size =sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,size);

    for(int i=0;i<size;i++)
     cout<<arr[i]<<endl;
    
    return 0;
}