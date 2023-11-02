#include<iostream>
using namespace std;

void findoccur(int arr[],int size){
     int occr[100];
        for (int i = 0; i <size ; i++) {
            int count = 0;
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++; 
                }
            }
            occr[i]  = count;
        }
    for(int i=0;i<size;i++)
    cout<<occr[i]<<endl;
}
int main(){
    int arr[100] = {1,2,2,1,3,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    findoccur(arr,size);
    return 0;
}