//program to search an element in a sorted array
#include<iostream>
using namespace std;

int search(int a[],int n,int x){
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(a[mid]==x) return mid; //case 1:Found x;
		
		if(a[mid] <= a[high]){ // case 2: Right half is sorted
			if(x > a[mid] && x <=a[high])
				low=mid+1;
			else
				high=mid-1;
		}
		else{
			if(x < a[mid] && x >=a[low])
				high=mid-1;
			else
				low=mid+1;
		}
	}
	return -1;
}
int main(){
	int a[]={5,6,7,8,1,2,3,4};
	int x; cout<<"enter a number:"; cin>>x;
	int index=search(a,8,x);
	if(index!=-1)
		cout<<"Element found at index:"<<index;
	else
		cout<<"ELement not found!";
	return 0;
}
