#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int findElement(int arr[], int size){
    int prefixSum[size];
    prefixSum[0] = arr[0];
    for(int i=1; i<size; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
}

    int suffixSum[size];
    suffixSum[size-1] = arr[size-1];
    for(int j = size-2; j>=0; j--){
        suffixSum[j] = suffixSum[j+1] + arr[j];
    }
    
    for(int i=1; i<size-1; i++){
        if(prefixSum[i] == suffixSum[i])
            return arr[i];
    }
    return -1;
}

int main() {
	int arr[] = {1, 4, 2, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<findElement(arr,size)<<endl;
	return 0;
}
