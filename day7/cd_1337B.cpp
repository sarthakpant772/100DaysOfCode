#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
	int x,n,m;

	cin>>x>>n>>m;
	
	while (x>0&&n&&x/2+10<x){n--;x=x/2+10;}
	if (x<=m*10)printf("YES\n");
	else printf("NO\n");
// 	cout<<"NO\n";
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int T;
	cin >> T;
	while (T--)
		solve();
}