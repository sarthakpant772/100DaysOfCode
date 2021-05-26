#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define vi vector<int>
char a[1000][1010];
int solve(){
	ll a,b,x,y;
	cin>>a>>b>>x>>y;
    if(a==b && a==0){
		cout<<0<<"\n";
		return 0;
	}
	if(min(a,b)*x*2<min(a,b)*y){
		cout<<(a+b)*x<<"\n";
		return 0;
	}

	int i=min(a,b);
	int j=max(a,b);
	j-=i;

	cout<<i*y+j*x<<"\n";

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