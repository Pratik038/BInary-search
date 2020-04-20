#include<iostream>
using namespace std;
int binary_search(int a[],int n,int sk){
	int lb=0,ub=n-1;
	while(lb<=ub){
		int mid= lb + (ub-lb)/2; //  lb + ub may overflow 
		if(a[mid]==sk)
			return mid;
		else if(a[mid] < sk)
			lb=mid+1;
		else
			ub=mid-1;
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,6,7,8,9,13,34,56};
	int sk; cout<<"Enter a number to search:"; cin>>sk;
	int index=binary_search(arr,10,sk);
	if(index!=-1)
		cout<<"Element found at index:"<<index;
	else
		cout<<"Element not found!";
	return 0;
}
