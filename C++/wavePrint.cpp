#include<iostream>
using namespace std;

void wavePrintArray(int arr[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
        i++;
        for(int j=2;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
    }

}
int main(){
    // int arr[3][4];
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Wave printed array: ";
    wavePrintArray(arr);
    return 0;
}