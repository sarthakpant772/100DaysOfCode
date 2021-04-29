#include <bits/stdc++.h>
#include<iostream>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	int x=0;
	for(int i=0;i<n;++i){
		cin>>a[i];

		a[i]+=x;
		x=max(a[i],x);

		cout<<a[i]<<" ";

	}
return 0;

}