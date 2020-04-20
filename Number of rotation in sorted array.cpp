#include<iostream>
using namespace std;

int noOfRotation(int a[],int n){
	int low=0,high=n-1;
	while(low <= high){
		if(a[low] <= a[high]) return low;
		int mid=(low+high)/2;
		int next=(mid+1)%n,prev=(mid+n-1)%n;
		if(a[mid]<=a[next] && a[mid]<=a[prev])
			return mid;
		else if(a[mid] <= a[high])
			high=mid-1;
		else if(a[mid] >= a[low])
			low=mid+1;
	}
	return -1;
}
int main(){
	int a[]={5,6,7,8,9,10,11,1,2,3,4};
	cout<<noOfRotation(a,11);
	return 0;
}
