#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	int n;
	cin>>n;
	int x=100-n;
	int l=__gcd(n,x);
	cout<<(n/l)+(x/l)<<"\n";
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