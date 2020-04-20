#include<iostream>
using namespace std;
int first(int a[],int low,int high,int sk){
	int res=-1;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(a[mid]==sk){
			res=mid;
			high=mid-1;
		}
		else if(a[mid] < sk) low=mid+1;
		else high=mid-1;
	}
	return res;
}
int last(int a[],int low,int high,int sk){
	int res=-1;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(a[mid]==sk){
			res=mid;
			low=mid+1;
		}
		else if(a[mid] < sk) low=mid+1;
		else high=mid-1;
	}
	return res;
}
int main(){
	int a[]={2,4,8,10,10,10,12,15};
	int size=sizeof(a)/sizeof(a[0]);
	int f=first(a,0,size-1,10);
	int l=last(a,0,size-1,10);
	cout<<l-f+1;
	return 0;
}
