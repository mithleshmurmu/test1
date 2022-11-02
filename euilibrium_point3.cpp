#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int findElement(int arr[], int n){
    
    int leftSum=0,rightSum=0;
    for(int i=1; i<n; i++){
        rightSum += arr[i];
    }
    for(int i=0, j=1; j<n; i++, j++){
        rightSum = rightSum  - arr[j];
        leftSum = leftSum + arr[i];
        
        if(leftSum == rightSum){
            return arr[i+1];
        }
    }
return -1;
}

int main() {
	int arr[] = {2, 3, 4, 1, 4, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<findElement(arr,size)<<endl;
	return 0;
}
