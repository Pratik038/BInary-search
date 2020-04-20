#include <iostream>
using namespace std;
int c(int a[],int n,int x){
    int low=0,high=n-1,res=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x) return mid;
        else if(a[mid] < x){
            low=mid+1;
        }
        else{
            res=mid;
			high=mid-1;
		}    
    }
    return res;
}
int main() {
	//code
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    cout<<c(a,n,k)<<endl;
	return 0;
}
