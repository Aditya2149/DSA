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

double precision(int key,int precision,int tempsol){
    double ans = tempsol;
    double factor = 1;

    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j=ans;j*j<key;j=j+factor){
            ans =j;
        }
    }
    return ans;
}
int main(){
    int key;
    cout<<"Enter number to gwt square root: ";
    cin>>key;
    int tempsol = search(key);
    cout<<"Integer solution is "<<tempsol<<endl;
    cout<<"Precised solution is "<<precision(key,3,tempsol)<<endl;
    return 0;
}