//minimun difference element in a sorted array
#include<bits/stdc++.h>
using namespace std;

int min(int a[],int n,int x){
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(x==a[mid]) return a[mid];
		else if(a[mid] < x)
			low=mid+1;
		else
			high=mid-1;
	}
	return min(abs(a[low]-x),abs(a[high]-x));
}
int main(){
	int a[]={1,3,8,9,15};
	cout<<min(a,5,11);
	return 0;
}
