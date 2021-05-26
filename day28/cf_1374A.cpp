#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
#define ll long long

int solve(){
	int x, y, n;
		cin >> x >> y >> n;
		if (n - n % x + y <= n) {
			cout << n - n % x + y << endl;
		} else {
			cout << n - n % x - (x - y) << endl;
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