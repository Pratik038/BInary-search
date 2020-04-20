#include <iostream>
using namespace std;
int maxi(int a[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if((mid==0 || a[mid-1] <= a[mid])&&(mid==n-1 || a[mid+1] <= a[mid]))
            return a[mid];
        else if(mid>0 && a[mid-1] >= a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
}
int main() {
	//code
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    cout<<maxi(a,n)<<endl;
	}
	return 0;
}
