#include <iostream>
using namespace std;
//{1,2,3,4,5}
//{2,1,4,3,}
void swapAlter(int arr[],int size){
    for(int i=0;i<size;i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    // return 0;
}

int main(){
    int arr[100] = {1,2,3,4,5,6};
    int size = 6;

    swapAlter(arr,size);
    for(int i=0;i<size;i++)
    cout<<arr[i];

}