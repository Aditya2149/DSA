#include <iostream>
using namespace std;

// void uniqueEle(int arr[], int uniqueArray[], int size) {
//     int count = 0;
//     for (int i = 0; i < size; i++) {
//         bool isuniq = true;
//         for (int j = i + 1; j < size; j++) {
//             if (arr[i] == arr[j]) {
//                 isuniq = false;
//                 break; 
//             }
//         }
//         if (isuniq) {
//             uniqueArray[count] = arr[i];
//             count++;
//         }
//     }
//     for (int i = 0; i < count; i++)
//         cout << uniqueArray[i] << endl;
// }

int FindUniqNum(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main() {
    int arr[100] = {1, 2, 2, 3, 3, 3, 4, 1, 3};// doesn't work when duplicates of a num are in odd no. like: {1,2,2,2}
    int uniqueArray[100];
    int size = 9;
    // uniqueEle(arr, uniqueArray, size);
    cout<<FindUniqNum(arr,size);
}
