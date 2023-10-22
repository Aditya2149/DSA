#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while (n!=0){
        if(n&1){
            ans = pow(2,i)+ ans;
            cout<<ans<<endl;
        }
        // int bit = n&1;
        // ans = (bit*pow(10,i)) + ans; 
        n = n>>1;
        cout<<n<<endl;
        i++;
    }
    cout<<ans<<endl;
} 
