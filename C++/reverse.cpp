#include <iostream>
using namespace std;

// void reverse(int arr[],int size){
//     int rev[100];
//     for(int i = size-1;i >= 0;i--){
//         rev[size-1 -i] = arr[i];
//     }
//     for(int i=0;i<size;i++)
//      cout<<rev[i];
// }

int swapRev(int arr[],int size){
    int start = 0;
    int end = size-1;

    for(int i =0;i < size/2;i++){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    return 0;
}

int main(){

    int arr[100] = {1,2,3,4,5,6};
    int size = 6;
    // reverse(arr,5);
    swapRev(arr,size);
    for(int i =0;i<size;i++)
    cout << arr[i];

}