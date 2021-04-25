#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
	long long n,k=2;

	cin>>n;
	bool t=true;
	long long x=1;
	
	while(t){
	     long long q=pow(2,k);
	    long long  o=(n)%(q-1);
		if(o==0){
			x=n/(q-1);
			break;
		} 
		k++;
	}

	cout<<x<<"\n";

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