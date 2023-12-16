#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> ans){
    int s =0;
    int e = ans.size()-1;

    while(s<e){
        swap(ans[s++],ans[e--]);
    }
    return ans;
}

int main(){
    vector<int> arr1 = {9,7,9};
    vector<int> arr2 = {9,9};

    //method-1
    int i = arr1.size()-1;
    int j = arr2.size()-1;
    vector<int> ans;
    int carry=0;

    while(i>=0 && j>=0){
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 +val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0){
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum = arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    while(carry!=0){
        int sum =  carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    ans = reverse(ans);

    for(int i:ans)
    cout<<i<<" ";
    
    //Method-2
    // vector<int> arr3;
    // int num1=0,num2=0,k=1;

    // for(int i = arr1.size()-1;i>=0;i--){
    //     num1 += arr1[i]*k;
    //     k =k*10;
    // } 
    // k=1;
    // for(int j =arr2.size()-1;j>=0;j--){
    //     num2 += arr2[j]*k;
    //     k =k*10;
    // }
    // int num3 =num1 + num2;
    // cout<<num3;
    return 0;
}