#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;
int solve(){
	int n,a,b,c,d;
    cin>>n>>a>>b>>c>>d;
	int l=n*(a-b);
	int r=n*(a+b);

	if(r<c-d || l>c+d){
		cout<<"no\n";
	}
	else
	  cout<<"yes\n";

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