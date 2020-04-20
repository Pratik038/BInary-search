// A C++ program to find a peak element using divide and conquer in O(log n) time  
#include<iostream>
using namespace std;
int peakElement(int a[],int lb,int ub,int n){
	int mid=(lb+ub)/2;
	
	if((mid==0 || a[mid-1]<=a[mid]) && (mid==n-1 || a[mid+1]<=a[mid])) 
		return mid;
	
	else if(mid>0 && a[mid-1]>=a[mid])
		return peakElement(a,lb,mid-1,n);
	
	else 
		return peakElement(a,mid+1,ub,n); 
}
int findPeak(int a[],int n){
	return peakElement(a,0,n-1,n);
}
int main(){
	int arr[] = {1, 3, 20, 4, 1, 0}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	cout << "Index of a peak point is "
		<< findPeak(arr, n); 
	return 0;
}
