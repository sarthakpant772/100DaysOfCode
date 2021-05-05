#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
    long long n,x;
	cin>>n>>x;
	vector<int> a(n);
	long long  sum=0;
	for(long long  i=0;i<n;++i){
		cin>>a[i];
		sum+=a[i];
	}
	if(sum==x){
	     cout<<"NO\n";
	     return 0;
	}
	else{
	     cout<<"YES\n";
	     sum=0;
	     for(long long  i=0;i<n;++i){
	          if(x==a[i]){
	               swap(a[i],a[i+1]);
	          }
	          cout<<a[i]<<" ";
	          x-=a[i];
	     }
	     
	     
	     cout<<"\n";

	}
	return 0;
}
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	long long n;
	cin>>n;

	while(n--){
		solve();
	}
return 0;

}