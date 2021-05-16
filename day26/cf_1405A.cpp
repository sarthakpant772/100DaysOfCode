#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=n-1;i>=0;--i){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
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