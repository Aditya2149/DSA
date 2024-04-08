#include<iostream>
#include<array>
using namespace std;

int findSum(int A[], int N)
    {
    	//code here.
    	int min = A[0], max=A[0];
    	
    	for(int i=1;i<N;i++){
    	    if(A[i]<min){
    	        min = A[i];
    	    }
    	    else if(A[i]>max){
    	        max = A[i];
    	    }
    	}
    	return max+min;
    	
    }


int main(){
    int N;
    cin>>N;
    int a[N];
    for (int i = 0; i < 5; i++) {
        cin >> a[i]; // Read elements into the array
    }

    cout<<"Sum of max and min: "<<findSum(a,N);
    
    return 0;
}
