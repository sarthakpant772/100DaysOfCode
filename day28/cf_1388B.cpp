#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	int n;
	cin>>n;
	int x=(n+3)/4;
	for(int i=0;i<n-x;++i){
		cout<<"9";
	}
	for(int i=0;i<x;++i){
		cout<<"8";
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