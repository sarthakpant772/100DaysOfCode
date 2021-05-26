#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
 
int solve(){
	int n;
	cin>>n;
	if(n<=30){
		cout<<"NO\n";
		return 0;
	}
	int x=n-30;
	if(n==36 || n==40 ||n==44){
	     cout<<"YES\n";
		cout<<n-31<<" 6 10 15\n";
		return 0;
	}
	cout<<"YES\n";
	cout<<x<<" 6 10 14\n";
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