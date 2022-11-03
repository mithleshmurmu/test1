#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void sort_arr(int arr[], int n){
    
    int lo = 0;
    int hi = n-1;
    int mid = 0;
    
    while(mid <= hi){
        switch(arr[mid]){
            case 0:
                swap(arr[lo++],arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid],arr[hi--]);
                break;
        }
    }
}

void print_arr(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}

int main() {
	int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort_arr(arr,n);
	print_arr(arr,n);
	return 0;
}
