#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int equilibriumPoint(int a[], int n){
    int i=0,start=0,end=n-1,left_sum=0,right_sum=0;
    for(i=0; i<n; i++){
        if(start == end && left_sum == right_sum){
            return a[start];
        }
        if(start == end)
            return -1;
        if(left_sum > right_sum){
            right_sum += a[end];
            end--;
        }
        else if(right_sum > left_sum){
            left_sum += a[start];
            start++;
        }
        else{
            right_sum += a[end];
            end--;
        }
    }
    if(!i){
        return a[0];
    }
}

int main() {
	int a[] = {2, 3, 4, 1, 4, 5};
	int n = sizeof(a)/sizeof(a[0]);
	std::cout<<equilibriumPoint(a,n)<< std::endl;
	return 0;
}
