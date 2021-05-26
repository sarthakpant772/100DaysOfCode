#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define vi vector<int>
char a[1000][1010];
int solve(){
     int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(i==0 && j==0){
				cout<<'W';
			}
			else
			cout<<'B';
		}
		cout<<"\n";
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