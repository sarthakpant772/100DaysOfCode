#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
char a[1000][1010];
int solve(){
	int n,m,k;
	cin>>n>>m>>k;
	if(m==0){
		cout<<"0\n";
		return 0;
	}
	int x=n/k;
	if(m<=x){
		cout<<m<<"\n";
		return 0;
	}
	else{
		m-=x;
		int y=(m+k-2)/(k-1);
		cout<<x-y<<"\n";
	}
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