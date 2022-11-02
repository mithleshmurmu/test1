#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void printLeader(int arr[], int size){
    stack<int> sk;
    sk.push(arr[size-1]);
    
    for(int i=size-2; i>=0; i--){
        if(arr[i]>=sk.top()){
            sk.push(arr[i]);
        }
    }
    while(!sk.empty()){
        cout<<sk.top()<<" ";
        sk.pop();
    }
}

int main() {
	int arr[] = {16, 17, 4, 3, 5, 2};
	int n = sizeof(arr)/sizeof(arr[0]);
	printLeader(arr,n);
	return 0;
}
