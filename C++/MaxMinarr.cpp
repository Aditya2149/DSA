#include <iostream>
using namespace std;

int main(){
    int arr[5] = {12,5,1,67,9};
    int max =arr[0];
    int min =arr[0];
    for (int i=1;i<5;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
}