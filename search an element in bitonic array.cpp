#include <iostream>
using namespace std;
int maxi(int a[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(x==a[mid] || mid ==0 || mid==n-1)
            return mid;
        else if(mid>0 && a[mid-1] >= a[mid])
            {
				if(x>a[mid]) high=mid-1;
				else low=mid+1;
			}
        else if(mid>0 && a[mid+1] >= a[mid])
            {
				if(x < a[mid]) high=mid-1;
    			else low=mid+1;
			}
	}
	return -1;
}
int main() {
	//code
	    int a[]={3,4,5,2,1};
	    cout<<maxi(a,5,4)<<endl;
	return 0;
}
