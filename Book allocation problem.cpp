// Books allocation problem(Allocate minimum number of pages)
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool isValid(ll books[],ll n,ll k,ll ans){
    ll students=1;
    ll cur_pages=0;
    for(ll i=0;i<n;i++){
        if(cur_pages+books[i] > ans){
            students++;
            cur_pages=books[i];
            if(students > k)
                return false;
        }
        else
            cur_pages+=books[i];
    }
    return true;
}
int binary_search(ll books[],ll n,ll k){
    if(n < k) return -1;
    ll start=0,end=0;
    ll total_pages=0;
    for(ll i=0;i<n;i++){
        total_pages+=books[i];
        start=max(start,books[i]);
    }
    end=total_pages;
    
    int finalAns=start;
    while(start<=end){
        ll mid = start + (end-start)/2;
        
        if(isValid(books,n,k,mid)){
            finalAns=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }
    return finalAns;
}
int main() {
	//code
	int t; cin>>t;
	while(t--){
	    ll n; cin>>n;
	    ll books[n];
	    for(ll i=0;i<n;i++) cin>>books[i];
	    ll k; cin>>k;
	    cout<<binary_search(books,n,k)<<endl;
	}
	return 0;
}
