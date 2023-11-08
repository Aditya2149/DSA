#include<iostream>
using namespace std;

long long int search(int key){
    int s = 0,e = key;
    long long int mid = s+(e-s)/2;
    long long int ans = -1;
    while(s<=e){
        long long int square = mid*mid;
        if(square == key){
            return mid;
        }
        else if(square < key){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int key;
    cout<<"Enter number to gwt square root: ";
    cin>>key;
    cout<<"Square root of element is "<<search(key);
    // cout<<"Square root of element is "<<pow(2,2);
    return 0;
}