#include<iostream>
using namespace std;
bool ispresent(int arr[][4], int target){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    // int arr[3][4];
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,1,1,1}, {2,2,2,2}, {3,3,3,3}};

    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int target;
    cout<<"Enter target element: ";
    cin>>target;

    if(ispresent(arr,target)){
        cout<<"Found"<<endl;
    }
    else
    cout<<"Not Found"<<endl;

    return 0;
}