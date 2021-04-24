#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){


int n,k;
		cin >> n >> k;
		if(n%2==0)
		{
			cout << n+2*k << endl;
               return 0;
		}
		int p = 0;
		for(int i = n; i>=2; i--)
			if(n%i==0)
		    	p = i;
		cout << n+p+2*(k-1) << endl;
	
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