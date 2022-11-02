#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int findElement(int arr[], int size){
    for(int i=1; i<size; i++){
        
        int leftsum=0;
        for(int j = i-1; j>=0; j--){
            leftsum += arr[j];
        }
        
        int rightsum = 0;
        for(int k=i+1; k<size; k++){
            rightsum += arr[k];
        }
        
        if(leftsum == rightsum){
            return arr[i];
        }
    }
    return -1;
}

int main() {
	int arr1[]  = {1, 4, 2, 5};
	int n1 = sizeof(arr1)/sizeof(arr1[0]);
	cout<<findElement(arr1,n1)<<endl;
	
	int arr2[]  = {2, 3, 4, 1, 4, 5 };
	int n2 = sizeof(arr2)/sizeof(arr2[0]);
	cout<<findElement(arr2,n2)<<endl;
	return 0;
}
