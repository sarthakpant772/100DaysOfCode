#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
	long long n, a, b;
	cin>>n;
	a=n/2+1;
	b=n-a;
	if(a>b){
		cout<<b<<"\n";
	}
	else{
		cout<<b-1<<"\n";
	}
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