#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
char a[1000][1010];
int solve(){
	int n,m,k;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=n-1;i>=0;--i){
		if(a[i]<=i+1){
			cout<<i+2<<"\n";
			return 0;
		}
	
	}
	cout<<1<<"\n";
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