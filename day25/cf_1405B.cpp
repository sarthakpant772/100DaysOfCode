#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	int n;
	cin>>n;
	vector <ll> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	ll sum=0;
	
	for(int i=0;i<n;++i){
		if(a[i]>0)
		  sum+=a[i];
		else{
			if(a[i]<0){
				int k=min(sum,-a[i]);
			  //   cout<<k<<" ";
			a[i]+=k;
			sum-=k;
			}
		}  
	}

	sum=0;
	for(int i=0;i<n;++i){
		if(a[i]<0){
			sum+=abs(a[i]);
		}

	}
    cout<<sum<<"\n";
	return 0;
}

int main() {
		ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n=1;
    cin>>n;
	while(n--){
		solve();
	}
return 0;

}