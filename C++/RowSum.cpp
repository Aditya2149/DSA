#include<iostream>
using namespace std;

void Largestsumrow(int arr[][4]){
    int max = -1;
    int rowIndex = -1;
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        if(sum > max){
            max = sum;
            rowIndex = i;
        }
    }
    cout<<"Largest sum of row: "<<max<<endl;
    cout<<"Row index: "<<rowIndex<<endl;

}

void printsumrow(int arr[][4]){
    for(int i=0;i<3;i++){
        int sum =0;
        for(int j=0;j<4;j++){
            sum += arr[i][j];
        }
        cout<<"Sum of "<<i<<" row: "<<sum<<endl;
    }
}

void printsumcol(int arr[][4]){
    for(int i=0;i<4;i++){
        int sum =0;
        for(int j=0;j<3;j++){
            sum += arr[j][i];
        }
        cout<<"Sum of "<<i<<" col: "<<sum<<endl;
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

    printsumrow(arr);  
    // printsumcol(arr); 
    Largestsumrow(arr);
    return 0;
}